#include "global.h"
#include "battle_tent.h"
#include "overworld.h"
#include "event_data.h"
#include "region_map.h"
#include "battle.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "random.h"
#include "item.h"
#include "battle_factory_screen.h"
#include "battle_pike.h"
#include "party_menu.h"
#include "frontier_util.h"
#include "string_util.h"
#include "constants/battle_tent.h"
#include "constants/battle_tent_trainers.h"
#include "constants/battle_tent_mons.h"
#include "constants/battle.h"
#include "constants/items.h"
#include "constants/layouts.h"
#include "constants/region_map_sections.h"
#include "constants/trainers.h"

// This file's functions.
static void InitVerdanturfTentChallenge(void);
static void GetVerdanturfTentPrize(void);
static void SetVerdanturfTentPrize(void);
static void SetVerdanturfTentTrainerGfx(void);
static void BufferVerdanturfTentTrainerIntro(void);
static void SaveVerdanturfTentChallenge(void);
static void SetRandomVerdanturfTentPrize(void);
static void GiveVerdanturfTentPrize(void);
static void InitFallarborTentChallenge(void);
static void GetFallarborTentPrize(void);
static void SetFallarborTentPrize(void);
static void SaveFallarborTentChallenge(void);
static void SetRandomFallarborTentPrize(void);
static void GiveFallarborTentPrize(void);
static void BufferFallarborTentTrainerName(void);
static void InitSlateportTentChallenge(void);
static void GetSlateportTentPrize(void);
static void SetSlateportTentPrize(void);
static void SaveSlateportTentChallenge(void);
static void SetRandomSlateportTentPrize(void);
static void GiveSlateportTentPrize(void);
static void SelectInitialRentalMons(void);
static void SwapRentalMons(void);
static void GenerateOpponentMons(void);
static void GenerateInitialRentalMons(void);
static void InitChampionsDomeTentChallenge(void);
static void GetChampionsDomeTentPrize(void);
static void SetChampionsDomeTentPrize(void);
static void SaveChampionsDomeTentChallenge(void);
static void SetRandomChampionsDomeTentPrize(void);
static void GiveChampionsDomeTentPrize(void);
static void GenerateChampionsDomeBracket(void);
static void BufferChampionsDomeTentTrainerName(void);
static void InitChampionsPikeTentChallenge(void);
static void GetChampionsPikeTentPrize(void);
static void SetChampionsPikeTentPrize(void);
static void SaveChampionsPikeTentChallenge(void);
static void SetRandomChampionsPikeTentPrize(void);
static void GiveChampionsPikeTentPrize(void);
static void BufferChampionsPikeTentTrainerName(void);
static void TryChampionsPikeMysteryRoom(void);
static void InitChampionsPyramidTentChallenge(void);
static void GetChampionsPyramidTentPrize(void);
static void SetChampionsPyramidTentPrize(void);
static void SaveChampionsPyramidTentChallenge(void);
static void SetRandomChampionsPyramidTentPrize(void);
static void GiveChampionsPyramidTentPrize(void);
static void BufferChampionsPyramidTentTrainerName(void);

/*
 * Battle Tents are mini versions of particular Battle Frontier facilities
 * As such they each share some scripts and functions with their counterpart
 *
 * Verdanturf Battle Tent: Battle Palace
 * Fallarbor Battle Tent:  Battle Arena
 * Slateport Battle Tent:  Battle Factory
 *
 */

static u16 sRandMonId;

void static (*const sVerdanturfTentFuncs[])(void) =
{
    [VERDANTURF_TENT_FUNC_INIT]               = InitVerdanturfTentChallenge,
    [VERDANTURF_TENT_FUNC_GET_PRIZE]          = GetVerdanturfTentPrize,
    [VERDANTURF_TENT_FUNC_SET_PRIZE]          = SetVerdanturfTentPrize,
    [VERDANTURF_TENT_FUNC_SET_OPPONENT_GFX]   = SetVerdanturfTentTrainerGfx,
    [VERDANTURF_TENT_FUNC_GET_OPPONENT_INTRO] = BufferVerdanturfTentTrainerIntro,
    [VERDANTURF_TENT_FUNC_SAVE]               = SaveVerdanturfTentChallenge,
    [VERDANTURF_TENT_FUNC_SET_RANDOM_PRIZE]   = SetRandomVerdanturfTentPrize,
    [VERDANTURF_TENT_FUNC_GIVE_PRIZE]         = GiveVerdanturfTentPrize
};

