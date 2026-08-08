#include "global.h"
#include "battle_pike.h"
#include "event_data.h"
#include "frontier_util.h"
#include "string_util.h"
#include "fieldmap.h"
#include "save.h"
#include "battle.h"
#include "random.h"
#include "task.h"
#include "battle_tower.h"
#include "party_menu.h"
#include "malloc.h"
#include "palette.h"
#include "script.h"
#include "battle_setup.h"
#include "item.h"
#include "daycare.h"
#include "constants/event_objects.h"
#include "constants/battle_frontier.h"
#include "constants/frontier_util.h"
#include "constants/abilities.h"
#include "constants/layouts.h"
#include "constants/rgb.h"
#include "constants/trainers.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/battle_pike.h"
#include "constants/items.h"

struct PikeRoomNPC
{
    u16 graphicsId;
    u8 speechId1;
    u8 speechId2;
    u8 speechId3;
};

struct PikeWildMon
{
    enum Species species;
    u8 levelDelta;
    u16 moves[MAX_MON_MOVES];
};

// IWRAM bss
static u8 sRoomType;
static u8 sStatusMon;
static bool8 sInWildMonRoom;
static u32 sStatusFlags;
static u8 sNpcId;

// This file's functions.
static void SetRoomType(void);
static void GetBattlePikeData(void);
static void SetBattlePikeData(void);
static void IsNextRoomFinal(void);
static void SetupRoomObjectEvents(void);
static void GetRoomType(void);
static void SetInWildMonRoom(void);
static void ClearInWildMonRoom(void);
static void SavePikeChallenge(void);
static void PikeDummy1(void);
static void PikeDummy2(void);
static void GetRoomInflictedStatus(void);
static void GetRoomInflictedStatusMon(void);
static void HealOneOrTwoMons(void);
static void BufferNPCMessage(void);
static void TryGiveNPCRoomReward(void);
static void StatusInflictionScreenFlash(void);
static void GetInBattlePike(void);
static void SetHintedRoom(void);
static void GetHintedRoomIndex(void);
static void GetRoomTypeHint(void);
static void ClearPikeTrainerIds(void);
static void BufferTrainerIntro(void);
static void GetCurrentRoomPikeQueenFightType(void);
static void HealSomeMonsBeforePikeQueen(void);
static void SetHealingroomTypesDisabled(void);
static void IsPartyFullHealed(void);
static void SaveMonHeldItems(void);
static void RestoreMonHeldItems(void);
static void GivePikeBonusPoints(void);
static void InitPikeChallenge(void);
static u8 GetNextRoomType(void);
static void PrepareOneTrainer(bool8 difficult);
static u16 GetNPCRoomGraphicsId(void);
static void PrepareTwoTrainers(void);
static void TryHealMons(u8 healCount);
static void Task_DoStatusInflictionScreenFlash(u8 taskId);
static bool8 AtLeastTwoAliveMons(void);
static bool8 AtLeastOneHealthyMon(void);
static bool8 InflictPikeStatusCurse(void);
static bool8 CanEncounterWildMon(u8 monLevel);
static u8 GetPikeQueenFightType(u8);
static bool8 StatusInflictionFadeOut(struct Task *task);
static bool8 StatusInflictionFadeIn(struct Task *task);

// Const rom data.
// Each header table below is themed around the "signature" mon it used to be limited
// to (Ghost/mystery, Electric/trap, Status spore, Psychic counter), now with a handful
// of thematically-similar species alongside it instead of everything collapsing onto
// that one signature mon. Seviper/Milotic remain as recurring anchors in every table -
// SPECIES_NONE terminates each table so TryGenerateBattlePikeWildMon can count entries.
static const struct PikeWildMon sLvl50_Mons1[] =
{
    {
        .species = SPECIES_SEVIPER,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_GLARE, MOVE_BODY_SLAM, MOVE_SLUDGE_BOMB}
    },
    {
        .species = SPECIES_MILOTIC,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_HYPNOSIS, MOVE_BODY_SLAM, MOVE_SURF}
    },
    {
        .species = SPECIES_DUSCLOPS,
        .levelDelta = 5,
        .moves = {MOVE_WILL_O_WISP, MOVE_MEAN_LOOK, MOVE_TOXIC, MOVE_SHADOW_PUNCH}
    },
    {
        .species = SPECIES_SABLEYE,
        .levelDelta = 5,
        .moves = {MOVE_SHADOW_BALL, MOVE_KNOCK_OFF, MOVE_CONFUSE_RAY, MOVE_NIGHT_SHADE}
    },
    {
        .species = SPECIES_SHUPPET,
        .levelDelta = 5,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_CURSE, MOVE_SHADOW_BALL}
    },
    {
        .species = SPECIES_MISDREAVUS,
        .levelDelta = 5,
        .moves = {MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_CONFUSE_RAY}
    },
    {.species = SPECIES_NONE}
};

static const struct PikeWildMon sLvl50_Mons2[] =
{
    {
        .species = SPECIES_SEVIPER,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_GLARE, MOVE_BODY_SLAM, MOVE_SLUDGE_BOMB}
    },
    {
        .species = SPECIES_MILOTIC,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_HYPNOSIS, MOVE_BODY_SLAM, MOVE_SURF}
    },
    {
        .species = SPECIES_ELECTRODE,
        .levelDelta = 5,
        .moves = {MOVE_EXPLOSION, MOVE_SELF_DESTRUCT, MOVE_THUNDER, MOVE_TOXIC}
    },
    {
        .species = SPECIES_MAGNETON,
        .levelDelta = 5,
        .moves = {MOVE_THUNDERBOLT, MOVE_SCREECH, MOVE_SUPERSONIC, MOVE_FLASH_CANNON}
    },
    {
        .species = SPECIES_ELECTABUZZ,
        .levelDelta = 5,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_LOW_KICK, MOVE_SWIFT, MOVE_THUNDER_WAVE}
    },
    {
        .species = SPECIES_CHINCHOU,
        .levelDelta = 5,
        .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_SPARK}
    },
    {.species = SPECIES_NONE}
};

static const struct PikeWildMon sLvl50_Mons3[] =
{
    {
        .species = SPECIES_SEVIPER,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_GLARE, MOVE_BODY_SLAM, MOVE_SLUDGE_BOMB}
    },
    {
        .species = SPECIES_MILOTIC,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_HYPNOSIS, MOVE_BODY_SLAM, MOVE_SURF}
    },
    {
        .species = SPECIES_BRELOOM,
        .levelDelta = 5,
        .moves = {MOVE_SPORE, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_HIDDEN_POWER}
    },
    {
        .species = SPECIES_VILEPLUME,
        .levelDelta = 5,
        .moves = {MOVE_SLEEP_POWDER, MOVE_STUN_SPORE, MOVE_MOONLIGHT, MOVE_GIGA_DRAIN}
    },
    {
        .species = SPECIES_FOONGUS,
        .levelDelta = 5,
        .moves = {MOVE_SPORE, MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CLEAR_SMOG}
    },
    {
        .species = SPECIES_PARASECT,
        .levelDelta = 5,
        .moves = {MOVE_SPORE, MOVE_STUN_SPORE, MOVE_LEECH_LIFE, MOVE_GIGA_DRAIN}
    },
    {.species = SPECIES_NONE}
};

static const struct PikeWildMon sLvl50_Mons4[] =
{
    {
        .species = SPECIES_SEVIPER,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_GLARE, MOVE_BODY_SLAM, MOVE_SLUDGE_BOMB}
    },
    {
        .species = SPECIES_MILOTIC,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_HYPNOSIS, MOVE_BODY_SLAM, MOVE_SURF}
    },
    {
        .species = SPECIES_WOBBUFFET,
        .levelDelta = 5,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_SAFEGUARD, MOVE_DESTINY_BOND}
    },
    {
        .species = SPECIES_SPOINK,
        .levelDelta = 5,
        .moves = {MOVE_PSYCHIC, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_TOXIC}
    },
    {
        .species = SPECIES_GIRAFARIG,
        .levelDelta = 5,
        .moves = {MOVE_PSYCHIC, MOVE_CRUNCH, MOVE_CONFUSE_RAY, MOVE_BATON_PASS}
    },
    {
        .species = SPECIES_SOLROCK,
        .levelDelta = 5,
        .moves = {MOVE_PSYCHIC, MOVE_EXPLOSION, MOVE_FLAMETHROWER, MOVE_COSMIC_POWER}
    },
    {.species = SPECIES_NONE}
};

static const struct PikeWildMon *const sLvl50Mons[] =
{
    sLvl50_Mons1,
    sLvl50_Mons2,
    sLvl50_Mons3,
    sLvl50_Mons4
};

static const struct PikeWildMon sLvlOpen_Mons1[] =
{
    {
        .species = SPECIES_SEVIPER,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_GLARE, MOVE_POISON_FANG, MOVE_SLUDGE_BOMB}
    },
    {
        .species = SPECIES_MILOTIC,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_HYPNOSIS, MOVE_BODY_SLAM, MOVE_ICE_BEAM}
    },
    {
        .species = SPECIES_DUSCLOPS,
        .levelDelta = 5,
        .moves = {MOVE_WILL_O_WISP, MOVE_MEAN_LOOK, MOVE_TOXIC, MOVE_ICE_BEAM}
    },
    {
        .species = SPECIES_SABLEYE,
        .levelDelta = 5,
        .moves = {MOVE_SHADOW_BALL, MOVE_KNOCK_OFF, MOVE_CONFUSE_RAY, MOVE_RECOVER}
    },
    {
        .species = SPECIES_BANETTE,
        .levelDelta = 5,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_KNOCK_OFF, MOVE_DESTINY_BOND}
    },
    {
        .species = SPECIES_MISMAGIUS,
        .levelDelta = 5,
        .moves = {MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_WILL_O_WISP}
    },
    {.species = SPECIES_NONE}
};

static const struct PikeWildMon sLvlOpen_Mons2[] =
{
    {
        .species = SPECIES_SEVIPER,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_GLARE, MOVE_POISON_FANG, MOVE_SLUDGE_BOMB}
    },
    {
        .species = SPECIES_MILOTIC,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_HYPNOSIS, MOVE_BODY_SLAM, MOVE_ICE_BEAM}
    },
    {
        .species = SPECIES_ELECTRODE,
        .levelDelta = 5,
        .moves = {MOVE_EXPLOSION, MOVE_SELF_DESTRUCT, MOVE_THUNDER, MOVE_TOXIC}
    },
    {
        .species = SPECIES_MAGNEZONE,
        .levelDelta = 5,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
        .species = SPECIES_ELECTIVIRE,
        .levelDelta = 5,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_CROSS_CHOP, MOVE_THUNDER_WAVE}
    },
    {
        .species = SPECIES_LANTURN,
        .levelDelta = 5,
        .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_ICE_BEAM}
    },
    {.species = SPECIES_NONE}
};

