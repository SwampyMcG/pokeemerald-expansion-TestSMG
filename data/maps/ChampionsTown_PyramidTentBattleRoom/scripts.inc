# 1 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 2 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_MapScripts::
# 3 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ChampionsTown_PyramidTentBattleRoom_OnTransition
# 4 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChampionsTown_PyramidTentBattleRoom_OnFrame
# 5 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ChampionsTown_PyramidTentBattleRoom_OnWarp
# 6 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.byte 0
# 7 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 8 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
# 9 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_PLAYER).
# 10 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_1.
# 11 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by tower_setopponent.
# 12 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_OnTransition:
# 13 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	call ChampionsTown_PyramidTentBattleRoom_EventScript_SetPlayerGfx
# 14 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	end
# 15 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 16 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_SetPlayerGfx::
# 17 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	checkplayergender
# 18 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, ChampionsTown_PyramidTentBattleRoom_EventScript_SetPlayerGfxMale
# 19 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, ChampionsTown_PyramidTentBattleRoom_EventScript_SetPlayerGfxFemale
# 20 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	return
# 21 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 22 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_SetPlayerGfxMale::
# 23 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 24 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 25 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	return
# 26 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 27 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_SetPlayerGfxFemale::
# 28 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 29 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 30 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	return
# 31 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 32 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_OnFrame:
# 33 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ChampionsTown_PyramidTentBattleRoom_EventScript_EnterRoom
# 34 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.2byte 0
# 35 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 36 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_EnterRoom::
# 37 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	lockall
# 38 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	showobjectat LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_PLAYER, MAP_CHAMPIONS_TOWN_PYRAMID_TENT_BATTLE_ROOM
# 39 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_PLAYER, ChampionsTown_PyramidTentBattleRoom_Movement_PlayerEnter
# 40 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 41 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 42 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, 0, ChampionsTown_PyramidTentBattleRoom_EventScript_ResumeChallenge
# 43 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PyramidTentBattleRoom_Text_ChamberOpensUp, MSGBOX_DEFAULT
# 44 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_NextOpponentEnter::
# 45 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	tower_setopponent
# 46 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_OPPONENT
# 47 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_OPPONENT, ChampionsTown_PyramidTentBattleRoom_Movement_OpponentEnter
# 48 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 49 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_ATTENDANT, ChampionsTown_PyramidTentBattleRoom_Movement_AttendantJump
# 50 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 51 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitse
# 52 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 53 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 54 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 55 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmessage
# 56 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	call ChampionsTown_PyramidTentBattleRoom_EventScript_DoPyramidBattle
# 57 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 58 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	case 1, ChampionsTown_PyramidTentBattleRoom_EventScript_DefeatedOpponent
# 59 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_ATTENDANT, ChampionsTown_PyramidTentBattleRoom_Movement_AttendantJump
# 60 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	playse SE_M_SNORE
# 61 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitse
# 62 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 63 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	championspyramidtent_getopponentname
# 64 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PyramidTentBattleRoom_Text_WinnerIsOpponent, MSGBOX_DEFAULT
# 65 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_WarpToLobbyLost::
# 66 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 67 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 68 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	warp MAP_CHAMPIONS_TOWN_PYRAMID_TENT_LOBBY, 6, 6
# 69 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitstate
# 70 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 71 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_DoPyramidBattle::
# 72 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	closemessage
# 73 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 74 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PYRAMID
# 75 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitstate
# 76 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	frontier_restorehelditems
# 77 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 78 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	return
# 79 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 80 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_DefeatedOpponent::
# 81 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_ATTENDANT, ChampionsTown_PyramidTentBattleRoom_Movement_AttendantJump
# 82 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	playse SE_BANG
# 83 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitse
# 84 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 85 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PyramidTentBattleRoom_Text_WinnerIsPlayer, MSGBOX_DEFAULT
# 86 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	closemessage
# 87 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_IncrementBattleNum::
# 88 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 89 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 90 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 91 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	case 3, ChampionsTown_PyramidTentBattleRoom_EventScript_WarpToLobbyWon
# 93 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_OPPONENT, ChampionsTown_PyramidTentBattleRoom_Movement_OpponentExit
# 94 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 95 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	removeobject LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_OPPONENT
# 96 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_ATTENDANT, ChampionsTown_PyramidTentBattleRoom_Movement_AttendantApproachPlayer
# 97 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 98 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_PLAYER, ChampionsTown_PyramidTentBattleRoom_Movement_PlayerFaceAttendant
# 99 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 100 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PyramidTentBattleRoom_Text_MonsWillBeRestored, MSGBOX_DEFAULT
# 101 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 102 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	special SavePlayerParty
# 103 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 104 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 105 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitfanfare
# 106 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 107 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_AskContinueChallenge::
# 108 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 109 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 1, ChampionsTown_PyramidTentBattleRoom_EventScript_ReadyFor2nd
# 110 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 2, ChampionsTown_PyramidTentBattleRoom_EventScript_ReadyFor3rd
# 111 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 112 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	case 0, ChampionsTown_PyramidTentBattleRoom_EventScript_ContinueChallenge
# 114 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	case 1, ChampionsTown_PyramidTentBattleRoom_EventScript_AskPauseChallenge
# 115 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	case 2, ChampionsTown_PyramidTentBattleRoom_EventScript_AskRetireChallenge
# 116 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 117 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_AskPauseChallenge::
# 118 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_PyramidTentBattleRoom_Text_SaveAndShutDown, MSGBOX_YESNO
# 119 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	case NO, ChampionsTown_PyramidTentBattleRoom_EventScript_AskContinueChallenge
# 121 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	case YES, ChampionsTown_PyramidTentBattleRoom_EventScript_PauseChallenge
# 122 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, ChampionsTown_PyramidTentBattleRoom_EventScript_AskContinueChallenge
# 123 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 124 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_AskRetireChallenge::
# 125 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	message ChampionsTown_PyramidTentBattleRoom_Text_RetireFromChallenge
# 126 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmessage
# 127 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 128 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 129 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	case 1, ChampionsTown_PyramidTentBattleRoom_EventScript_AskContinueChallenge
# 130 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	case 0, ChampionsTown_PyramidTentBattleRoom_EventScript_WarpToLobbyLost
# 131 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, ChampionsTown_PyramidTentBattleRoom_EventScript_AskContinueChallenge
# 132 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 133 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_ContinueChallenge::
# 134 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	closemessage
# 135 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_ATTENDANT, ChampionsTown_PyramidTentBattleRoom_Movement_AttendantReturnToPos
# 136 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 137 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_PLAYER, ChampionsTown_PyramidTentBattleRoom_Movement_PlayerFaceBattle
# 138 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 139 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	goto ChampionsTown_PyramidTentBattleRoom_EventScript_NextOpponentEnter
# 140 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitstate
# 141 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 142 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_WarpToLobbyWon::
# 143 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	delay 60
# 144 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 145 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 146 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	warp MAP_CHAMPIONS_TOWN_PYRAMID_TENT_LOBBY, 6, 6
# 147 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitstate
# 148 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 149 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_ReadyFor2nd::
# 150 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	message ChampionsTown_PyramidTentBattleRoom_Text_ReadyFor2nd
# 151 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmessage
# 152 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	return
# 153 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 154 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_ReadyFor3rd::
# 155 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	message ChampionsTown_PyramidTentBattleRoom_Text_ReadyFor3rd
# 156 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmessage
# 157 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	return
# 158 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 159 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_PauseChallenge::
# 160 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	message ChampionsTown_PyramidTentBattleRoom_Text_SavingPleaseWait
# 161 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmessage
# 162 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	championspyramidtent_save CHALLENGE_STATUS_PAUSED
# 163 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	playse SE_SAVE
# 164 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitse
# 165 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 166 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	frontier_reset
# 167 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	end
# 168 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 169 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_ResumeChallenge::
# 170 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_ATTENDANT, ChampionsTown_PyramidTentBattleRoom_Movement_AttendantApproachPlayer
# 171 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 172 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_PLAYER, ChampionsTown_PyramidTentBattleRoom_Movement_PlayerFaceAttendant
# 173 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	waitmovement 0
# 174 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	goto ChampionsTown_PyramidTentBattleRoom_EventScript_AskContinueChallenge
# 175 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	end
# 176 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 177 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Movement_PlayerEnter:
# 178 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_up
# 179 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_up
# 180 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_up
# 181 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 182 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	step_end
# 183 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 184 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Movement_PlayerFaceBattle:
# 185 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 186 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	step_end
# 187 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 188 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Movement_PlayerFaceAttendant:
# 189 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 190 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	step_end
# 191 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 192 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Movement_OpponentEnter:
# 193 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_down
# 194 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_down
# 195 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_down
# 196 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_down
# 197 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 198 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	step_end
# 199 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 200 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Movement_OpponentExit:
# 201 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_up
# 202 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_up
# 203 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_up
# 204 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_up
# 205 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	step_end
# 206 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 207 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Movement_AttendantJump:
# 208 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 209 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	jump_in_place_down
# 210 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	step_end
# 211 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 212 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Movement_AttendantApproachPlayer:
# 213 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_down
# 214 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_down
# 215 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_down
# 216 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 217 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	step_end
# 218 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 219 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Movement_AttendantReturnToPos:
# 220 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_up
# 221 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_up
# 222 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_up
# 223 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 224 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	step_end
# 225 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 226 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_OnWarp:
# 227 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ChampionsTown_PyramidTentBattleRoom_EventScript_SetUpObjects
# 228 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.2byte 0
# 229 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 230 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_EventScript_SetUpObjects::
# 231 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_CHAMPIONS_TOWN_PYRAMID_TENT_BATTLE_ROOM
# 232 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_PLAYER, MAP_CHAMPIONS_TOWN_PYRAMID_TENT_BATTLE_ROOM
# 233 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	removeobject LOCALID_CHAMPIONS_PYRAMID_TENT_BATTLE_OPPONENT
# 234 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 235 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	end
# 236 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 237 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Text_ChamberOpensUp:
# 238 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "The corridor opens into a wide\n"
# 239 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "chamber…$"
# 240 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 241 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Text_WinnerIsPlayer:
# 242 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "And the winner is… {PLAYER}!$"
# 243 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 244 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Text_WinnerIsOpponent:
# 245 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "And the winner is… {STR_VAR_1}!$"
# 246 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 247 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Text_MonsWillBeRestored:
# 248 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "Your POKéMON will be restored to\n"
# 249 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "full health.$"
# 250 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 251 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Text_ReadyFor2nd:
# 252 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "Ready for your next challenger?$"
# 253 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 254 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Text_ReadyFor3rd:
# 255 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "Ready for your final challenger?$"
# 256 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 257 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Text_SaveAndShutDown:
# 258 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "Would you like to save your progress\n"
# 259 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "and take a break?$"
# 260 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 261 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Text_RetireFromChallenge:
# 262 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "Are you sure you want to retire from\n"
# 263 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "the challenge?$"
# 264 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"

# 265 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
ChampionsTown_PyramidTentBattleRoom_Text_SavingPleaseWait:
# 266 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "Saving…\n"
# 267 "data/maps/ChampionsTown_PyramidTentBattleRoom/scripts.pory"
	.string "Please wait.$"