static const u16 sVerdanturfTentRewards[] = {ITEM_NEST_BALL};

void static (*const sFallarborTentFuncs[])(void) =
{
    [FALLARBOR_TENT_FUNC_INIT]              = InitFallarborTentChallenge,
    [FALLARBOR_TENT_FUNC_GET_PRIZE]         = GetFallarborTentPrize,
    [FALLARBOR_TENT_FUNC_SET_PRIZE]         = SetFallarborTentPrize,
    [FALLARBOR_TENT_FUNC_SAVE]              = SaveFallarborTentChallenge,
    [FALLARBOR_TENT_FUNC_SET_RANDOM_PRIZE]  = SetRandomFallarborTentPrize,
    [FALLARBOR_TENT_FUNC_GIVE_PRIZE]        = GiveFallarborTentPrize,
    [FALLARBOR_TENT_FUNC_GET_OPPONENT_NAME] = BufferFallarborTentTrainerName
};

static const u16 sFallarborTentRewards[] = {ITEM_HYPER_POTION};

void static (*const sSlateportTentFuncs[])(void) =
{
    [SLATEPORT_TENT_FUNC_INIT]                   = InitSlateportTentChallenge,
    [SLATEPORT_TENT_FUNC_GET_PRIZE]              = GetSlateportTentPrize,
    [SLATEPORT_TENT_FUNC_SET_PRIZE]              = SetSlateportTentPrize,
    [SLATEPORT_TENT_FUNC_SAVE]                   = SaveSlateportTentChallenge,
    [SLATEPORT_TENT_FUNC_SET_RANDOM_PRIZE]       = SetRandomSlateportTentPrize,
    [SLATEPORT_TENT_FUNC_GIVE_PRIZE]             = GiveSlateportTentPrize,
    [SLATEPORT_TENT_FUNC_SELECT_RENT_MONS]       = SelectInitialRentalMons,
    [SLATEPORT_TENT_FUNC_SWAP_RENT_MONS]         = SwapRentalMons,
    [SLATEPORT_TENT_FUNC_GENERATE_OPPONENT_MONS] = GenerateOpponentMons,
    [SLATEPORT_TENT_FUNC_GENERATE_RENTAL_MONS]   = GenerateInitialRentalMons
};

static const u16 sSlateportTentRewards[] = {ITEM_FULL_HEAL};

void static (*const sChampionsDomeTentFuncs[])(void) =
{
    [CHAMPIONS_DOME_TENT_FUNC_INIT]              = InitChampionsDomeTentChallenge,
    [CHAMPIONS_DOME_TENT_FUNC_GET_PRIZE]         = GetChampionsDomeTentPrize,
    [CHAMPIONS_DOME_TENT_FUNC_SET_PRIZE]         = SetChampionsDomeTentPrize,
    [CHAMPIONS_DOME_TENT_FUNC_SAVE]              = SaveChampionsDomeTentChallenge,
    [CHAMPIONS_DOME_TENT_FUNC_SET_RANDOM_PRIZE]  = SetRandomChampionsDomeTentPrize,
    [CHAMPIONS_DOME_TENT_FUNC_GIVE_PRIZE]        = GiveChampionsDomeTentPrize,
    [CHAMPIONS_DOME_TENT_FUNC_GENERATE_BRACKET]  = GenerateChampionsDomeBracket,
    [CHAMPIONS_DOME_TENT_FUNC_GET_OPPONENT_NAME] = BufferChampionsDomeTentTrainerName
};

static const u16 sChampionsDomeTentRewards[] = {ITEM_WIDE_LENS};