static const struct PikeWildMon sLvlOpen_Mons3[] =
{
    {
        .species = SPECIES_SEVIPER,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_GLARE, MOVE_POISON_FANG, MOVE_SLUDGE_BOMB}
    },
    {
        .species = SPECIES_MILOTIC,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_HYPNOSIS, MOVE_BODY_SLAM, MOVE_ICE_BEAM}
    },
    {
        .species = SPECIES_BRELOOM,
        .levelDelta = 5,
        .moves = {MOVE_SPORE, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_HIDDEN_POWER}
    },
    {
        .species = SPECIES_VILEPLUME,
        .levelDelta = 5,
        .moves = {MOVE_SLEEP_POWDER, MOVE_STUN_SPORE, MOVE_MOONLIGHT, MOVE_SLUDGE_BOMB}
    },
    {
        .species = SPECIES_AMOONGUSS,
        .levelDelta = 5,
        .moves = {MOVE_SPORE, MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CLEAR_SMOG}
    },
    {
        .species = SPECIES_BRELOOM,
        .levelDelta = 6,
        .moves = {MOVE_SPORE, MOVE_MACH_PUNCH, MOVE_SEED_BOMB, MOVE_STUN_SPORE}
    },
    {.species = SPECIES_NONE}
};

static const struct PikeWildMon sLvlOpen_Mons4[] =
{
    {
        .species = SPECIES_SEVIPER,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_GLARE, MOVE_POISON_FANG, MOVE_SLUDGE_BOMB}
    },
    {
        .species = SPECIES_MILOTIC,
        .levelDelta = 4,
        .moves = {MOVE_TOXIC, MOVE_HYPNOSIS, MOVE_BODY_SLAM, MOVE_ICE_BEAM}
    },
    {
        .species = SPECIES_WOBBUFFET,
        .levelDelta = 5,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_SAFEGUARD, MOVE_ENCORE}
    },
    {
        .species = SPECIES_GRUMPIG,
        .levelDelta = 5,
        .moves = {MOVE_PSYCHIC, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_TOXIC}
    },
    {
        .species = SPECIES_GIRAFARIG,
        .levelDelta = 5,
        .moves = {MOVE_PSYCHIC, MOVE_CRUNCH, MOVE_CONFUSE_RAY, MOVE_BATON_PASS}
    },
    {
        .species = SPECIES_LUNATONE,
        .levelDelta = 5,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_EXPLOSION, MOVE_COSMIC_POWER}
    },
    {.species = SPECIES_NONE}
};

static const struct PikeWildMon *const sLvlOpenMons[] =
{
    sLvlOpen_Mons1,
    sLvlOpen_Mons2,
    sLvlOpen_Mons3,
    sLvlOpen_Mons4
};

static const struct PikeWildMon *const *const sWildMons[2] =
{
    [FRONTIER_LVL_50]   = sLvl50Mons,
    [FRONTIER_LVL_OPEN] = sLvlOpenMons
};

// Rare "boss" encounters for the Wild Mons room - notably stronger, perfect-IV single
// mons rolled at low odds instead of the normal per-header pool (see
// TryGenerateBattlePikeWildMon). Kept separate from the tables above rather than mixed
// in, so their odds can be tuned independently of the regular wild mon variety.
static const struct PikeWildMon sBossMons50[] =
{
    {
        .species = SPECIES_GYARADOS,
        .levelDelta = 2,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_ICE_FANG, MOVE_DRAGON_DANCE}
    },
    {
        .species = SPECIES_STEELIX,
        .levelDelta = 2,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_STEALTH_ROCK}
    },
    {
        .species = SPECIES_TENTACRUEL,
        .levelDelta = 2,
        .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_TOXIC_SPIKES, MOVE_RAPID_SPIN}
    },
    {
        .species = SPECIES_CROBAT,
        .levelDelta = 2,
        .moves = {MOVE_CROSS_POISON, MOVE_AIR_SLASH, MOVE_TOXIC, MOVE_CONFUSE_RAY}
    },
    {
        .species = SPECIES_ABSOL,
        .levelDelta = 2,
        .moves = {MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_PURSUIT}
    },
};

static const struct PikeWildMon sBossMonsOpen[] =
{
    {
        .species = SPECIES_GYARADOS,
        .levelDelta = 2,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_ICE_FANG, MOVE_DRAGON_DANCE}
    },
    {
        .species = SPECIES_STEELIX,
        .levelDelta = 2,
        .moves = {MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_CRUNCH, MOVE_STEALTH_ROCK}
    },
    {
        .species = SPECIES_TENTACRUEL,
        .levelDelta = 2,
        .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_TOXIC_SPIKES, MOVE_RAPID_SPIN}
    },
    {
        .species = SPECIES_CROBAT,
        .levelDelta = 2,
        .moves = {MOVE_CROSS_POISON, MOVE_AIR_SLASH, MOVE_TOXIC, MOVE_TAILWIND}
    },
    {
        .species = SPECIES_ABSOL,
        .levelDelta = 2,
        .moves = {MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH}
    },
};

static const struct PikeWildMon *const sBossMons[2] =
{
    [FRONTIER_LVL_50]   = sBossMons50,
    [FRONTIER_LVL_OPEN] = sBossMonsOpen
};

#define PIKE_BOSS_MON_ODDS 20 // 1-in-20 chance of a boss instead of the regular pool
#define NUM_PIKE_BOSS_MONS 5  // sBossMons50 and sBossMonsOpen must each have this many entries

static const struct PikeRoomNPC sNPCTable[] =
{
    {
        .graphicsId = OBJ_EVENT_GFX_POKEFAN_F,
        .speechId1 = 3,
        .speechId2 = 5,
        .speechId3 = 6
    },
    {
        .graphicsId = OBJ_EVENT_GFX_NINJA_BOY,
        .speechId1 = 13,
        .speechId2 = 32,
        .speechId3 = 37
    },
    {
        .graphicsId = OBJ_EVENT_GFX_FAT_MAN,
        .speechId1 = 8,
        .speechId2 = 11,
        .speechId3 = 12
    },
    {
        .graphicsId = OBJ_EVENT_GFX_BUG_CATCHER,
        .speechId1 = 34,
        .speechId2 = 30,
        .speechId3 = 33
    },
    {
        .graphicsId = OBJ_EVENT_GFX_EXPERT_M,
        .speechId1 = 0,
        .speechId2 = 0,
        .speechId3 = 0
    },
    {
        .graphicsId = OBJ_EVENT_GFX_OLD_WOMAN,
        .speechId1 = 1,
        .speechId2 = 1,
        .speechId3 = 1
    },
    {
        .graphicsId = OBJ_EVENT_GFX_BLACK_BELT,
        .speechId1 = 22,
        .speechId2 = 23,
        .speechId3 = 27
    },
    {
        .graphicsId = OBJ_EVENT_GFX_HIKER,
        .speechId1 = 8,
        .speechId2 = 22,
        .speechId3 = 31
    },
    {
        .graphicsId = OBJ_EVENT_GFX_GIRL_3,
        .speechId1 = 13,
        .speechId2 = 39,
        .speechId3 = 21
    },
    {
        .graphicsId = OBJ_EVENT_GFX_WOMAN_2,
        .speechId1 = 2,
        .speechId2 = 4,
        .speechId3 = 17
    },
    {
        .graphicsId = OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M,
        .speechId1 = 30,
        .speechId2 = 20,
        .speechId3 = 36
    },
    {
        .graphicsId = OBJ_EVENT_GFX_MAN_5,
        .speechId1 = 28,
        .speechId2 = 34,
        .speechId3 = 25
    },
    {
        .graphicsId = OBJ_EVENT_GFX_SCHOOL_KID_M,
        .speechId1 = 23,
        .speechId2 = 38,
        .speechId3 = 26
    },
    {
        .graphicsId = OBJ_EVENT_GFX_FISHERMAN,
        .speechId1 = 23,
        .speechId2 = 30,
        .speechId3 = 11
    },
    {
        .graphicsId = OBJ_EVENT_GFX_LASS,
        .speechId1 = 15,
        .speechId2 = 19,
        .speechId3 = 14
    },
    {
        .graphicsId = OBJ_EVENT_GFX_MANIAC,
        .speechId1 = 2,
        .speechId2 = 29,
        .speechId3 = 26
    },
    {
        .graphicsId = OBJ_EVENT_GFX_RUNNING_TRIATHLETE_M,
        .speechId1 = 37,
        .speechId2 = 12,
        .speechId3 = 32
    },
    {
        .graphicsId = OBJ_EVENT_GFX_MAN_3,
        .speechId1 = 24,
        .speechId2 = 23,
        .speechId3 = 38
    },
    {
        .graphicsId = OBJ_EVENT_GFX_WOMAN_3,
        .speechId1 = 5,
        .speechId2 = 22,
        .speechId3 = 4
    },
    {
        .graphicsId = OBJ_EVENT_GFX_LITTLE_BOY,
        .speechId1 = 41,
        .speechId2 = 37,
        .speechId3 = 35
    },
    {
        .graphicsId = OBJ_EVENT_GFX_TUBER_F,
        .speechId1 = 39,
        .speechId2 = 14,
        .speechId3 = 13
    },
    {
        .graphicsId = OBJ_EVENT_GFX_GENTLEMAN,
        .speechId1 = 10,
        .speechId2 = 7,
        .speechId3 = 9
    },
    {
        .graphicsId = OBJ_EVENT_GFX_LITTLE_GIRL,
        .speechId1 = 40,
        .speechId2 = 20,
        .speechId3 = 16
    },
    {
        .graphicsId = OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F,
        .speechId1 = 18,
        .speechId2 = 13,
        .speechId3 = 21
    },
    {
        .graphicsId = OBJ_EVENT_GFX_MAN_1,
        .speechId1 = 22,
        .speechId2 = 31,
        .speechId3 = 27
    }
};

