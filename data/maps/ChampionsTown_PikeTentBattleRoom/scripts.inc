# 1 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 2 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_MapScripts::
# 3 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ChampionsTown_PikeTentBattleRoom_OnTransition
# 4 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChampionsTown_PikeTentBattleRoom_OnFrame
# 5 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ChampionsTown_PikeTentBattleRoom_OnWarp
# 6 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.byte 0
# 7 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 8 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
# 9 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_PLAYER).
# 10 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_1.
# 11 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by tower_setopponent.
# 12 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_OnTransition:
# 13 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	call ChampionsTown_PikeTentBattleRoom_EventScript_SetPlayerGfx
# 14 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	end
# 15 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 16 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_SetPlayerGfx::
# 17 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	checkplayergender
# 18 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, ChampionsTown_PikeTentBattleRoom_EventScript_SetPlayerGfxMale
# 19 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, ChampionsTown_PikeTentBattleRoom_EventScript_SetPlayerGfxFemale
# 20 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	return
# 21 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 22 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_SetPlayerGfxMale::
# 23 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 24 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 25 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	return
# 26 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 27 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_SetPlayerGfxFemale::
# 28 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 29 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 30 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	return
# 31 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 32 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_OnFrame:
# 33 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ChampionsTown_PikeTentBattleRoom_EventScript_EnterRoom
# 34 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.2byte 0
# 35 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 36 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_EnterRoom::
# 37 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	lockall
# 38 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	showobjectat LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_PLAYER, MAP_CHAMPIONS_TOWN_PIKE_TENT_BATTLE_ROOM
# 39 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_PLAYER, ChampionsTown_PikeTentBattleRoom_Movement_PlayerEnter
# 40 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 41 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 42 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, 0, ChampionsTown_PikeTentBattleRoom_EventScript_ResumeChallenge
# 43 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_NextOpponentEnter::
# 44 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 45 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, ChampionsTown_PikeTentBattleRoom_EventScript_MysteryRoom
# 46 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	tower_setopponent
# 47 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_OPPONENT
# 48 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_OPPONENT, ChampionsTown_PikeTentBattleRoom_Movement_OpponentEnter
# 49 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 50 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_ATTENDANT, ChampionsTown_PikeTentBattleRoom_Movement_AttendantJump
# 51 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 52 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitse
# 53 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 54 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 55 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 56 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmessage
# 57 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	call ChampionsTown_PikeTentBattleRoom_EventScript_DoPikeBattle
# 58 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case 1, ChampionsTown_PikeTentBattleRoom_EventScript_DefeatedOpponent
# 60 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_ATTENDANT, ChampionsTown_PikeTentBattleRoom_Movement_AttendantJump
# 61 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	playse SE_M_SNORE
# 62 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitse
# 63 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 64 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	championspiketent_getopponentname
# 65 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PikeTentBattleRoom_Text_WinnerIsOpponent, MSGBOX_DEFAULT
# 66 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_WarpToLobbyLost::
# 67 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 68 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 69 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	warp MAP_CHAMPIONS_TOWN_PIKE_TENT_LOBBY, 6, 6
# 70 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitstate
# 71 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 72 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_DoPikeBattle::
# 73 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	closemessage
# 74 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 75 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PIKE_SINGLE
# 76 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitstate
# 77 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	frontier_restorehelditems
# 78 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 79 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	return
# 80 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 81 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_DefeatedOpponent::
# 82 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_ATTENDANT, ChampionsTown_PikeTentBattleRoom_Movement_AttendantJump
# 83 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	playse SE_BANG
# 84 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitse
# 85 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 86 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PikeTentBattleRoom_Text_WinnerIsPlayer, MSGBOX_DEFAULT
# 87 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	closemessage
# 88 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_OPPONENT, ChampionsTown_PikeTentBattleRoom_Movement_OpponentExit
# 89 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 90 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	removeobject LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_OPPONENT
# 91 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto ChampionsTown_PikeTentBattleRoom_EventScript_IncrementBattleNum
# 92 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 93 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
@ The 2nd stop (FRONTIER_DATA_BATTLE_NUM == 1) is a mystery room instead of a battle - no
# 94 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
@ opponent is ever added here, so this converges directly with IncrementBattleNum's "approach
# 95 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
@ the attendant and heal up" step rather than the opponent-exit steps above.
# 96 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_MysteryRoom::
# 97 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PikeTentBattleRoom_Text_MysteryRoomIntro, MSGBOX_DEFAULT
# 98 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmessage
# 99 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	championspiketent_trymysteryroom
# 100 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case CHAMPIONS_PIKE_MYSTERY_CURSE_POISON, ChampionsTown_PikeTentBattleRoom_EventScript_MysteryCursePoison
# 102 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case CHAMPIONS_PIKE_MYSTERY_CURSE_PARALYSIS, ChampionsTown_PikeTentBattleRoom_EventScript_MysteryCurseParalysis
# 103 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case CHAMPIONS_PIKE_MYSTERY_CURSE_BURN, ChampionsTown_PikeTentBattleRoom_EventScript_MysteryCurseBurn
# 104 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case CHAMPIONS_PIKE_MYSTERY_CURSE_SLEEP, ChampionsTown_PikeTentBattleRoom_EventScript_MysteryCurseSleep
# 105 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case CHAMPIONS_PIKE_MYSTERY_TREASURE, ChampionsTown_PikeTentBattleRoom_EventScript_MysteryTreasure
# 106 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PikeTentBattleRoom_Text_MysteryNothing, MSGBOX_DEFAULT
# 107 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto ChampionsTown_PikeTentBattleRoom_EventScript_MysteryRoomDone
# 108 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 109 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_MysteryCursePoison::
# 110 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PikeTentBattleRoom_Text_MysteryCursePoison, MSGBOX_DEFAULT
# 111 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto ChampionsTown_PikeTentBattleRoom_EventScript_MysteryRoomDone
# 112 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 113 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_MysteryCurseParalysis::
# 114 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PikeTentBattleRoom_Text_MysteryCurseParalysis, MSGBOX_DEFAULT
# 115 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto ChampionsTown_PikeTentBattleRoom_EventScript_MysteryRoomDone
# 116 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 117 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_MysteryCurseBurn::
# 118 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PikeTentBattleRoom_Text_MysteryCurseBurn, MSGBOX_DEFAULT
# 119 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto ChampionsTown_PikeTentBattleRoom_EventScript_MysteryRoomDone
# 120 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 121 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_MysteryCurseSleep::
# 122 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PikeTentBattleRoom_Text_MysteryCurseSleep, MSGBOX_DEFAULT
# 123 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto ChampionsTown_PikeTentBattleRoom_EventScript_MysteryRoomDone
# 124 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 125 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_MysteryTreasure::
# 126 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PikeTentBattleRoom_Text_MysteryTreasureFound, MSGBOX_DEFAULT
# 127 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 128 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitfanfare
# 129 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 130 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_MysteryRoomDone::
# 131 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	closemessage
# 132 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_IncrementBattleNum::
# 133 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 134 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 135 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 136 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 137 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case 3, ChampionsTown_PikeTentBattleRoom_EventScript_WarpToLobbyWon
# 138 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_ATTENDANT, ChampionsTown_PikeTentBattleRoom_Movement_AttendantApproachPlayer
# 139 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 140 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_PLAYER, ChampionsTown_PikeTentBattleRoom_Movement_PlayerFaceAttendant
# 141 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 142 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PikeTentBattleRoom_Text_MonsWillBeRestored, MSGBOX_DEFAULT
# 143 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 144 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	special SavePlayerParty
# 145 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 146 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 147 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitfanfare
# 148 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 149 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_AskContinueChallenge::
# 150 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 151 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 1, ChampionsTown_PikeTentBattleRoom_EventScript_ReadyForMysteryRoom
# 152 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 2, ChampionsTown_PikeTentBattleRoom_EventScript_ReadyForFinalBattle
# 153 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 154 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case 0, ChampionsTown_PikeTentBattleRoom_EventScript_ContinueChallenge
# 156 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case 1, ChampionsTown_PikeTentBattleRoom_EventScript_AskPauseChallenge
# 157 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case 2, ChampionsTown_PikeTentBattleRoom_EventScript_AskRetireChallenge
# 158 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 159 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_AskPauseChallenge::
# 160 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PikeTentBattleRoom_Text_SaveAndShutDown, MSGBOX_YESNO
# 161 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case NO, ChampionsTown_PikeTentBattleRoom_EventScript_AskContinueChallenge
# 163 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case YES, ChampionsTown_PikeTentBattleRoom_EventScript_PauseChallenge
# 164 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, ChampionsTown_PikeTentBattleRoom_EventScript_AskContinueChallenge
# 165 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 166 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_AskRetireChallenge::
# 167 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	message ChampionsTown_PikeTentBattleRoom_Text_RetireFromChallenge
# 168 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmessage
# 169 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 170 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 171 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case 1, ChampionsTown_PikeTentBattleRoom_EventScript_AskContinueChallenge
# 172 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case 0, ChampionsTown_PikeTentBattleRoom_EventScript_WarpToLobbyLost
# 173 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, ChampionsTown_PikeTentBattleRoom_EventScript_AskContinueChallenge
# 174 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 175 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_ContinueChallenge::
# 176 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	closemessage
# 177 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_ATTENDANT, ChampionsTown_PikeTentBattleRoom_Movement_AttendantReturnToPos
# 178 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 179 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_PLAYER, ChampionsTown_PikeTentBattleRoom_Movement_PlayerFaceBattle
# 180 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 181 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto ChampionsTown_PikeTentBattleRoom_EventScript_NextOpponentEnter
# 182 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitstate
# 183 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 184 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_WarpToLobbyWon::
# 185 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	delay 60
# 186 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 187 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 188 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	warp MAP_CHAMPIONS_TOWN_PIKE_TENT_LOBBY, 6, 6
# 189 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitstate
# 190 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 191 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_ReadyForMysteryRoom::
# 192 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	message ChampionsTown_PikeTentBattleRoom_Text_ReadyForMysteryRoom
# 193 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmessage
# 194 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	return
# 195 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 196 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_ReadyForFinalBattle::
# 197 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	message ChampionsTown_PikeTentBattleRoom_Text_ReadyForFinalBattle
# 198 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmessage
# 199 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	return
# 200 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 201 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_PauseChallenge::
# 202 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	message ChampionsTown_PikeTentBattleRoom_Text_SavingPleaseWait
# 203 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmessage
# 204 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	championspiketent_save CHALLENGE_STATUS_PAUSED
# 205 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	playse SE_SAVE
# 206 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitse
# 207 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 208 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	frontier_reset
# 209 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	end
# 210 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 211 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_ResumeChallenge::
# 212 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_ATTENDANT, ChampionsTown_PikeTentBattleRoom_Movement_AttendantApproachPlayer
# 213 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 214 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_PLAYER, ChampionsTown_PikeTentBattleRoom_Movement_PlayerFaceAttendant
# 215 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	waitmovement 0
# 216 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	goto ChampionsTown_PikeTentBattleRoom_EventScript_AskContinueChallenge
# 217 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	end
# 218 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 219 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Movement_PlayerEnter:
# 220 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_up
# 221 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_up
# 222 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_up
# 223 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 224 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	step_end
# 225 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 226 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Movement_PlayerFaceBattle:
# 227 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 228 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	step_end
# 229 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 230 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Movement_PlayerFaceAttendant:
# 231 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 232 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	step_end
# 233 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 234 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Movement_OpponentEnter:
# 235 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_down
# 236 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_down
# 237 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_down
# 238 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_down
# 239 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 240 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	step_end
# 241 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 242 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Movement_OpponentExit:
# 243 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_up
# 244 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_up
# 245 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_up
# 246 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_up
# 247 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	step_end
# 248 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 249 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Movement_AttendantJump:
# 250 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 251 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	jump_in_place_down
# 252 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	step_end
# 253 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 254 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Movement_AttendantApproachPlayer:
# 255 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_down
# 256 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_down
# 257 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_down
# 258 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 259 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	step_end
# 260 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 261 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Movement_AttendantReturnToPos:
# 262 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_up
# 263 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_up
# 264 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_up
# 265 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 266 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	step_end
# 267 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 268 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_OnWarp:
# 269 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ChampionsTown_PikeTentBattleRoom_EventScript_SetUpObjects
# 270 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.2byte 0
# 271 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 272 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_EventScript_SetUpObjects::
# 273 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_CHAMPIONS_TOWN_PIKE_TENT_BATTLE_ROOM
# 274 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_PLAYER, MAP_CHAMPIONS_TOWN_PIKE_TENT_BATTLE_ROOM
# 275 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	removeobject LOCALID_CHAMPIONS_PIKE_TENT_BATTLE_OPPONENT
# 276 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 277 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	end
# 278 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 279 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_WinnerIsPlayer:
# 280 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "And the winner is… {PLAYER}!$"
# 281 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 282 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_WinnerIsOpponent:
# 283 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "And the winner is… {STR_VAR_1}!$"
# 284 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 285 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_MysteryRoomIntro:
# 286 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "You step further down the corridor…\p"
# 287 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "Something feels different about\n"
# 288 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "this stretch.$"
# 289 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 290 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_MysteryNothing:
# 291 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "…\p"
# 292 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "Nothing happens. Must have been\n"
# 293 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "your imagination.$"
# 294 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 295 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_MysteryCursePoison:
# 296 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "A sickly purple mist creeps out\n"
# 297 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "from the shadows!\p"
# 298 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "{STR_VAR_1} was poisoned!$"
# 299 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 300 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_MysteryCurseParalysis:
# 301 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "A crackle of static leaps out\n"
# 302 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "from the shadows!\p"
# 303 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "{STR_VAR_1} was paralyzed!$"
# 304 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 305 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_MysteryCurseBurn:
# 306 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "A gout of flame licks out\n"
# 307 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "from the shadows!\p"
# 308 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "{STR_VAR_1} was burned!$"
# 309 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 310 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_MysteryCurseSleep:
# 311 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "A wave of drowsiness washes\n"
# 312 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "over the corridor!\p"
# 313 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "{STR_VAR_1} fell asleep!$"
# 314 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 315 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_MysteryTreasureFound:
# 316 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "Something glints on the floor\n"
# 317 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "ahead…\p"
# 318 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "{PLAYER} found a {STR_VAR_1}!$"
# 319 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 320 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_MonsWillBeRestored:
# 321 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "Your POKéMON will be restored to\n"
# 322 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "full health.$"
# 323 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 324 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_ReadyForMysteryRoom:
# 325 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "Ready to press on into the\n"
# 326 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "corridor?$"
# 327 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 328 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_ReadyForFinalBattle:
# 329 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "Are you ready for the final stretch\n"
# 330 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "of the corridor?$"
# 331 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 332 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_SaveAndShutDown:
# 333 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "Would you like to save your progress\n"
# 334 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "and take a break?$"
# 335 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 336 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_RetireFromChallenge:
# 337 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "Are you sure you want to retire from\n"
# 338 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "the challenge?$"
# 339 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"

# 340 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
ChampionsTown_PikeTentBattleRoom_Text_SavingPleaseWait:
# 341 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "Saving…\n"
# 342 "data/maps/ChampionsTown_PikeTentBattleRoom/scripts.pory"
	.string "Please wait.$"