void static (*const sChampionsPikeTentFuncs[])(void) =
{
    [CHAMPIONS_PIKE_TENT_FUNC_INIT]              = InitChampionsPikeTentChallenge,
    [CHAMPIONS_PIKE_TENT_FUNC_GET_PRIZE]         = GetChampionsPikeTentPrize,
    [CHAMPIONS_PIKE_TENT_FUNC_SET_PRIZE]         = SetChampionsPikeTentPrize,
    [CHAMPIONS_PIKE_TENT_FUNC_SAVE]              = SaveChampionsPikeTentChallenge,
    [CHAMPIONS_PIKE_TENT_FUNC_SET_RANDOM_PRIZE]  = SetRandomChampionsPikeTentPrize,
    [CHAMPIONS_PIKE_TENT_FUNC_GIVE_PRIZE]        = GiveChampionsPikeTentPrize,
    [CHAMPIONS_PIKE_TENT_FUNC_GET_OPPONENT_NAME] = BufferChampionsPikeTentTrainerName,
    [CHAMPIONS_PIKE_TENT_FUNC_TRY_MYSTERY_ROOM]  = TryChampionsPikeMysteryRoom
};

static const u16 sChampionsPikeTentRewards[] = {ITEM_LUM_BERRY};

// Status order here must line up with CHAMPIONS_PIKE_MYSTERY_CURSE_POISON..SLEEP
static const u16 sChampionsPikeCurseStatuses[] = {STATUS1_POISON, STATUS1_PARALYSIS, STATUS1_BURN, STATUS1_SLEEP};

static const u16 sChampionsPikeTreasureItems[] = {ITEM_GREAT_BALL, ITEM_HYPER_POTION, ITEM_FULL_HEAL, ITEM_REVIVE, ITEM_NUGGET};

void static (*const sChampionsPyramidTentFuncs[])(void) =
{
    [CHAMPIONS_PYRAMID_TENT_FUNC_INIT]              = InitChampionsPyramidTentChallenge,
    [CHAMPIONS_PYRAMID_TENT_FUNC_GET_PRIZE]         = GetChampionsPyramidTentPrize,
    [CHAMPIONS_PYRAMID_TENT_FUNC_SET_PRIZE]         = SetChampionsPyramidTentPrize,
    [CHAMPIONS_PYRAMID_TENT_FUNC_SAVE]              = SaveChampionsPyramidTentChallenge,
    [CHAMPIONS_PYRAMID_TENT_FUNC_SET_RANDOM_PRIZE]  = SetRandomChampionsPyramidTentPrize,
    [CHAMPIONS_PYRAMID_TENT_FUNC_GIVE_PRIZE]        = GiveChampionsPyramidTentPrize,
    [CHAMPIONS_PYRAMID_TENT_FUNC_GET_OPPONENT_NAME] = BufferChampionsPyramidTentTrainerName
};

static const u16 sChampionsPyramidTentRewards[] = {ITEM_ESCAPE_ROPE};

// code
void CallVerdanturfTentFunction(void)
{
    sVerdanturfTentFuncs[gSpecialVar_0x8004]();
}

static void InitVerdanturfTentChallenge(void)
{
    gSaveBlock2Ptr->frontier.challengeStatus = 0;
    gSaveBlock2Ptr->frontier.curChallengeBattleNum = 0;
    gSaveBlock2Ptr->frontier.challengePaused = FALSE;
    SetDynamicWarp(0, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, WARP_ID_NONE);
}

static void GetVerdanturfTentPrize(void)
{
    gSpecialVar_Result = gSaveBlock2Ptr->frontier.verdanturfTentPrize;
}

static void SetVerdanturfTentPrize(void)
{
    gSaveBlock2Ptr->frontier.verdanturfTentPrize = gSpecialVar_0x8006;
}

static void SetVerdanturfTentTrainerGfx(void)
{
    TRAINER_BATTLE_PARAM.opponentA = (u32)((Random() % 255) * 5) / 64;
    SetBattleFacilityTrainerGfxId(TRAINER_BATTLE_PARAM.opponentA, 0);
}

static void BufferVerdanturfTentTrainerIntro(void)
{
    if (TRAINER_BATTLE_PARAM.opponentA < FRONTIER_TRAINERS_COUNT)
        CopyFrontierTrainerSpeech(gStringVar4, gFacilityTrainers[TRAINER_BATTLE_PARAM.opponentA].facilityClass, FRONTIER_SPEECH_BEFORE);
}