static const u16 sNPCSpeeches[][EASY_CHAT_BATTLE_WORDS_COUNT] =
{
    {EC_WORD_I_AM, EC_WORD_LOST, EC_WORD_I, EC_WORD_NEED, EC_WORD_A, EC_MOVE2(HELPING_HAND)},
    {EC_WORD_I_VE, EC_WORD_NO, EC_WORD_SENSE, EC_WORD_OF, EC_WORD_WHERE, EC_WORD_I_AM},
    {EC_WORD_WHAT, EC_WORD_SHOULD, EC_WORD_I, EC_WORD_DO, EC_WORD_NOW, EC_WORD_QUES},
    {EC_WORD_THIS, EC_WORD_IS, EC_WORD_TOO, EC_WORD_EXCITING, EC_WORD_FOR, EC_WORD_ME},
    {EC_WORD_DID, EC_WORD_YOU, EC_WORD_MAKE, EC_WORD_A, EC_WORD_MISTAKE, EC_WORD_QUES},
    {EC_WORD_IT_S, EC_WORD_MEAN, EC_WORD_AND, EC_WORD_AWFUL, EC_WORD_IN, EC_WORD_HERE},
    {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_TIRED, EC_WORD_OF, EC_WORD_THIS, EC_WORD_PLACE},
    {EC_WORD_I, EC_WORD_QUITE, EC_WORD_ENJOY, EC_WORD_THIS, EC_WORD_CHALLENGE, EC_EMPTY_WORD},
    {EC_WORD_LOOK, EC_WORD_AT, EC_WORD_HOW, EC_WORD_I, EC_MOVE2(TACKLE), EC_WORD_THIS},
    {EC_WORD_READY, EC_WORD_TO, EC_WORD_GIVE_UP, EC_WORD_YET, EC_WORD_QUES, EC_EMPTY_WORD},
    {EC_WORD_OH, EC_WORD_NO, EC_WORD_WHO, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_QUES},
    {EC_WORD_I_VE, EC_WORD_BEEN, EC_WORD_WANDERING, EC_WORD_ABOUT, EC_WORD_FOREVER, EC_WORD_ELLIPSIS},
    {EC_WORD_I, EC_WORD_THINK, EC_WORD_I, EC_WORD_WILL, EC_WORD_GIVE_UP, EC_EMPTY_WORD},
    {EC_WORD_WHAT, EC_WORD_SHOULD, EC_WORD_I, EC_WORD_DO, EC_WORD_NEXT, EC_WORD_QUES},
    {EC_WORD_I, EC_WORD_CAN_WIN, EC_WORD_WITH, EC_WORD_MY, EC_MOVE(SHEER_COLD), EC_WORD_GENIUS},
    {EC_WORD_WON_T, EC_WORD_SOMEONE, EC_WORD_COOL, EC_WORD_SHOW, EC_WORD_UP, EC_WORD_QUES},
    {EC_WORD_BATTLE, EC_WORD_GAME, EC_WORD_IS, EC_WORD_AWESOME, EC_WORD_EXCL, EC_EMPTY_WORD},
    {EC_WORD_I, EC_WORD_CAN_T, EC_WORD_TAKE, EC_WORD_THIS, EC_WORD_ANY, EC_WORD_MORE},
    {EC_WORD_I, EC_WORD_DON_T, EC_WORD_KNOW, EC_WORD_IF, EC_WORD_IT_S, EC_WORD_OKAY},
    {EC_WORD_OH, EC_WORD_NO, EC_WORD_EXCL, EC_WORD_NOT, EC_WORD_ANOTHER, EC_WORD_TRAINER},
    {EC_WORD_IT, EC_WORD_HAS, EC_WORD_TO, EC_WORD_BE, EC_WORD_LEFT, EC_WORD_NEXT},
    {EC_WORD_IT, EC_WORD_MUST_BE, EC_WORD_OVER, EC_WORD_SOON, EC_WORD_RIGHT, EC_WORD_QUES},
    {EC_WORD_THIS, EC_WORD_IS, EC_WORD_TOTALLY, EC_WORD_EASY, EC_WORD_ISN_T_IT_QUES, EC_EMPTY_WORD},
    {EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_TO, EC_WORD_POWER, EC_WORD_ON, EC_EMPTY_WORD},
    {EC_WORD_THERE, EC_WORD_IS, EC_WORD_NO, EC_WORD_GIVE_UP, EC_WORD_IN, EC_WORD_ME},
    {EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_GOING, EC_WORD_TO, EC_WORD_MAKE, EC_WORD_IT},
    {EC_WORD_GO, EC_WORD_ON, EC_WORD_I, EC_WORD_CAN_T, EC_WORD_ANY, EC_WORD_MORE},
    {EC_WORD_A, EC_WORD_TRAINER, EC_WORD_AFTER, EC_WORD_ANOTHER, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
    {EC_WORD_DO, EC_WORD_YOU, EC_WORD_LIKE, EC_WORD_STEEL, EC_WORD_POKEMON, EC_WORD_QUES},
    {EC_WORD_EVERY, EC_WORD_TRAINER, EC_WORD_HERE, EC_WORD_IS, EC_WORD_TOO_WEAK, EC_EMPTY_WORD},
    {EC_WORD_YOU, EC_WORD_THINK, EC_WORD_THIS, EC_WORD_IS, EC_WORD_EASY, EC_WORD_QUES},
    {EC_WORD_WHAT, EC_WORD_WILL, EC_WORD_COME, EC_WORD_AFTER, EC_WORD_THIS, EC_WORD_QUES},
    {EC_WORD_I_AM, EC_WORD_JUST, EC_WORD_SO, EC_WORD_CONFUSED, EC_WORD_EXCL, EC_EMPTY_WORD},
    {EC_WORD_I, EC_WORD_JUST, EC_WORD_WANT, EC_WORD_TO, EC_WORD_GO_HOME, EC_WORD_ELLIPSIS},
    {EC_WORD_YEEHAW_EXCL, EC_WORD_THIS, EC_WORD_PLACE, EC_WORD_IS, EC_WORD_A, EC_WORD_PUSHOVER},
    {EC_WORD_I, EC_WORD_HAVEN_T, EC_WORD_BEEN, EC_WORD_IN, EC_WORD_A, EC_WORD_BATTLE},
    {EC_WORD_MAYBE, EC_WORD_IT_S, EC_WORD_RIGHT, EC_WORD_NEXT, EC_WORD_I, EC_WORD_THINK},
    {EC_WORD_WAAAH, EC_WORD_EXCL, EC_WORD_IT, EC_WORD_WASN_T, EC_WORD_THIS, EC_WORD_WAY},
    {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_TOO, EC_WORD_TIRED, EC_WORD_ELLIPSIS},
    {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_STRONG, EC_WORD_TO, EC_WORD_POISON},
    {EC_WORD_LALALA, EC_WORD_LALALA, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_AWESOME, EC_WORD_LALALA},
    {EC_MOVE2(TOXIC), EC_WORD_IS, EC_WORD_A, EC_WORD_TERRIBLE, EC_WORD_THING, EC_WORD_ISN_T_IT_QUES},
};

// Table duplicated from frontier_util, only Battle Pike entry used
static const u8 sFrontierBrainStreakAppearances[NUM_FRONTIER_FACILITIES][4] =
{
    [FRONTIER_FACILITY_TOWER]   = {35,  70, 35, 1},
    [FRONTIER_FACILITY_DOME]    = { 4,   9,  5, 0},
    [FRONTIER_FACILITY_PALACE]  = {21,  42, 21, 1},
    [FRONTIER_FACILITY_ARENA]   = {28,  56, 28, 1},
    [FRONTIER_FACILITY_FACTORY] = {21,  42, 21, 1},
    [FRONTIER_FACILITY_PIKE]    = {28, 140, 56, 1},
    [FRONTIER_FACILITY_PYRAMID] = {21,  70, 35, 0},
};

static void (*const sBattlePikeFunctions[])(void) =
{
    [BATTLE_PIKE_FUNC_SET_ROOM_TYPE]           = SetRoomType,
    [BATTLE_PIKE_FUNC_GET_DATA]                = GetBattlePikeData,
    [BATTLE_PIKE_FUNC_SET_DATA]                = SetBattlePikeData,
    [BATTLE_PIKE_FUNC_IS_FINAL_ROOM]           = IsNextRoomFinal,
    [BATTLE_PIKE_FUNC_SET_ROOM_OBJECTS]        = SetupRoomObjectEvents,
    [BATTLE_PIKE_FUNC_GET_ROOM_TYPE]           = GetRoomType,
    [BATTLE_PIKE_FUNC_SET_IN_WILD_MON_ROOM]    = SetInWildMonRoom,
    [BATTLE_PIKE_FUNC_CLEAR_IN_WILD_MON_ROOM]  = ClearInWildMonRoom,
    [BATTLE_PIKE_FUNC_SAVE]                    = SavePikeChallenge,
    [BATTLE_PIKE_FUNC_DUMMY_1]                 = PikeDummy1,
    [BATTLE_PIKE_FUNC_DUMMY_2]                 = PikeDummy2,
    [BATTLE_PIKE_FUNC_GET_ROOM_STATUS]         = GetRoomInflictedStatus,
    [BATTLE_PIKE_FUNC_GET_ROOM_STATUS_MON]     = GetRoomInflictedStatusMon,
    [BATTLE_PIKE_FUNC_HEAL_ONE_TWO_MONS]       = HealOneOrTwoMons,
    [BATTLE_PIKE_FUNC_BUFFER_NPC_MSG]          = BufferNPCMessage,
    [BATTLE_PIKE_FUNC_STATUS_SCREEN_FLASH]     = StatusInflictionScreenFlash,
    [BATTLE_PIKE_FUNC_IS_IN]                   = GetInBattlePike,
    [BATTLE_PIKE_FUNC_SET_HINT_ROOM]           = SetHintedRoom,
    [BATTLE_PIKE_FUNC_GET_HINT_ROOM_ID]        = GetHintedRoomIndex,
    [BATTLE_PIKE_FUNC_GET_ROOM_TYPE_HINT]      = GetRoomTypeHint,
    [BATTLE_PIKE_FUNC_CLEAR_TRAINER_IDS]       = ClearPikeTrainerIds,
    [BATTLE_PIKE_FUNC_GET_TRAINER_INTRO]       = BufferTrainerIntro,
    [BATTLE_PIKE_FUNC_GET_QUEEN_FIGHT_TYPE]    = GetCurrentRoomPikeQueenFightType,
    [BATTLE_PIKE_FUNC_HEAL_MONS_BEFORE_QUEEN]  = HealSomeMonsBeforePikeQueen,
    [BATTLE_PIKE_FUNC_SET_HEAL_ROOMS_DISABLED] = SetHealingroomTypesDisabled,
    [BATTLE_PIKE_FUNC_IS_PARTY_FULL_HEALTH]    = IsPartyFullHealed,
    [BATTLE_PIKE_FUNC_SAVE_HELD_ITEMS]         = SaveMonHeldItems,
    [BATTLE_PIKE_FUNC_RESET_HELD_ITEMS]        = RestoreMonHeldItems,
    [BATTLE_PIKE_FUNC_INIT]                    = InitPikeChallenge,
    [BATTLE_PIKE_FUNC_GIVE_BONUS_POINTS]       = GivePikeBonusPoints,
    [BATTLE_PIKE_FUNC_TRY_GIVE_NPC_REWARD]     = TryGiveNPCRoomReward
};

static const u8 sRoomTypeHints[] = {
    PIKE_HINT_PEOPLE,     // PIKE_ROOM_SINGLE_BATTLE
    PIKE_HINT_PEOPLE,     // PIKE_ROOM_HEAL_FULL
    PIKE_HINT_WHISPERING, // PIKE_ROOM_NPC
    PIKE_HINT_NOSTALGIA,  // PIKE_ROOM_STATUS
    PIKE_HINT_NOSTALGIA,  // PIKE_ROOM_HEAL_PART
    PIKE_HINT_POKEMON,    // PIKE_ROOM_WILD_MONS
    PIKE_HINT_POKEMON,    // PIKE_ROOM_HARD_BATTLE
    PIKE_HINT_WHISPERING, // PIKE_ROOM_DOUBLE_BATTLE
    PIKE_HINT_BRAIN,      // PIKE_ROOM_BRAIN
};

static const u8 sNumMonsToHealBeforePikeQueen[][3] =
{
    {2, 1, 0},
    {2, 0, 1},
    {1, 2, 0},
    {1, 0, 2},
    {0, 2, 1},
    {0, 1, 2},
};

static bool8 (*const sStatusInflictionScreenFlashFuncs[])(struct Task *) =
{
    StatusInflictionFadeOut, StatusInflictionFadeIn
};

static const u32 sWinStreakFlags[] = {STREAK_PIKE_50, STREAK_PIKE_OPEN};

// code
void CallBattlePikeFunction(void)
{
    sBattlePikeFunctions[gSpecialVar_0x8004]();
}

// Type-matched overworld sprite for each PIKE_STATUSMON_* curse-mon, using the dynamic
// species-graphics encoding (OBJ_EVENT_GFX_SPECIES) rather than named OBJ_EVENT_GFX_
// constants - every species already has one via the follower Pokemon overworld pipeline
// (graphics/pokemon/<species>/overworld.png), so no new art is needed here.
static const u16 sStatusMonGfx[NUM_PIKE_STATUSMON] =
{
    [PIKE_STATUSMON_KIRLIA]    = OBJ_EVENT_GFX_SPECIES(KIRLIA),
    [PIKE_STATUSMON_MUK]       = OBJ_EVENT_GFX_SPECIES(MUK),
    [PIKE_STATUSMON_FROSLASS]  = OBJ_EVENT_GFX_SPECIES(FROSLASS),
    [PIKE_STATUSMON_ELECTRODE] = OBJ_EVENT_GFX_SPECIES(ELECTRODE),
    [PIKE_STATUSMON_MAGMAR]    = OBJ_EVENT_GFX_SPECIES(MAGMAR),
    [PIKE_STATUSMON_HYPNO]     = OBJ_EVENT_GFX_SPECIES(HYPNO),
    [PIKE_STATUSMON_SABLEYE]   = OBJ_EVENT_GFX_SPECIES(SABLEYE),
};

static void SetRoomType(void)
{
    u8 roomType = GetNextRoomType();
    sRoomType = roomType;
}

static void SetupRoomObjectEvents(void)
{
    bool32 setObjGfx1, setObjGfx2;
    u32 objGfx1;
    u16 objGfx2;

    VarSet(VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_LINK_RECEPTIONIST);
    VarSet(VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_DUSCLOPS);
    setObjGfx1 = TRUE;
    setObjGfx2 = FALSE;
    objGfx1 = 0;
    objGfx2 = 0;

    switch (sRoomType)
    {
    case PIKE_ROOM_SINGLE_BATTLE:
        PrepareOneTrainer(FALSE);
        setObjGfx1 = FALSE;
        break;
    case PIKE_ROOM_HEAL_FULL:
        objGfx1 = OBJ_EVENT_GFX_LINK_RECEPTIONIST;
        break;
    case PIKE_ROOM_NPC:
        objGfx1 = (u8)(GetNPCRoomGraphicsId());
        break;
    case PIKE_ROOM_STATUS:
        objGfx1 = OBJ_EVENT_GFX_GENTLEMAN;
        objGfx2 = sStatusMonGfx[sStatusMon];
        setObjGfx2 = TRUE;
        break;
    case PIKE_ROOM_HEAL_PART:
        objGfx1 = OBJ_EVENT_GFX_GENTLEMAN;
        break;
    case PIKE_ROOM_WILD_MONS:
        setObjGfx1 = FALSE;
        break;
    case PIKE_ROOM_HARD_BATTLE:
        PrepareOneTrainer(TRUE);
        objGfx2 = OBJ_EVENT_GFX_LINK_RECEPTIONIST;
        setObjGfx1 = FALSE;
        setObjGfx2 = TRUE;
        break;
    case PIKE_ROOM_DOUBLE_BATTLE:
        PrepareTwoTrainers();
        setObjGfx1 = FALSE;
        break;
    case PIKE_ROOM_BRAIN:
        SetFrontierBrainObjEventGfx(FRONTIER_FACILITY_PIKE);
        objGfx2 = OBJ_EVENT_GFX_LINK_RECEPTIONIST;
        setObjGfx1 = FALSE;
        setObjGfx2 = TRUE;
        break;
    default:
        return;
    }

    if (setObjGfx1 == TRUE)
        VarSet(VAR_OBJ_GFX_ID_0, objGfx1);
    if (setObjGfx2 == TRUE)
        VarSet(VAR_OBJ_GFX_ID_1, objGfx2);
}

static void GetBattlePikeData(void)
{
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;

    switch (gSpecialVar_0x8005)
    {
    case PIKE_DATA_PRIZE:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.pikePrize;
        break;
    case PIKE_DATA_WIN_STREAK:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.pikeWinStreaks[gSaveBlock2Ptr->frontier.lvlMode];
        break;
    case PIKE_DATA_RECORD_STREAK:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.pikeRecordStreaks[gSaveBlock2Ptr->frontier.lvlMode];
        break;
    case PIKE_DATA_TOTAL_STREAKS:
        gSpecialVar_Result = gSaveBlock2Ptr->frontier.pikeTotalStreaks[gSaveBlock2Ptr->frontier.lvlMode];
        break;
    case PIKE_DATA_WIN_STREAK_ACTIVE:
        if (lvlMode != FRONTIER_LVL_50)
            gSpecialVar_Result = gSaveBlock2Ptr->frontier.winStreakActiveFlags & STREAK_PIKE_OPEN;
        else
            gSpecialVar_Result = gSaveBlock2Ptr->frontier.winStreakActiveFlags & STREAK_PIKE_50;
        break;
    }
}

static void SetBattlePikeData(void)
{
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;

    switch (gSpecialVar_0x8005)
    {
    case PIKE_DATA_PRIZE:
        gSaveBlock2Ptr->frontier.pikePrize = gSpecialVar_0x8006;
        break;
    case PIKE_DATA_WIN_STREAK:
        if (gSpecialVar_0x8006 <= MAX_STREAK)
            gSaveBlock2Ptr->frontier.pikeWinStreaks[gSaveBlock2Ptr->frontier.lvlMode] = gSpecialVar_0x8006;
        break;
    case PIKE_DATA_RECORD_STREAK:
        if (gSpecialVar_0x8006 <= MAX_STREAK && gSaveBlock2Ptr->frontier.pikeRecordStreaks[gSaveBlock2Ptr->frontier.lvlMode] < gSpecialVar_0x8006)
            gSaveBlock2Ptr->frontier.pikeRecordStreaks[gSaveBlock2Ptr->frontier.lvlMode] = gSpecialVar_0x8006;
        break;
    case PIKE_DATA_TOTAL_STREAKS:
        if (gSpecialVar_0x8006 <= MAX_STREAK)
            gSaveBlock2Ptr->frontier.pikeTotalStreaks[gSaveBlock2Ptr->frontier.lvlMode] = gSpecialVar_0x8006;
        break;
    case PIKE_DATA_WIN_STREAK_ACTIVE:
        if (lvlMode != FRONTIER_LVL_50)
        {
            if (gSpecialVar_0x8006)
                gSaveBlock2Ptr->frontier.winStreakActiveFlags |= STREAK_PIKE_OPEN;
            else
                gSaveBlock2Ptr->frontier.winStreakActiveFlags &= ~(STREAK_PIKE_OPEN);
        }
        else
        {
            if (gSpecialVar_0x8006)
                gSaveBlock2Ptr->frontier.winStreakActiveFlags |= STREAK_PIKE_50;
            else
                gSaveBlock2Ptr->frontier.winStreakActiveFlags &= ~(STREAK_PIKE_50);
        }
        break;
    }
}

static void IsNextRoomFinal(void)
{
    if (gSaveBlock2Ptr->frontier.curChallengeBattleNum > NUM_PIKE_ROOMS)
        gSpecialVar_Result = TRUE;
    else
        gSpecialVar_Result = FALSE;
}

static void GetRoomType(void)
{
    gSpecialVar_Result = sRoomType;
}

static void SetInWildMonRoom(void)
{
    sInWildMonRoom = TRUE;
}

static void ClearInWildMonRoom(void)
{
    sInWildMonRoom = FALSE;
}

static void SavePikeChallenge(void)
{
    ClearEnemyPartyAfterChallenge();
    gSaveBlock2Ptr->frontier.challengeStatus = gSpecialVar_0x8005;
    VarSet(VAR_TEMP_CHALLENGE_STATUS, 0);
    gSaveBlock2Ptr->frontier.challengePaused = TRUE;
    SaveMapView();
    TrySavingData(SAVE_LINK);
}

static void PikeDummy1(void)
{

}

static void PikeDummy2(void)
{

}

static void GetRoomInflictedStatus(void)
{
    switch (sStatusFlags)
    {
    case STATUS1_FREEZE:
    case STATUS1_FROSTBITE:
        gSpecialVar_Result = PIKE_STATUS_FREEZE;
        break;
    case STATUS1_BURN:
        gSpecialVar_Result = PIKE_STATUS_BURN;
        break;
    case STATUS1_TOXIC_POISON:
        gSpecialVar_Result = PIKE_STATUS_TOXIC;
        break;
    case STATUS1_PARALYSIS:
        gSpecialVar_Result = PIKE_STATUS_PARALYSIS;
        break;
    case STATUS1_SLEEP:
        gSpecialVar_Result = PIKE_STATUS_SLEEP;
        break;
    }
}

static void GetRoomInflictedStatusMon(void)
{
    gSpecialVar_Result = sStatusMon;
}

static void HealOneOrTwoMons(void)
{
    u16 toHeal = (Random() % 2) + 1;
    TryHealMons(toHeal);
    gSpecialVar_Result = toHeal;
}

// The NPC room used to be pure flavor text with no mechanical effect. It now has a
// chance to actually hand out something - a rare-ball/treasure item, or an Egg.
static const u16 sPikeTreasureItems[] =
{
    ITEM_FAST_BALL,
    ITEM_LEVEL_BALL,
    ITEM_LURE_BALL,
    ITEM_HEAVY_BALL,
    ITEM_LOVE_BALL,
    ITEM_FRIEND_BALL,
    ITEM_MOON_BALL,
    ITEM_NUGGET,
    ITEM_PEARL,
    ITEM_BIG_PEARL,
    ITEM_STARDUST,
    ITEM_COMET_SHARD,
    ITEM_NORMAL_TERA_SHARD,
    ITEM_FIRE_TERA_SHARD,
    ITEM_WATER_TERA_SHARD,
    ITEM_ELECTRIC_TERA_SHARD,
    ITEM_GRASS_TERA_SHARD,
    ITEM_ICE_TERA_SHARD,
    ITEM_FIGHTING_TERA_SHARD,
    ITEM_POISON_TERA_SHARD,
    ITEM_GROUND_TERA_SHARD,
    ITEM_FLYING_TERA_SHARD,
    ITEM_PSYCHIC_TERA_SHARD,
    ITEM_BUG_TERA_SHARD,
    ITEM_ROCK_TERA_SHARD,
    ITEM_GHOST_TERA_SHARD,
    ITEM_DRAGON_TERA_SHARD,
    ITEM_DARK_TERA_SHARD,
    ITEM_STEEL_TERA_SHARD,
    ITEM_FAIRY_TERA_SHARD,
};

static const u16 sPikeEggSpecies[] =
{
    SPECIES_MAGIKARP,
    SPECIES_EEVEE,
    SPECIES_TOGEPI,
    SPECIES_RALTS,
    SPECIES_BAGON,
    SPECIES_DRATINI,
    SPECIES_GIBLE,
    SPECIES_RIOLU,
};

#define PIKE_NPC_REWARD_ODDS 6 // 1-in-6 chance the NPC room's visitor has something for you

static const u8 sText_PikeFoundTreasure[] = _("Oh? What's this glinting on the floor?\pA {STR_VAR_1}! Lucky find - it's yours.$");
static const u8 sText_PikeFoundEgg[] = _("Oh my, what do we have here?\pA POKéMON EGG! Someone must have left\nit behind. Go on, it's yours now.$");

// Returns TRUE and buffers a reward message into gStringVar4 if the room's visitor had
// something to give. The Egg goes straight to the PC, never the in-challenge party - the
// player's real party is swapped out for just the selected challenge mons for the
// duration of the run, so writing into gParties[B_TRAINER_PLAYER] here would either get
// lost or corrupt that temporary roster.
static bool8 TryGivePikeRoomTreasure(void)
{
    if (Random() % PIKE_NPC_REWARD_ODDS != 0)
        return FALSE;

    if (Random() % 2 == 0)
    {
        u16 item = sPikeTreasureItems[Random() % ARRAY_COUNT(sPikeTreasureItems)];
        if (AddBagItem(item, 1) != TRUE)
            return FALSE; // Bag full - fall back to ordinary flavor text instead.
        CopyItemName(item, gStringVar1);
        StringExpandPlaceholders(gStringVar4, sText_PikeFoundTreasure);
    }
    else
    {
        enum Species species = sPikeEggSpecies[Random() % ARRAY_COUNT(sPikeEggSpecies)];
        struct Pokemon egg;
        bool8 isEgg = TRUE;

        CreateEgg(&egg, species, TRUE);
        SetMonData(&egg, MON_DATA_IS_EGG, &isEgg);
        CopyMonToPC(&egg);
        StringExpandPlaceholders(gStringVar4, sText_PikeFoundEgg);
    }

    return TRUE;
}

static void BufferNPCMessage(void)
{
    int speechId;

    if (gSaveBlock2Ptr->frontier.curChallengeBattleNum <= 4)
        speechId = sNPCTable[sNpcId].speechId1;
    else if (gSaveBlock2Ptr->frontier.curChallengeBattleNum <= 10)
        speechId = sNPCTable[sNpcId].speechId2;
    else
        speechId = sNPCTable[sNpcId].speechId3;

    FrontierSpeechToString(sNPCSpeeches[speechId]);
}

// Rolled once, when the room is first entered (see BattleFrontier_BattlePikeRoomNormal_
// EventScript_EnterNPCRoom). Only reports whether something was actually given (via
// gSpecialVar_Result) and buffers the reward message if so - the NPC only walks up and
// puts on the little vignette when there's actually a reward; otherwise it just stays put
// like a normal NPC, and talking to it uses BufferNPCMessage's flavor text as before.
// Talking to it again after a reward's already been given also can't re-roll it, since
// this special is only ever called once, on entry.
static void TryGiveNPCRoomReward(void)
{
    gSpecialVar_Result = TryGivePikeRoomTreasure();
}

static void StatusInflictionScreenFlash(void)
{
    CreateTask(Task_DoStatusInflictionScreenFlash, 2);
}

static void HealMon(struct Pokemon *mon)
{
    u8 i;
    u16 hp;
    u8 ppBonuses;
    u8 data[4];

    for (i = 0; i < 4; i++)
        data[i] = 0;

    hp = GetMonData(mon, MON_DATA_MAX_HP);
    data[0] = hp;
    data[1] = hp >> 8;
    SetMonData(mon, MON_DATA_HP, data);

    ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES);
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        enum Move move = GetMonData(mon, MON_DATA_MOVE1 + i);
        data[0] = CalculatePPWithBonus(move, ppBonuses, i);
        SetMonData(mon, MON_DATA_PP1 + i, data);
    }

    data[0] = 0;
    data[1] = 0;
    data[2] = 0;
    data[3] = 0;
    SetMonData(mon, MON_DATA_STATUS, data);
}

