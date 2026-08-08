#include "global.h"
#include "main.h"
#include "task.h"
#include "bg.h"
#include "window.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "sprite.h"
#include "scanline_effect.h"
#include "sound.h"
#include "text.h"
#include "list_menu.h"
#include "malloc.h"
#include "gpu_regs.h"
#include "battle_records.h"
#include "frontier_util.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/battle_frontier.h"
#include "frontier_rankings_screen.h"

// A page-per-(facility, level mode) browser over the Battle Frontier Ranking Hall's own
// PrintHallRecords(), so it looks and reads identically to walking up to a desk terminal -
// just paginated with scroll arrows instead of requiring a separate terminal per facility.

#define NUM_RANKING_HALL_FACILITIES 10 // RANKING_HALL_TOWER_SINGLES .. RANKING_HALL_TOWER_LINK
#define NUM_RANKINGS_PAGES (NUM_RANKING_HALL_FACILITIES * 2) // x2 for Lv. 50 / Open Level

#define TAG_RANKINGS_SCROLL_ARROW 5500

enum { WIN_RANKINGS };

static const struct WindowTemplate sFrontierRankingsWinTemplates[] =
{
    // Identical shape/placement to the Ranking Hall's own sRankingHallRecordsWindowTemplate
    [WIN_RANKINGS] = {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 1,
        .width = 26,
        .height = 17,
        .paletteNum = 15,
        .baseBlock = 1
    },
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sFrontierRankingsBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 1,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    }
};

static const struct ScrollArrowsTemplate sFrontierRankingsScrollArrowsTemplate =
{
    .firstArrowType = SCROLL_ARROW_LEFT,
    .firstX = 8,
    .firstY = 88,
    .secondArrowType = SCROLL_ARROW_RIGHT,
    .secondX = 224,
    .secondY = 88,
    .fullyUpThreshold = 0xFFFF,   // Never hide - the page list wraps around, like the Bag's pocket arrows
    .fullyDownThreshold = 0xFFFF,
    .tileTag = TAG_RANKINGS_SCROLL_ARROW,
    .palTag = TAG_RANKINGS_SCROLL_ARROW,
    .palNum = 0,
};

struct FrontierRankingsScreenData
{
    MainCallback savedCallback;
    u16 scrollOffset; // Unused beyond satisfying AddScrollIndicatorArrowPair's signature
    u8 page;
    u8 scrollArrowsTaskId;
};

static EWRAM_DATA struct FrontierRankingsScreenData *sRankingsData = NULL;

static void CB2_InitFrontierRankingsScreen(void);
static void CB2_FrontierRankingsScreen(void);
static void VBlankCB_FrontierRankingsScreen(void);
static void Task_FrontierRankingsScreenInput(u8 taskId);
static void Task_FrontierRankingsScreenFadeOut(u8 taskId);
static void PrintCurrentRankingsPage(void);
static void GetPageFacilityAndMode(u8 page, s32 *facilityId, s32 *lvlMode);

void ShowFrontierRankingsScreen(MainCallback callback)
{
    sRankingsData = AllocZeroed(sizeof(*sRankingsData));
    sRankingsData->savedCallback = callback;
    SetMainCallback2(CB2_InitFrontierRankingsScreen);
}

static void GetPageFacilityAndMode(u8 page, s32 *facilityId, s32 *lvlMode)
{
    *facilityId = page / 2;
    *lvlMode = (page % 2 == 0) ? FRONTIER_LVL_50 : FRONTIER_LVL_OPEN;
}

static void PrintCurrentRankingsPage(void)
{
    s32 facilityId, lvlMode;

    GetPageFacilityAndMode(sRankingsData->page, &facilityId, &lvlMode);
    FillWindowPixelBuffer(WIN_RANKINGS, PIXEL_FILL(1));
    PrintHallRecords(facilityId, lvlMode); // Reuses the Ranking Hall's own record formatting/printing
    CopyWindowToVram(WIN_RANKINGS, COPYWIN_GFX);
}

static void CB2_InitFrontierRankingsScreen(void)
{
    switch (gMain.state)
    {
    case 0:
        SetVBlankCallback(NULL);
        gMain.state++;
        break;
    case 1:
        DmaClear32(3, OAM, OAM_SIZE);
        DmaClear16(3, PLTT, PLTT_SIZE);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sFrontierRankingsBgTemplates, ARRAY_COUNT(sFrontierRankingsBgTemplates));
        ChangeBgX(0, 0, BG_COORD_SET);
        ChangeBgY(0, 0, BG_COORD_SET);
        InitWindows(sFrontierRankingsWinTemplates);
        DeactivateAllTextPrinters();
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        ScanlineEffect_Stop();
        ResetTasks();
        ResetSpriteData();
        FreeAllSpritePalettes();
        gMain.state++;
        break;
    case 3:
        // Loads the same window-border + dialogue-box graphics/palettes the Ranking Hall's
        // own DrawStdWindowFrame call relies on already being resident from the field.
        LoadMessageBoxAndBorderGfx();
        gRecordsWindowId = WIN_RANKINGS;
        DrawStdWindowFrame(WIN_RANKINGS, FALSE);
        PrintCurrentRankingsPage();
        PutWindowTilemap(WIN_RANKINGS);
        CopyWindowToVram(WIN_RANKINGS, COPYWIN_FULL);
        gMain.state++;
        break;
    case 4:
        sRankingsData->scrollArrowsTaskId = AddScrollIndicatorArrowPair(&sFrontierRankingsScrollArrowsTemplate, &sRankingsData->scrollOffset);
        gMain.state++;
        break;
    case 5:
        CreateTask(Task_FrontierRankingsScreenInput, 0);
        gMain.state++;
        break;
    case 6:
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        ShowBg(0);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(VBlankCB_FrontierRankingsScreen);
        SetMainCallback2(CB2_FrontierRankingsScreen);
        break;
    }
}

static void CB2_FrontierRankingsScreen(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB_FrontierRankingsScreen(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_FrontierRankingsScreenInput(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    if (JOY_NEW(DPAD_RIGHT) || GetLRKeysPressed() == MENU_R_PRESSED)
    {
        PlaySE(SE_SELECT);
        sRankingsData->page = (sRankingsData->page + 1) % NUM_RANKINGS_PAGES;
        PrintCurrentRankingsPage();
    }
    else if (JOY_NEW(DPAD_LEFT) || GetLRKeysPressed() == MENU_L_PRESSED)
    {
        PlaySE(SE_SELECT);
        sRankingsData->page = (sRankingsData->page + NUM_RANKINGS_PAGES - 1) % NUM_RANKINGS_PAGES;
        PrintCurrentRankingsPage();
    }
    else if (JOY_NEW(B_BUTTON) || JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_FrontierRankingsScreenFadeOut;
    }
}

static void Task_FrontierRankingsScreenFadeOut(u8 taskId)
{
    if (!UpdatePaletteFade())
    {
        RemoveScrollIndicatorArrowPair(sRankingsData->scrollArrowsTaskId);
        DestroyTask(taskId);
        FreeAllWindowBuffers();
        SetMainCallback2(sRankingsData->savedCallback);
        FREE_AND_SET_NULL(sRankingsData);
    }
}