static void SaveVerdanturfTentChallenge(void)
{
    ClearEnemyPartyAfterChallenge();
    gSaveBlock2Ptr->frontier.challengeStatus = gSpecialVar_0x8005;
    VarSet(VAR_TEMP_CHALLENGE_STATUS, 0);
    gSaveBlock2Ptr->frontier.challengePaused = TRUE;
    SaveGameFrontier();
}

static void SetRandomVerdanturfTentPrize(void)
{
    gSaveBlock2Ptr->frontier.verdanturfTentPrize = sVerdanturfTentRewards[Random() % ARRAY_COUNT(sVerdanturfTentRewards)];
}

static void GiveVerdanturfTentPrize(void)
{
    if (AddBagItem(gSaveBlock2Ptr->frontier.verdanturfTentPrize, 1) == TRUE)
    {
        CopyItemName(gSaveBlock2Ptr->frontier.verdanturfTentPrize, gStringVar1);
        gSaveBlock2Ptr->frontier.verdanturfTentPrize = ITEM_NONE;
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}

void CallFallarborTentFunction(void)
{
    sFallarborTentFuncs[gSpecialVar_0x8004]();
}

static void InitFallarborTentChallenge(void)
{
    gSaveBlock2Ptr->frontier.challengeStatus = 0;
    gSaveBlock2Ptr->frontier.curChallengeBattleNum = 0;
    gSaveBlock2Ptr->frontier.challengePaused = FALSE;
    SetDynamicWarp(0, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, WARP_ID_NONE);
}

static void GetFallarborTentPrize(void)
{
    gSpecialVar_Result = gSaveBlock2Ptr->frontier.fallarborTentPrize;
}

static void SetFallarborTentPrize(void)
{
    gSaveBlock2Ptr->frontier.fallarborTentPrize = gSpecialVar_0x8006;
}

static void SaveFallarborTentChallenge(void)
{
    ClearEnemyPartyAfterChallenge();
    gSaveBlock2Ptr->frontier.challengeStatus = gSpecialVar_0x8005;
    VarSet(VAR_TEMP_CHALLENGE_STATUS, 0);
    gSaveBlock2Ptr->frontier.challengePaused = TRUE;
    SaveGameFrontier();
}

static void SetRandomFallarborTentPrize(void)
{
    gSaveBlock2Ptr->frontier.fallarborTentPrize = sFallarborTentRewards[Random() % ARRAY_COUNT(sFallarborTentRewards)];
}

static void GiveFallarborTentPrize(void)
{
    if (AddBagItem(gSaveBlock2Ptr->frontier.fallarborTentPrize, 1) == TRUE)
    {
        CopyItemName(gSaveBlock2Ptr->frontier.fallarborTentPrize, gStringVar1);
        gSaveBlock2Ptr->frontier.fallarborTentPrize = ITEM_NONE;
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}

static void BufferFallarborTentTrainerName(void)
{
    GetFrontierTrainerName(gStringVar1, TRAINER_BATTLE_PARAM.opponentA);
}

void CallSlateportTentFunction(void)
{
    sSlateportTentFuncs[gSpecialVar_0x8004]();
}

static void InitSlateportTentChallenge(void)
{
    gSaveBlock2Ptr->frontier.challengeStatus = 0;
    gSaveBlock2Ptr->frontier.curChallengeBattleNum = 0;
    gSaveBlock2Ptr->frontier.challengePaused = FALSE;
    SetDynamicWarp(0, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, WARP_ID_NONE);
}

static void GetSlateportTentPrize(void)
{
    gSpecialVar_Result = gSaveBlock2Ptr->frontier.slateportTentPrize;
}

static void SetSlateportTentPrize(void)
{
    gSaveBlock2Ptr->frontier.slateportTentPrize = gSpecialVar_0x8006;
}

static void SaveSlateportTentChallenge(void)
{
    ClearEnemyPartyAfterChallenge();
    gSaveBlock2Ptr->frontier.challengeStatus = gSpecialVar_0x8005;
    VarSet(VAR_TEMP_CHALLENGE_STATUS, 0);
    gSaveBlock2Ptr->frontier.challengePaused = TRUE;
    SaveGameFrontier();
}

static void SetRandomSlateportTentPrize(void)
{
    gSaveBlock2Ptr->frontier.slateportTentPrize = sSlateportTentRewards[Random() % ARRAY_COUNT(sSlateportTentRewards)];
}

static void GiveSlateportTentPrize(void)
{
    if (AddBagItem(gSaveBlock2Ptr->frontier.slateportTentPrize, 1) == TRUE)
    {
        CopyItemName(gSaveBlock2Ptr->frontier.slateportTentPrize, gStringVar1);
        gSaveBlock2Ptr->frontier.slateportTentPrize = ITEM_NONE;
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}

static void SelectInitialRentalMons(void)
{
    ZeroPlayerPartyMons();
    DoBattleFactorySelectScreen();
}

static void SwapRentalMons(void)
{
    DoBattleFactorySwapScreen();
}

bool8 InSlateportBattleTent(void)
{
    return gMapHeader.regionMapSectionId == MAPSEC_SLATEPORT_CITY
           && (gMapHeader.mapLayoutId == LAYOUT_BATTLE_TENT_CORRIDOR || gMapHeader.mapLayoutId == LAYOUT_BATTLE_TENT_BATTLE_ROOM);
}

static void GenerateInitialRentalMons(void)
{
    s32 i, j;
    u8 firstMonId;
    u16 monSetId;
    enum Species currSpecies;
    enum Species species[PARTY_SIZE];
    u16 monIds[PARTY_SIZE];
    enum Item heldItems[PARTY_SIZE];

    firstMonId = 0;
    gFacilityTrainers = gSlateportBattleTentTrainers;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        species[i] = 0;
        monIds[i] = 0;
        heldItems[i] = 0;
    }
    gFacilityTrainerMons = gSlateportBattleTentMons;
    currSpecies = SPECIES_NONE;
    i = 0;
    while (i != PARTY_SIZE)
    {
        // Cannot have two Pokémon of the same species.
        monSetId = Random() % NUM_SLATEPORT_TENT_MONS;
        for (j = firstMonId; j < firstMonId + i; j++)
        {
            if (monIds[j] == monSetId)
                break;
            if (species[j] == gFacilityTrainerMons[monSetId].species)
            {
                if (currSpecies == SPECIES_NONE)
                    currSpecies = gFacilityTrainerMons[monSetId].species;
                else
                    break;
            }
        }
        if (j != i + firstMonId)
            continue;

        // Cannot have two same held items.
        for (j = firstMonId; j < i + firstMonId; j++)
        {
            if (heldItems[j] != 0 && heldItems[j] == gFacilityTrainerMons[monSetId].heldItem)
            {
                if (gFacilityTrainerMons[monSetId].species == currSpecies)
                    currSpecies = SPECIES_NONE;
                break;
            }
        }
        if (j != i + firstMonId)
            continue;

        gSaveBlock2Ptr->frontier.rentalMons[i].monId = monSetId;
        species[i] = gFacilityTrainerMons[monSetId].species;
        heldItems[i] = gFacilityTrainerMons[monSetId].heldItem;
        monIds[i] = monSetId;
        i++;
    }
}

static void GenerateOpponentMons(void)
{
    u16 trainerId;
    s32 i, j, k;
    const u16 *monSet;
    enum Species species[FRONTIER_PARTY_SIZE];
    enum Item heldItems[FRONTIER_PARTY_SIZE];
    s32 numMons = 0;

    gFacilityTrainers = gSlateportBattleTentTrainers;
    gFacilityTrainerMons = gSlateportBattleTentMons;

    while (1)
    {
        do
        {
            // Choose a random trainer, ensuring no repeats in this challenge
            trainerId = Random() % NUM_BATTLE_TENT_TRAINERS;
            for (i = 0; i < gSaveBlock2Ptr->frontier.curChallengeBattleNum; i++)
            {
                if (gSaveBlock2Ptr->frontier.trainerIds[i] == trainerId)
                    break;
            }
        } while (i != gSaveBlock2Ptr->frontier.curChallengeBattleNum);

        TRAINER_BATTLE_PARAM.opponentA = trainerId;
        monSet = gFacilityTrainers[TRAINER_BATTLE_PARAM.opponentA].monSet;
        while (monSet[numMons] != 0xFFFF)
            numMons++;
        if (numMons > 8)
            break;
        numMons = 0;
    }

    if (gSaveBlock2Ptr->frontier.curChallengeBattleNum < TENT_STAGES_PER_CHALLENGE - 1)
        gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum] = TRAINER_BATTLE_PARAM.opponentA;

    monSet = gFacilityTrainers[TRAINER_BATTLE_PARAM.opponentA].monSet;
    i = 0;
    while (i != FRONTIER_PARTY_SIZE)
    {
        sRandMonId = monSet[Random() % numMons];

        // Ensure none of the opponent's Pokémon are the same as the potential rental Pokémon for the player
        for (j = 0; j < (int)ARRAY_COUNT(gSaveBlock2Ptr->frontier.rentalMons); j++)
        {
            if (gFacilityTrainerMons[sRandMonId].species == gFacilityTrainerMons[gSaveBlock2Ptr->frontier.rentalMons[j].monId].species)
                break;
        }
        if (j != (int)ARRAY_COUNT(gSaveBlock2Ptr->frontier.rentalMons))
            continue;

        // Ensure this species hasn't already been chosen for the opponent
        for (k = 0; k < i; k++)
        {
            if (species[k] == gFacilityTrainerMons[sRandMonId].species)
                break;
        }
        if (k != i)
            continue;

        // Ensure held items don't repeat on the opponent's team
        for (k = 0; k < i; k++)
        {
            if (heldItems[k] != ITEM_NONE && heldItems[k] == gFacilityTrainerMons[sRandMonId].heldItem)
                break;
        }
        if (k != i)
            continue;

        // Successful selection
        species[i] = gFacilityTrainerMons[sRandMonId].species;
        heldItems[i] = gFacilityTrainerMons[sRandMonId].heldItem;
        gFrontierTempParty[i] = sRandMonId;
        i++;
    }
}

// Champions Dome Tent

void CallChampionsDomeTentFunction(void)
{
    sChampionsDomeTentFuncs[gSpecialVar_0x8004]();
}

static void InitChampionsDomeTentChallenge(void)
{
    gSaveBlock2Ptr->frontier.challengeStatus = 0;
    gSaveBlock2Ptr->frontier.curChallengeBattleNum = 0;
    gSaveBlock2Ptr->frontier.challengePaused = FALSE;
    SetDynamicWarp(0, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, WARP_ID_NONE);
}

static void GetChampionsDomeTentPrize(void)
{
    gSpecialVar_Result = gSaveBlock2Ptr->frontier.championsDomeTentPrize;
}

static void SetChampionsDomeTentPrize(void)
{
    gSaveBlock2Ptr->frontier.championsDomeTentPrize = gSpecialVar_0x8006;
}

static void SaveChampionsDomeTentChallenge(void)
{
    ClearEnemyPartyAfterChallenge();
    gSaveBlock2Ptr->frontier.challengeStatus = gSpecialVar_0x8005;
    VarSet(VAR_TEMP_CHALLENGE_STATUS, 0);
    gSaveBlock2Ptr->frontier.challengePaused = TRUE;
    SaveGameFrontier();
}

static void SetRandomChampionsDomeTentPrize(void)
{
    gSaveBlock2Ptr->frontier.championsDomeTentPrize = sChampionsDomeTentRewards[Random() % ARRAY_COUNT(sChampionsDomeTentRewards)];
}

static void GiveChampionsDomeTentPrize(void)
{
    if (AddBagItem(gSaveBlock2Ptr->frontier.championsDomeTentPrize, 1) == TRUE)
    {
        CopyItemName(gSaveBlock2Ptr->frontier.championsDomeTentPrize, gStringVar1);
        gSaveBlock2Ptr->frontier.championsDomeTentPrize = ITEM_NONE;
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}

// Rolls an 8-slot single-elimination bracket (Round of 8 -> Semifinal -> Final) and records the
// player's 3 opponents in trainerIds[0..2]. The other 6 competitors are eliminated off-screen by
// simple coin flips - nothing the player does can affect them. This just gives the Semifinal and
// Final a named opponent who "earned" their spot instead of a fresh random pick out of nowhere.
static void GenerateChampionsDomeBracket(void)
{
    u16 pool[CHAMPIONS_DOME_BRACKET_SIZE - 1]; // Every bracket slot except the player's own
    int i, j;
    u16 semiLeftWinner, semiRightWinner;

    gFacilityTrainers = gVerdanturfBattleTentTrainers;
    gFacilityTrainerMons = gVerdanturfBattleTentMons;

    for (i = 0; i < CHAMPIONS_DOME_BRACKET_SIZE - 1; i++)
    {
        u16 trainerId;
        do
        {
            trainerId = Random() % NUM_BATTLE_TENT_TRAINERS;
            for (j = 0; j < i; j++)
            {
                if (pool[j] == trainerId)
                    break;
            }
        } while (j != i);
        pool[i] = trainerId;
    }

    // pool[0] is the Round of 8 opponent, faced directly.
    // pool[1] and pool[2] fight off-screen for the Semifinal opponent slot.
    // pool[3..6] fight off-screen (two matches, then a mini semifinal of their own) for the Final opponent slot.
    gSaveBlock2Ptr->frontier.trainerIds[0] = pool[0];
    gSaveBlock2Ptr->frontier.trainerIds[1] = (Random() % 2) ? pool[1] : pool[2];

    semiLeftWinner = (Random() % 2) ? pool[3] : pool[4];
    semiRightWinner = (Random() % 2) ? pool[5] : pool[6];
    gSaveBlock2Ptr->frontier.trainerIds[2] = (Random() % 2) ? semiLeftWinner : semiRightWinner;
}

static void BufferChampionsDomeTentTrainerName(void)
{
    GetFrontierTrainerName(gStringVar1, TRAINER_BATTLE_PARAM.opponentA);
}

// Champions Pike Tent

void CallChampionsPikeTentFunction(void)
{
    sChampionsPikeTentFuncs[gSpecialVar_0x8004]();
}

static void InitChampionsPikeTentChallenge(void)
{
    gSaveBlock2Ptr->frontier.challengeStatus = 0;
    gSaveBlock2Ptr->frontier.curChallengeBattleNum = 0;
    gSaveBlock2Ptr->frontier.challengePaused = FALSE;
    SetDynamicWarp(0, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, WARP_ID_NONE);
}

static void GetChampionsPikeTentPrize(void)
{
    gSpecialVar_Result = gSaveBlock2Ptr->frontier.championsPikeTentPrize;
}

static void SetChampionsPikeTentPrize(void)
{
    gSaveBlock2Ptr->frontier.championsPikeTentPrize = gSpecialVar_0x8006;
}

static void SaveChampionsPikeTentChallenge(void)
{
    ClearEnemyPartyAfterChallenge();
    gSaveBlock2Ptr->frontier.challengeStatus = gSpecialVar_0x8005;
    VarSet(VAR_TEMP_CHALLENGE_STATUS, 0);
    gSaveBlock2Ptr->frontier.challengePaused = TRUE;
    SaveGameFrontier();
}

static void SetRandomChampionsPikeTentPrize(void)
{
    gSaveBlock2Ptr->frontier.championsPikeTentPrize = sChampionsPikeTentRewards[Random() % ARRAY_COUNT(sChampionsPikeTentRewards)];
}

static void GiveChampionsPikeTentPrize(void)
{
    if (AddBagItem(gSaveBlock2Ptr->frontier.championsPikeTentPrize, 1) == TRUE)
    {
        CopyItemName(gSaveBlock2Ptr->frontier.championsPikeTentPrize, gStringVar1);
        gSaveBlock2Ptr->frontier.championsPikeTentPrize = ITEM_NONE;
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}

static void BufferChampionsPikeTentTrainerName(void)
{
    GetFrontierTrainerName(gStringVar1, TRAINER_BATTLE_PARAM.opponentA);
}

// Replaces the 2nd of the Tent's 3 stages. A coin flip between a mild status curse (borrowed
// from the real Pike's status rooms) and a small treasure find, borrowed from the same idea in
// spirit but kept simple - no battle, no room-type engine, just one flavor event.
static void TryChampionsPikeMysteryRoom(void)
{
    if (Random() % 2 == 0)
    {
        u8 i;
        struct Pokemon *mon = NULL;
        u8 statusIndex = Random() % ARRAY_COUNT(sChampionsPikeCurseStatuses);
        u32 status = sChampionsPikeCurseStatuses[statusIndex];

        for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
        {
            struct Pokemon *candidate = &gParties[B_TRAINER_PLAYER][i];
            enum Species species = GetMonData(candidate, MON_DATA_SPECIES);

            if (GetMonData(candidate, MON_DATA_HP) != 0
                && GetAilmentFromStatus(GetMonData(candidate, MON_DATA_STATUS)) == AILMENT_NONE
                && !DoesTypePreventStatus(species, status)
                && !DoesAbilityPreventStatus(candidate, status))
            {
                mon = candidate;
                break;
            }
        }

        if (mon == NULL)
        {
            gSpecialVar_Result = CHAMPIONS_PIKE_MYSTERY_NOTHING;
            return;
        }

        SetMonData(mon, MON_DATA_STATUS, &status);
        GetMonData(mon, MON_DATA_NICKNAME, gStringVar1);
        gSpecialVar_Result = CHAMPIONS_PIKE_MYSTERY_CURSE_POISON + statusIndex;
    }
    else
    {
        u16 item = sChampionsPikeTreasureItems[Random() % ARRAY_COUNT(sChampionsPikeTreasureItems)];

        if (AddBagItem(item, 1) == TRUE)
        {
            CopyItemName(item, gStringVar1);
            gSpecialVar_Result = CHAMPIONS_PIKE_MYSTERY_TREASURE;
        }
        else
        {
            gSpecialVar_Result = CHAMPIONS_PIKE_MYSTERY_NOTHING;
        }
    }
}

// Champions Pyramid Tent

void CallChampionsPyramidTentFunction(void)
{
    sChampionsPyramidTentFuncs[gSpecialVar_0x8004]();
}

static void InitChampionsPyramidTentChallenge(void)
{
    gSaveBlock2Ptr->frontier.challengeStatus = 0;
    gSaveBlock2Ptr->frontier.curChallengeBattleNum = 0;
    gSaveBlock2Ptr->frontier.challengePaused = FALSE;
    SetDynamicWarp(0, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, WARP_ID_NONE);
}

static void GetChampionsPyramidTentPrize(void)
{
    gSpecialVar_Result = gSaveBlock2Ptr->frontier.championsPyramidTentPrize;
}

static void SetChampionsPyramidTentPrize(void)
{
    gSaveBlock2Ptr->frontier.championsPyramidTentPrize = gSpecialVar_0x8006;
}

static void SaveChampionsPyramidTentChallenge(void)
{
    ClearEnemyPartyAfterChallenge();
    gSaveBlock2Ptr->frontier.challengeStatus = gSpecialVar_0x8005;
    VarSet(VAR_TEMP_CHALLENGE_STATUS, 0);
    gSaveBlock2Ptr->frontier.challengePaused = TRUE;
    SaveGameFrontier();
}

static void SetRandomChampionsPyramidTentPrize(void)
{
    gSaveBlock2Ptr->frontier.championsPyramidTentPrize = sChampionsPyramidTentRewards[Random() % ARRAY_COUNT(sChampionsPyramidTentRewards)];
}

static void GiveChampionsPyramidTentPrize(void)
{
    if (AddBagItem(gSaveBlock2Ptr->frontier.championsPyramidTentPrize, 1) == TRUE)
    {
        CopyItemName(gSaveBlock2Ptr->frontier.championsPyramidTentPrize, gStringVar1);
        gSaveBlock2Ptr->frontier.championsPyramidTentPrize = ITEM_NONE;
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}

static void BufferChampionsPyramidTentTrainerName(void)
{
    GetFrontierTrainerName(gStringVar1, TRAINER_BATTLE_PARAM.opponentA);
}