bool8 DoesAbilityPreventStatus(struct Pokemon *mon, u32 status)
{
    enum Ability ability = GetMonAbility(mon);
    bool8 ret = FALSE;

    if (ability == ABILITY_COMATOSE)
        return TRUE;

    switch (status)
    {
    case STATUS1_FREEZE:
    case STATUS1_FROSTBITE:
        if (ability == ABILITY_MAGMA_ARMOR)
            ret = TRUE;
        break;
    case STATUS1_BURN:
        if (ability == ABILITY_WATER_VEIL || ability == ABILITY_WATER_BUBBLE)
            ret = TRUE;
        break;
    case STATUS1_PARALYSIS:
        if (ability == ABILITY_LIMBER)
            ret = TRUE;
        break;
    case STATUS1_SLEEP:
        if (ability == ABILITY_INSOMNIA || ability == ABILITY_VITAL_SPIRIT)
            ret = TRUE;
        break;
    case STATUS1_TOXIC_POISON:
        if (ability == ABILITY_IMMUNITY || ability == ABILITY_PASTEL_VEIL)
            ret = TRUE;
        break;
    }
    return ret;
}

bool8 DoesTypePreventStatus(enum Species species, u32 status)
{
    bool8 ret = FALSE;

    switch (status)
    {
    case STATUS1_TOXIC_POISON:
        if (GetSpeciesType(species, 0) == TYPE_STEEL || GetSpeciesType(species, 0) == TYPE_POISON
            || GetSpeciesType(species, 1) == TYPE_STEEL || GetSpeciesType(species, 1) == TYPE_POISON)
            ret = TRUE;
        break;
    case STATUS1_FREEZE:
    case STATUS1_FROSTBITE:
        if (GetSpeciesType(species, 0) == TYPE_ICE || GetSpeciesType(species, 1) == TYPE_ICE)
            ret = TRUE;
        break;
    case STATUS1_PARALYSIS:
        if (GetSpeciesType(species, 0) == TYPE_GROUND || GetSpeciesType(species, 1) == TYPE_GROUND
            || (GetConfig(B_PARALYZE_ELECTRIC) >= GEN_6 && (GetSpeciesType(species, 0) == TYPE_ELECTRIC || GetSpeciesType(species, 1) == TYPE_ELECTRIC)))
            ret = TRUE;
        break;
    case STATUS1_BURN:
        if (GetSpeciesType(species, 0) == TYPE_FIRE || GetSpeciesType(species, 1) == TYPE_FIRE)
            ret = TRUE;
        break;
    case STATUS1_SLEEP:
        break;
    }
    return ret;
}

// Drains half the current PP (rounded down) of the first eligible move found on a
// random living party mon. Unlike the STATUS1 curses below, this doesn't need a
// type/ability immunity check - PP loss has no such counterplay.
static bool8 TryInflictPikePPDrain(void)
{
    u8 i, moveSlot;
    u8 indices[FRONTIER_PARTY_SIZE];
    struct Pokemon *mon;

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
        indices[i] = i;
    Shuffle(indices, FRONTIER_PARTY_SIZE, sizeof(indices[0]));

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        mon = &gParties[B_TRAINER_PLAYER][indices[i]];
        if (GetMonData(mon, MON_DATA_HP) == 0)
            continue;

        for (moveSlot = 0; moveSlot < MAX_MON_MOVES; moveSlot++)
        {
            u16 move = GetMonData(mon, MON_DATA_MOVE1 + moveSlot);
            u16 pp = GetMonData(mon, MON_DATA_PP1 + moveSlot);
            if (move != MOVE_NONE && pp > 0)
            {
                u16 newPP = pp / 2;
                SetMonData(mon, MON_DATA_PP1 + moveSlot, &newPP);
                sStatusMon = PIKE_STATUSMON_SABLEYE;
                return TRUE;
            }
        }
    }
    return FALSE;
}

// Confusion can't be pre-set on a party mon like a STATUS1 condition - it's a
// battle-only volatile. Instead, flag it and let the player's next Pike battle apply
// it once battlers actually exist, via Pike_TryInflictPendingConfusion (called from
// battle_main.c's intro sequence the same way BattleArena_InitPoints already is).
static bool8 TryInflictPikeConfusionCurse(void)
{
    if (!AtLeastOneHealthyMon())
        return FALSE;

    gSaveBlock2Ptr->frontier.pikePendingConfusion = TRUE;
    sStatusMon = PIKE_STATUSMON_KIRLIA;
    return TRUE;
}

// Small BP top-up for surviving whichever curse actually landed - see
// GivePikeBonusPoints for the run-ending payout this is separate from.
static bool8 TryInflictRandomStatus(void)
{
    if (!InflictPikeStatusCurse())
        return FALSE;

    gSaveBlock2Ptr->frontier.battlePoints += PIKE_BONUS_POINTS_CURSE_ROOM;
    if (gSaveBlock2Ptr->frontier.battlePoints > MAX_BATTLE_FRONTIER_POINTS)
        gSaveBlock2Ptr->frontier.battlePoints = MAX_BATTLE_FRONTIER_POINTS;
    return TRUE;
}

static bool8 InflictPikeStatusCurse(void)
{
    u8 j, i;
    u8 count;
    u8 indices[FRONTIER_PARTY_SIZE];
    u32 status;
    enum Species species;
    bool8 statusChosen;
    struct Pokemon *mon;
    u8 curseRoll = Random() % 100;

    // PP-drain and confusion sit outside the STATUS1 pool below (respectively 12% and
    // 8% of curse rolls), and don't participate in its type/ability immunity checks.
    if (curseRoll < 12)
        return TryInflictPikePPDrain();
    else if (curseRoll < 20)
        return TryInflictPikeConfusionCurse();

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
        indices[i] = i;

    Shuffle(indices, FRONTIER_PARTY_SIZE, sizeof(indices[0]));

    if (gSaveBlock2Ptr->frontier.curChallengeBattleNum <= 4)
        count = 1;
    else if (gSaveBlock2Ptr->frontier.curChallengeBattleNum <= 9)
        count = 2;
    else
        count = 3;

    status = 0;
    do
    {
        u8 rand;

        statusChosen = FALSE;
        rand = Random() % 100;

        if (rand < 35)
            sStatusFlags = STATUS1_TOXIC_POISON;
        else if (rand < 60)
            sStatusFlags = B_USE_FROSTBITE ? STATUS1_FROSTBITE : STATUS1_FREEZE;
        else if (rand < 80)
            sStatusFlags = STATUS1_PARALYSIS;
        else if (rand < 90)
            sStatusFlags = STATUS1_SLEEP;
        else
            sStatusFlags = STATUS1_BURN;

        if (status != sStatusFlags)
        {
            status = sStatusFlags;
            j = 0;
            for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
            {
                mon = &gParties[B_TRAINER_PLAYER][indices[i]];
                if (GetAilmentFromStatus(GetMonData(mon, MON_DATA_STATUS)) == AILMENT_NONE
                    && GetMonData(mon, MON_DATA_HP) != 0)
                {
                    j++;
                    species = GetMonData(mon, MON_DATA_SPECIES);
                    if (!DoesTypePreventStatus(species, sStatusFlags))
                    {
                        statusChosen = TRUE;
                        break;
                    }
                }
                if (j == count)
                    break;
            }
            if (j == 0)
                return FALSE;
        }
    } while (!statusChosen);

    switch (sStatusFlags)
    {
    case STATUS1_FREEZE:
    case STATUS1_FROSTBITE:
        sStatusMon = PIKE_STATUSMON_FROSLASS;
        break;
    case STATUS1_BURN:
        sStatusMon = PIKE_STATUSMON_MAGMAR;
        break;
    case STATUS1_PARALYSIS:
        sStatusMon = PIKE_STATUSMON_ELECTRODE;
        break;
    case STATUS1_SLEEP:
        sStatusMon = PIKE_STATUSMON_HYPNO;
        break;
    case STATUS1_TOXIC_POISON:
    default:
        sStatusMon = PIKE_STATUSMON_MUK;
        break;
    }

    j = 0;
    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        mon = &gParties[B_TRAINER_PLAYER][indices[i]];
        if (GetAilmentFromStatus(GetMonData(mon, MON_DATA_STATUS)) == AILMENT_NONE
            && GetMonData(mon, MON_DATA_HP) != 0)
        {
            j++;
            species = GetMonData(mon, MON_DATA_SPECIES);
            if (!DoesAbilityPreventStatus(mon, sStatusFlags) && !DoesTypePreventStatus(species, sStatusFlags))
                SetMonData(mon, MON_DATA_STATUS, &sStatusFlags);
        }
        if (j == count)
            break;
    }

    return TRUE;
}

static bool8 AtLeastOneHealthyMon(void)
{
    u8 i;
    u8 healthyMonsCount;
    u8 count;

    if (gSaveBlock2Ptr->frontier.curChallengeBattleNum <= 4)
        count = 1;
    else if (gSaveBlock2Ptr->frontier.curChallengeBattleNum <= 9)
        count = 2;
    else
        count = 3;

    healthyMonsCount = 0;
    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][i];
        if (GetAilmentFromStatus(GetMonData(mon, MON_DATA_STATUS)) == AILMENT_NONE
            && GetMonData(mon, MON_DATA_HP) != 0)
        {
            healthyMonsCount++;
        }
        if (healthyMonsCount == count)
            break;
    }

    if (healthyMonsCount == 0)
        return FALSE;
    else
        return TRUE;
}

static u8 GetNextRoomType(void)
{
    bool8 roomTypesDisabled[NUM_PIKE_ROOM_TYPES - 1]; // excludes Brain room, which can't be disabled
    u8 i;
    u8 nextRoomType;
    u8 roomHint;
    u8 numRoomCandidates;
    u8 *roomCandidates;
    u8 id;

    if (gSaveBlock2Ptr->frontier.pikeHintedRoomType == PIKE_ROOM_BRAIN)
        return gSaveBlock2Ptr->frontier.pikeHintedRoomType;

    // Check if the player walked into the same room that the lady gave a hint about.
    if (gSpecialVar_0x8007 == gSaveBlock2Ptr->frontier.pikeHintedRoomIndex)
    {
        if (gSaveBlock2Ptr->frontier.pikeHintedRoomType == PIKE_ROOM_STATUS)
            TryInflictRandomStatus();
        return gSaveBlock2Ptr->frontier.pikeHintedRoomType;
    }

    for (i = 0; i < ARRAY_COUNT(roomTypesDisabled); i++)
        roomTypesDisabled[i] = FALSE;

    numRoomCandidates = NUM_PIKE_ROOM_TYPES - 1;

    // The other two room types cannot be the same type as the one associated with the lady's hint
    roomHint = sRoomTypeHints[gSaveBlock2Ptr->frontier.pikeHintedRoomType];
    for (i = 0; i < ARRAY_COUNT(roomTypesDisabled); i++)
    {
        if (sRoomTypeHints[i] == roomHint)
        {
            roomTypesDisabled[i] = TRUE;
            numRoomCandidates--;
        }
    }

    // Remove room type candidates that would have no effect on the player's party.
    if (roomTypesDisabled[PIKE_ROOM_DOUBLE_BATTLE] != TRUE && !AtLeastTwoAliveMons())
    {
        roomTypesDisabled[PIKE_ROOM_DOUBLE_BATTLE] = TRUE;
        numRoomCandidates--;
    }
    if (roomTypesDisabled[PIKE_ROOM_STATUS] != TRUE && !AtLeastOneHealthyMon())
    {
        roomTypesDisabled[PIKE_ROOM_STATUS] = TRUE;
        numRoomCandidates--;
    }

    // Remove healing room type candidates if healing rooms are disabled.
    if (gSaveBlock2Ptr->frontier.pikeHealingRoomsDisabled)
    {
        if (roomTypesDisabled[PIKE_ROOM_HEAL_FULL] != TRUE)
        {
            roomTypesDisabled[PIKE_ROOM_HEAL_FULL] = TRUE;
            numRoomCandidates--;
        }
        if (roomTypesDisabled[PIKE_ROOM_HEAL_PART] != TRUE)
        {
            roomTypesDisabled[PIKE_ROOM_HEAL_PART] = TRUE;
            numRoomCandidates--;
        }
    }

    roomCandidates = AllocZeroed(numRoomCandidates);
    id = 0;
    for (i = 0; i < ARRAY_COUNT(roomTypesDisabled); i++)
    {
        if (roomTypesDisabled[i] == FALSE)
            roomCandidates[id++] = i;
    }

    nextRoomType = roomCandidates[Random() % numRoomCandidates];
    Free(roomCandidates);
    if (nextRoomType == PIKE_ROOM_STATUS)
        TryInflictRandomStatus();

    return nextRoomType;
}

static u16 GetNPCRoomGraphicsId(void)
{
    sNpcId = Random() % ARRAY_COUNT(sNPCTable);
    return sNPCTable[sNpcId].graphicsId;
}

static bool8 UNUSED GetInWildMonRoom(void)
{
    return sInWildMonRoom;
}

// TryGenerateBattlePikeWildMon runs twice per encounter: once with checkKeenEyeIntimidate
// TRUE when the overworld sprite spawns (this is what the player actually sees walking
// around), and again with it FALSE right as the battle starts. The species/boss roll has
// to happen only on the first call and be reused on the second, or the two calls pick
// different mons independently and the battle mon won't match the sprite the player saw.
// Cleared once consumed, so the next fresh spawn rolls again normally.
static const struct PikeWildMon *sPikeWildMonPending = NULL;
static bool8 sPikeWildMonPendingIsBoss = FALSE;

bool32 TryGenerateBattlePikeWildMon(bool8 checkKeenEyeIntimidate)
{
    s32 i;
    s32 monLevel;
    u8 headerId = GetBattlePikeWildMonHeaderId();
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    const struct PikeWildMon *const *const wildMons = sWildMons[lvlMode];
    const struct PikeWildMon *chosenMon;
    struct Pokemon *mon = &gParties[B_TRAINER_OPPONENT_A][0];
    u32 abilityNum;
    bool8 isBoss;

    if (!checkKeenEyeIntimidate && sPikeWildMonPending != NULL)
    {
        // Battle-start call - reuse whatever the spawn-time call already committed to.
        chosenMon = sPikeWildMonPending;
        isBoss = sPikeWildMonPendingIsBoss;
        sPikeWildMonPending = NULL;
    }
    else
    {
        // Rare "boss" encounter instead of the room's regular pool - see sBossMons above.
        isBoss = ((Random() % PIKE_BOSS_MON_ODDS) == 0);

        if (isBoss)
        {
            chosenMon = &sBossMons[lvlMode][Random() % NUM_PIKE_BOSS_MONS];
        }
        else
        {
            u8 numMons;

            for (numMons = 0; wildMons[headerId][numMons].species != SPECIES_NONE; numMons++)
                ;
            do
            {
                chosenMon = &wildMons[headerId][Random() % numMons];
                // Milotic is a much rarer pull than the rest of the table - only accept it
                // 1 in 3 times a reroll lands on it, so its real odds end up around 1-in-18
                // instead of flat with everything else.
            } while (chosenMon->species == SPECIES_MILOTIC && (Random() % 3) != 0);
        }
    }

    if (gSaveBlock2Ptr->frontier.lvlMode != FRONTIER_LVL_50)
    {
        monLevel = GetHighestLevelInPlayerParty();
        if (monLevel < FRONTIER_MIN_LEVEL_OPEN)
        {
            monLevel = FRONTIER_MIN_LEVEL_OPEN;
        }
        else
        {
            monLevel -= chosenMon->levelDelta;
            if (monLevel < FRONTIER_MIN_LEVEL_OPEN)
                monLevel = FRONTIER_MIN_LEVEL_OPEN;
        }
    }
    else
    {
        monLevel = FRONTIER_MAX_LEVEL_50 - chosenMon->levelDelta;
    }

    if (checkKeenEyeIntimidate == TRUE && !CanEncounterWildMon(monLevel))
        return FALSE;

    // Only commit to the cache once the spawn is confirmed (past the ability check above) -
    // a failed spawn attempt must never leave a stale pending choice for some later,
    // unrelated encounter to pick up.
    if (checkKeenEyeIntimidate)
    {
        sPikeWildMonPending = chosenMon;
        sPikeWildMonPendingIsBoss = isBoss;
    }

    SetMonData(mon, MON_DATA_SPECIES, &chosenMon->species);
    // The underlying mon was already created (with a nickname baked in to match whatever
    // species that initial generation produced) before this function retextures it - has
    // to be explicitly resynced or the battle screen keeps showing the old name.
    SetMonData(mon, MON_DATA_NICKNAME, GetSpeciesName(chosenMon->species));
    SetMonData(mon, MON_DATA_EXP, &gExperienceTables[gSpeciesInfo[chosenMon->species].growthRate][monLevel]);

    if (GetSpeciesAbility(chosenMon->species, 1))
        abilityNum = Random() % 2;
    else
        abilityNum = 0;
    SetMonData(mon, MON_DATA_ABILITY_NUM, &abilityNum);
    for (i = 0; i < MAX_MON_MOVES; i++)
        SetMonMoveSlot(mon, chosenMon->moves[i], i);

    if (isBoss)
    {
        u8 perfectIV = MAX_PER_STAT_IVS;
        for (i = 0; i < NUM_STATS; i++)
            SetMonData(mon, MON_DATA_HP_IV + i, &perfectIV);
    }

    CalculateMonStats(mon);
    return TRUE;
}

u8 GetBattlePikeWildMonHeaderId(void)
{
    u8 headerId;
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    u16 winStreak = gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode];

    if (winStreak <= 20 * NUM_PIKE_ROOMS)
        headerId = 0;
    else if (winStreak <= 40 * NUM_PIKE_ROOMS)
        headerId = 1;
    else if (winStreak <= 60 * NUM_PIKE_ROOMS)
        headerId = 2;
    else
        headerId = 3;

    return headerId;
}

static void DoStatusInflictionScreenFlash(u8 taskId)
{
    while (sStatusInflictionScreenFlashFuncs[gTasks[taskId].data[0]](&gTasks[taskId]));
}

static bool8 StatusInflictionFadeOut(struct Task *task)
{
    if (task->data[6] == 0 || --task->data[6] == 0)
    {
        task->data[6] = task->data[1];
        task->data[7] += task->data[4];
        if (task->data[7] > 16)
            task->data[7] = 16;
        BlendPalettes(PALETTES_ALL, task->data[7], RGB(11, 11, 11));
    }

    if (task->data[7] >= 16)
    {
        task->data[0]++;
        task->data[6] = task->data[2];
    }
    return FALSE;
}

static bool8 StatusInflictionFadeIn(struct Task *task)
{
    if (task->data[6] == 0 || --task->data[6] == 0)
    {
        task->data[6] = task->data[2];
        task->data[7] -= task->data[5];
        if (task->data[7] < 0)
            task->data[7] = 0;
        BlendPalettes(PALETTES_ALL, task->data[7], RGB(11, 11, 11));
    }

    if (task->data[7] == 0)
    {
        if (--task->data[3] == 0)
        {
            DestroyTask(FindTaskIdByFunc(DoStatusInflictionScreenFlash));
        }
        else
        {
            task->data[6] = task->data[1];
            task->data[0] = 0;
        }
    }
    return FALSE;
}

static void StartStatusInflictionScreenFlash(s16 fadeOutDelay, s16 fadeInDelay, s16 numFades, s16 fadeOutSpeed, s16 fadeInSpped)
{
    u8 taskId = CreateTask(DoStatusInflictionScreenFlash, 3);

    gTasks[taskId].data[1] = fadeOutDelay;
    gTasks[taskId].data[2] = fadeInDelay;
    gTasks[taskId].data[3] = numFades;
    gTasks[taskId].data[4] = fadeOutSpeed;
    gTasks[taskId].data[5] = fadeInSpped;
    gTasks[taskId].data[6] = fadeOutDelay;
}

static bool8 IsStatusInflictionScreenFlashTaskFinished(void)
{
    if (FindTaskIdByFunc(DoStatusInflictionScreenFlash) == TASK_NONE)
        return TRUE;
    else
        return FALSE;
}

static void Task_DoStatusInflictionScreenFlash(u8 taskId)
{
    if (gTasks[taskId].data[0] == 0)
    {
        gTasks[taskId].data[0]++;
        StartStatusInflictionScreenFlash(0, 0, 3, 2, 2);
    }
    else
    {
        if (IsStatusInflictionScreenFlashTaskFinished())
        {
            ScriptContext_Enable();
            DestroyTask(taskId);
        }
    }
}

static void TryHealMons(u8 healCount)
{
    u8 j, i;
    u8 indices[FRONTIER_PARTY_SIZE];

    if (healCount == 0)
        return;

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
        indices[i] = i;

    // Only 'healCount' number of Pokémon will be healed.
    // The order in which they're (attempted to be) healed is random,
    Shuffle(indices, FRONTIER_PARTY_SIZE, sizeof(indices[0]));

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        bool32 canBeHealed = FALSE;
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][indices[i]];
        u16 curr = GetMonData(mon, MON_DATA_HP);
        u16 max = GetMonData(mon, MON_DATA_MAX_HP);
        if (curr < max)
        {
            canBeHealed = TRUE;
        }
        else if (GetAilmentFromStatus(GetMonData(mon, MON_DATA_STATUS)) != AILMENT_NONE)
        {
            canBeHealed = TRUE;
        }
        else
        {
            u8 ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES);
            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                enum Move move = GetMonData(mon, MON_DATA_MOVE1 + j);
                max = CalculatePPWithBonus(move, ppBonuses, j);
                curr = GetMonData(mon, MON_DATA_PP1 + j);
                if (curr < max)
                {
                    canBeHealed = TRUE;
                    break;
                }
            }
        }

        if (canBeHealed == TRUE)
        {
            HealMon(&gParties[B_TRAINER_PLAYER][indices[i]]);
            if (--healCount == 0)
                break;
        }
    }
}

static void GetInBattlePike(void)
{
    gSpecialVar_Result = InBattlePike();
}

bool8 InBattlePike(void)
{
    return gMapHeader.mapLayoutId == LAYOUT_BATTLE_FRONTIER_BATTLE_PIKE_THREE_PATH_ROOM
        || gMapHeader.mapLayoutId == LAYOUT_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_NORMAL
        || gMapHeader.mapLayoutId == LAYOUT_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_WILD_MONS
        || gMapHeader.mapLayoutId == LAYOUT_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_UNUSED;
}

// Consumes a pending confusion curse from a Status room (see TryInflictPikeConfusionCurse)
// by confusing whichever Pokemon the player actually sends out, once battlers exist to
// confuse. Called from battle_main.c's intro sequence, mirroring how BattleArena_InitPoints
// is already hooked in for the Arena.
void Pike_TryInflictPendingConfusion(void)
{
    enum BattlerId battler;

    if (!gSaveBlock2Ptr->frontier.pikePendingConfusion)
        return;
    gSaveBlock2Ptr->frontier.pikePendingConfusion = FALSE;

    for (battler = 0; battler < gBattlersCount; battler++)
    {
        if (IsOnPlayerSide(battler))
            gBattleMons[battler].volatiles.confusionTurns = RandomUniform(RNG_CONFUSION_TURNS, 2, B_CONFUSION_TURNS);
    }
}

static void SetHintedRoom(void)
{
    u8 i, count, id;
    u8 *roomCandidates;

    gSpecialVar_Result = FALSE;
    if (GetPikeQueenFightType(1))
    {
        gSpecialVar_Result = TRUE;
        gSaveBlock2Ptr->frontier.pikeHintedRoomIndex = Random() % 6;
        gSaveBlock2Ptr->frontier.pikeHintedRoomType = PIKE_ROOM_BRAIN;
    }
    else
    {
        gSaveBlock2Ptr->frontier.pikeHintedRoomIndex = Random() % 3;
        if (gSaveBlock2Ptr->frontier.pikeHealingRoomsDisabled)
            count = NUM_PIKE_ROOM_TYPES - 3; // exclude healing rooms and Brain room
        else
            count = NUM_PIKE_ROOM_TYPES - 1; // exclude Brain room

        roomCandidates = AllocZeroed(count);
        for (i = 0, id = 0; i < count; i++)
        {
            if (gSaveBlock2Ptr->frontier.pikeHealingRoomsDisabled)
            {
                if (i != PIKE_ROOM_HEAL_FULL && i != PIKE_ROOM_HEAL_PART)
                    roomCandidates[id++] = i;
            }
            else
            {
                roomCandidates[i] = i;
            }
        }

        gSaveBlock2Ptr->frontier.pikeHintedRoomType = roomCandidates[Random() % count];
        Free(roomCandidates);
        if (gSaveBlock2Ptr->frontier.pikeHintedRoomType == PIKE_ROOM_STATUS && !AtLeastOneHealthyMon())
            gSaveBlock2Ptr->frontier.pikeHintedRoomType = PIKE_ROOM_NPC;
        if (gSaveBlock2Ptr->frontier.pikeHintedRoomType == PIKE_ROOM_DOUBLE_BATTLE && !AtLeastTwoAliveMons())
            gSaveBlock2Ptr->frontier.pikeHintedRoomType = PIKE_ROOM_NPC;
    }
}

static void GetHintedRoomIndex(void)
{
    gSpecialVar_Result = gSaveBlock2Ptr->frontier.pikeHintedRoomIndex;
}

static void GetRoomTypeHint(void)
{
    gSpecialVar_Result = sRoomTypeHints[gSaveBlock2Ptr->frontier.pikeHintedRoomType];
}

static void PrepareOneTrainer(bool8 difficult)
{
    int i;
    enum FrontierLevelMode lvlMode;
    u8 battleNum;
    u16 challengeNum;
    u16 trainerId;

    if (!difficult)
        battleNum = 1;
    else
        battleNum = FRONTIER_STAGES_PER_CHALLENGE - 1;

    lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    challengeNum = gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode] / NUM_PIKE_ROOMS;
    do
    {
        // Hard Battle rooms go to a Frontier Leader instead of a random "hard tier"
        // trainer - same idea as the round-7 slot in Tower/Factory/Palace.
        if (difficult)
            trainerId = GetRandomFrontierLeaderTrainerId();
        else
            trainerId = GetRandomScaledFrontierTrainerId(challengeNum, battleNum);
        for (i = 0; i < gSaveBlock2Ptr->frontier.curChallengeBattleNum - 1; i++)
        {
            if (gSaveBlock2Ptr->frontier.trainerIds[i] == trainerId)
                break;
        }
    } while (i != gSaveBlock2Ptr->frontier.curChallengeBattleNum - 1);

    TRAINER_BATTLE_PARAM.opponentA = trainerId;
    gFacilityTrainers = gBattleFrontierTrainers;
    SetBattleFacilityTrainerGfxId(TRAINER_BATTLE_PARAM.opponentA, 0);
    if (gSaveBlock2Ptr->frontier.curChallengeBattleNum < NUM_PIKE_ROOMS)
        gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum - 1] = TRAINER_BATTLE_PARAM.opponentA;
}

static void PrepareTwoTrainers(void)
{
    int i;
    u16 trainerId;
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    u16 challengeNum = gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode] / NUM_PIKE_ROOMS;

    gFacilityTrainers = gBattleFrontierTrainers;
    do
    {
        // Pick the 1st trainer, making sure it's not one that's been encountered yet in this challenge.
        trainerId = GetRandomScaledFrontierTrainerId(challengeNum, 1);
        for (i = 0; i < gSaveBlock2Ptr->frontier.curChallengeBattleNum - 1; i++)
        {
            if (gSaveBlock2Ptr->frontier.trainerIds[i] == trainerId)
                break;
        }
    } while (i != gSaveBlock2Ptr->frontier.curChallengeBattleNum - 1);

    TRAINER_BATTLE_PARAM.opponentA = trainerId;
    SetBattleFacilityTrainerGfxId(TRAINER_BATTLE_PARAM.opponentA, 0);
    if (gSaveBlock2Ptr->frontier.curChallengeBattleNum <= NUM_PIKE_ROOMS)
        gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum - 1] = TRAINER_BATTLE_PARAM.opponentA;

    do
    {
        // Pick the 2nd trainer, making sure it's not one that's been encountered yet in this challenge.
        trainerId = GetRandomScaledFrontierTrainerId(challengeNum, 1);
        for (i = 0; i < gSaveBlock2Ptr->frontier.curChallengeBattleNum; i++)
        {
            if (gSaveBlock2Ptr->frontier.trainerIds[i] == trainerId)
                break;
        }
    } while (i != gSaveBlock2Ptr->frontier.curChallengeBattleNum);

    TRAINER_BATTLE_PARAM.opponentB = trainerId;
    SetBattleFacilityTrainerGfxId(TRAINER_BATTLE_PARAM.opponentB, 1);
    if (gSaveBlock2Ptr->frontier.curChallengeBattleNum < NUM_PIKE_ROOMS)
        gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum - 2] = TRAINER_BATTLE_PARAM.opponentB;
}

static void ClearPikeTrainerIds(void)
{
    u8 i;

    for (i = 0; i < NUM_PIKE_ROOMS; i++)
        gSaveBlock2Ptr->frontier.trainerIds[i] = 0xFFFF;
}

static void BufferTrainerIntro(void)
{
    if (gSpecialVar_0x8005 == 0)
    {
        if (TRAINER_BATTLE_PARAM.opponentA < FRONTIER_TRAINERS_COUNT)
            CopyFrontierTrainerSpeech(gStringVar4, gFacilityTrainers[TRAINER_BATTLE_PARAM.opponentA].facilityClass, FRONTIER_SPEECH_BEFORE);
    }
    else if (gSpecialVar_0x8005 == 1)
    {
        if (TRAINER_BATTLE_PARAM.opponentB < FRONTIER_TRAINERS_COUNT)
            CopyFrontierTrainerSpeech(gStringVar4, gFacilityTrainers[TRAINER_BATTLE_PARAM.opponentB].facilityClass, FRONTIER_SPEECH_BEFORE);
    }
}

static bool8 AtLeastTwoAliveMons(void)
{
    struct Pokemon *mon;
    u8 i, countDead;

    mon = &gParties[B_TRAINER_PLAYER][0];
    countDead = 0;
    for (i = 0; i < FRONTIER_PARTY_SIZE; i++, mon++)
    {
        if (GetMonData(mon, MON_DATA_HP) == 0)
            countDead++;
    }

    if (countDead >= 2)
        return FALSE;
    else
        return TRUE;
}

static u8 GetPikeQueenFightType(u8 nextRoom)
{
    u8 numPikeSymbols;

    u8 facility = FRONTIER_FACILITY_PIKE;
    u8 ret = FRONTIER_BRAIN_NOT_READY;
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;
    u16 winStreak = gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode];
    winStreak += nextRoom;
    numPikeSymbols = GetPlayerSymbolCountForFacility(FRONTIER_FACILITY_PIKE);

    switch (numPikeSymbols)
    {
    case 0:
    case 1:
        if (winStreak == sFrontierBrainStreakAppearances[facility][numPikeSymbols] - sFrontierBrainStreakAppearances[facility][3])
            ret = numPikeSymbols + 1; // FRONTIER_BRAIN_SILVER and FRONTIER_BRAIN_GOLD
        break;
    case 2:
    default:
        if (winStreak == sFrontierBrainStreakAppearances[facility][0] - sFrontierBrainStreakAppearances[facility][3])
            ret = FRONTIER_BRAIN_STREAK;
        else if (winStreak == sFrontierBrainStreakAppearances[facility][1] - sFrontierBrainStreakAppearances[facility][3]
                 || (winStreak > sFrontierBrainStreakAppearances[facility][1]
                     && (winStreak - sFrontierBrainStreakAppearances[facility][1] + sFrontierBrainStreakAppearances[facility][3]) % sFrontierBrainStreakAppearances[facility][2] == 0))
            ret = FRONTIER_BRAIN_STREAK_LONG;
        break;
    }

    return ret;
}

static void GetCurrentRoomPikeQueenFightType(void)
{
    gSpecialVar_Result = GetPikeQueenFightType(0);
}

static void HealSomeMonsBeforePikeQueen(void)
{
    u8 toHealCount = sNumMonsToHealBeforePikeQueen[gSaveBlock2Ptr->frontier.pikeHintedRoomIndex][gSpecialVar_0x8007];

    TryHealMons(toHealCount);
    gSpecialVar_Result = toHealCount;
}

static void SetHealingroomTypesDisabled(void)
{
    gSaveBlock2Ptr->frontier.pikeHealingRoomsDisabled = gSpecialVar_0x8005;
}

static void IsPartyFullHealed(void)
{
    u8 i, j;

    gSpecialVar_Result = TRUE;
    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        bool32 canBeHealed = FALSE;
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][i];
        u16 curr = GetMonData(mon, MON_DATA_HP);
        u16 max = GetMonData(mon, MON_DATA_MAX_HP);
        if (curr >= max && GetAilmentFromStatus(GetMonData(mon, MON_DATA_STATUS)) == AILMENT_NONE)
        {
            u8 ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES);
            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                enum Move move = GetMonData(mon, MON_DATA_MOVE1 + j);
                max = CalculatePPWithBonus(move, ppBonuses, j);
                curr = GetMonData(mon, MON_DATA_PP1 + j);
                if (curr < max)
                {
                    canBeHealed = TRUE;
                    break;
                }
            }
        }
        else
        {
            canBeHealed = TRUE;
        }

        if (canBeHealed == TRUE)
        {
            gSpecialVar_Result = FALSE;
            break;
        }
    }
}

static void SaveMonHeldItems(void)
{
    u8 i;

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        int heldItem = GetMonData(GetSavedPlayerPartyMon(gSaveBlock2Ptr->frontier.selectedPartyMons[i] - 1),
                                  MON_DATA_HELD_ITEM);
        gSaveBlock2Ptr->frontier.pikeHeldItemsBackup[i] = heldItem;
    }
}

static void RestoreMonHeldItems(void)
{
    u8 i;

    for (i = 0; i < FRONTIER_PARTY_SIZE; i++)
    {
        SetMonData(&gParties[B_TRAINER_PLAYER][gSaveBlock2Ptr->frontier.selectedPartyMons[i] - 1],
                   MON_DATA_HELD_ITEM,
                   &gSaveBlock2Ptr->frontier.pikeHeldItemsBackup[i]);
    }
}

// Flat, immediate Battle Points top-up for clearing a risky room (Status curse, Hard
// Battle, Double Battle) - separate from the run-ending payout given by
// frontier_givepoints. Amount comes in via VAR_0x8005 (see PIKE_BONUS_POINTS_* in
// constants/battle_pike.h).
static void GivePikeBonusPoints(void)
{
    gSaveBlock2Ptr->frontier.battlePoints += gSpecialVar_0x8005;
    if (gSaveBlock2Ptr->frontier.battlePoints > MAX_BATTLE_FRONTIER_POINTS)
        gSaveBlock2Ptr->frontier.battlePoints = MAX_BATTLE_FRONTIER_POINTS;
}

static void InitPikeChallenge(void)
{
    enum FrontierLevelMode lvlMode = gSaveBlock2Ptr->frontier.lvlMode;

    gSaveBlock2Ptr->frontier.challengeStatus = 0;
    gSaveBlock2Ptr->frontier.curChallengeBattleNum = 0;
    gSaveBlock2Ptr->frontier.challengePaused = FALSE;
    if (!(gSaveBlock2Ptr->frontier.winStreakActiveFlags & sWinStreakFlags[lvlMode]))
        gSaveBlock2Ptr->frontier.pikeWinStreaks[lvlMode] = 0;

    TRAINER_BATTLE_PARAM.opponentA = 0;
    gBattleOutcome = 0;
}

static bool8 CanEncounterWildMon(u8 enemyMonLevel)
{
    if (!GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_SANITY_IS_EGG))
    {
        enum Ability monAbility = GetMonAbility(&gParties[B_TRAINER_PLAYER][0]);
        if (monAbility == ABILITY_KEEN_EYE || monAbility == ABILITY_INTIMIDATE)
        {
            u8 playerMonLevel = GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_LEVEL);
            if (playerMonLevel > 5 && enemyMonLevel <= playerMonLevel - 5 && Random() % 2 == 0)
                return FALSE;
        }
    }

    return TRUE;
}
