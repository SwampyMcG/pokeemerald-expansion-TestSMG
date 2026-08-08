# 1 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 2 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_MapScripts::
# 3 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ChampionsTown_DomeTentBattleRoom_OnTransition
# 4 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChampionsTown_DomeTentBattleRoom_OnFrame
# 5 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ChampionsTown_DomeTentBattleRoom_OnWarp
# 6 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.byte 0
# 7 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 8 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
# 9 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_CHAMPIONS_DOME_TENT_BATTLE_PLAYER).
# 10 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_1.
# 11 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by tower_setopponent.
# 12 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_OnTransition:
# 13 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	call ChampionsTown_DomeTentBattleRoom_EventScript_SetPlayerGfx
# 14 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	end
# 15 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 16 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_SetPlayerGfx::
# 17 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	checkplayergender
# 18 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, ChampionsTown_DomeTentBattleRoom_EventScript_SetPlayerGfxMale
# 19 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, ChampionsTown_DomeTentBattleRoom_EventScript_SetPlayerGfxFemale
# 20 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	return
# 21 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 22 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_SetPlayerGfxMale::
# 23 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 24 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 25 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	return
# 26 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 27 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_SetPlayerGfxFemale::
# 28 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 29 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 30 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	return
# 31 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 32 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_OnFrame:
# 33 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ChampionsTown_DomeTentBattleRoom_EventScript_EnterRoom
# 34 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.2byte 0
# 35 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 36 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_EnterRoom::
# 37 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	lockall
# 38 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	showobjectat LOCALID_CHAMPIONS_DOME_TENT_BATTLE_PLAYER, MAP_CHAMPIONS_TOWN_DOME_TENT_BATTLE_ROOM
# 39 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_PLAYER, ChampionsTown_DomeTentBattleRoom_Movement_PlayerEnter
# 40 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 41 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 42 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, 0, ChampionsTown_DomeTentBattleRoom_EventScript_ResumeChallenge
# 43 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_NextOpponentEnter::
# 44 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	tower_setopponent
# 45 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_DOME_TENT_BATTLE_OPPONENT
# 46 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_OPPONENT, ChampionsTown_DomeTentBattleRoom_Movement_OpponentEnter
# 47 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 48 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_ATTENDANT, ChampionsTown_DomeTentBattleRoom_Movement_AttendantJump
# 49 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 50 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitse
# 51 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 52 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 53 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 54 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case 0, ChampionsTown_DomeTentBattleRoom_EventScript_AnnounceRoundOf8
# 55 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case 1, ChampionsTown_DomeTentBattleRoom_EventScript_AnnounceSemifinal
# 56 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case 2, ChampionsTown_DomeTentBattleRoom_EventScript_AnnounceFinal
# 57 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 58 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_AnnounceRoundOf8::
# 59 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_DomeTentBattleRoom_Text_RoundOf8Begin, MSGBOX_DEFAULT
# 60 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	goto ChampionsTown_DomeTentBattleRoom_EventScript_IntroduceOpponent
# 61 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 62 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_AnnounceSemifinal::
# 63 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_DomeTentBattleRoom_Text_SemifinalBegin, MSGBOX_DEFAULT
# 64 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	goto ChampionsTown_DomeTentBattleRoom_EventScript_IntroduceOpponent
# 65 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 66 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_AnnounceFinal::
# 67 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_DomeTentBattleRoom_Text_FinalBegin, MSGBOX_DEFAULT
# 68 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 69 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_IntroduceOpponent::
# 70 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 71 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 72 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmessage
# 73 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	call ChampionsTown_DomeTentBattleRoom_EventScript_DoDomeBattle
# 74 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 75 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case 1, ChampionsTown_DomeTentBattleRoom_EventScript_DefeatedOpponent
# 76 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_ATTENDANT, ChampionsTown_DomeTentBattleRoom_Movement_AttendantJump
# 77 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	playse SE_M_SNORE
# 78 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitse
# 79 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 80 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	championsdometent_getopponentname
# 81 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_DomeTentBattleRoom_Text_WinnerIsOpponent, MSGBOX_DEFAULT
# 82 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_WarpToLobbyLost::
# 83 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 84 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 85 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	warp MAP_CHAMPIONS_TOWN_DOME_TENT_LOBBY, 6, 6
# 86 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitstate
# 87 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 88 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_DoDomeBattle::
# 89 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	closemessage
# 90 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 91 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_DOME
# 92 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitstate
# 93 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	frontier_restorehelditems
# 94 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 95 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	return
# 96 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 97 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_DefeatedOpponent::
# 98 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_ATTENDANT, ChampionsTown_DomeTentBattleRoom_Movement_AttendantJump
# 99 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	playse SE_BANG
# 100 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitse
# 101 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 102 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_DomeTentBattleRoom_Text_WinnerIsPlayer, MSGBOX_DEFAULT
# 103 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	closemessage
# 104 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_IncrementBattleNum::
# 105 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 106 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 107 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 108 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 109 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case 3, ChampionsTown_DomeTentBattleRoom_EventScript_WarpToLobbyWon
# 110 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_OPPONENT, ChampionsTown_DomeTentBattleRoom_Movement_OpponentExit
# 111 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 112 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	removeobject LOCALID_CHAMPIONS_DOME_TENT_BATTLE_OPPONENT
# 113 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_ATTENDANT, ChampionsTown_DomeTentBattleRoom_Movement_AttendantApproachPlayer
# 114 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 115 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_PLAYER, ChampionsTown_DomeTentBattleRoom_Movement_PlayerFaceAttendant
# 116 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 117 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_DomeTentBattleRoom_Text_MonsWillBeRestored, MSGBOX_DEFAULT
# 118 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 119 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	special SavePlayerParty
# 120 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 121 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 122 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitfanfare
# 123 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 124 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_AskContinueChallenge::
# 125 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 126 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 1, ChampionsTown_DomeTentBattleRoom_EventScript_ReadyForSemifinal
# 127 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 2, ChampionsTown_DomeTentBattleRoom_EventScript_ReadyForFinal
# 128 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 129 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 130 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case 0, ChampionsTown_DomeTentBattleRoom_EventScript_ContinueChallenge
# 131 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case 1, ChampionsTown_DomeTentBattleRoom_EventScript_AskPauseChallenge
# 132 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case 2, ChampionsTown_DomeTentBattleRoom_EventScript_AskRetireChallenge
# 133 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 134 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_AskPauseChallenge::
# 135 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	msgbox ChampionsTown_DomeTentBattleRoom_Text_SaveAndShutDown, MSGBOX_YESNO
# 136 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 137 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case NO, ChampionsTown_DomeTentBattleRoom_EventScript_AskContinueChallenge
# 138 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case YES, ChampionsTown_DomeTentBattleRoom_EventScript_PauseChallenge
# 139 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, ChampionsTown_DomeTentBattleRoom_EventScript_AskContinueChallenge
# 140 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 141 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_AskRetireChallenge::
# 142 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	message ChampionsTown_DomeTentBattleRoom_Text_RetireFromChallenge
# 143 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmessage
# 144 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 145 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case 1, ChampionsTown_DomeTentBattleRoom_EventScript_AskContinueChallenge
# 147 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case 0, ChampionsTown_DomeTentBattleRoom_EventScript_WarpToLobbyLost
# 148 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, ChampionsTown_DomeTentBattleRoom_EventScript_AskContinueChallenge
# 149 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 150 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_ContinueChallenge::
# 151 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	closemessage
# 152 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_ATTENDANT, ChampionsTown_DomeTentBattleRoom_Movement_AttendantReturnToPos
# 153 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 154 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_PLAYER, ChampionsTown_DomeTentBattleRoom_Movement_PlayerFaceBattle
# 155 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 156 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	goto ChampionsTown_DomeTentBattleRoom_EventScript_NextOpponentEnter
# 157 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitstate
# 158 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 159 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_WarpToLobbyWon::
# 160 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	delay 60
# 161 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 162 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 163 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	warp MAP_CHAMPIONS_TOWN_DOME_TENT_LOBBY, 6, 6
# 164 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitstate
# 165 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 166 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_ReadyForSemifinal::
# 167 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	message ChampionsTown_DomeTentBattleRoom_Text_ReadyForSemifinal
# 168 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmessage
# 169 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	return
# 170 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 171 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_ReadyForFinal::
# 172 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	message ChampionsTown_DomeTentBattleRoom_Text_ReadyForFinal
# 173 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmessage
# 174 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	return
# 175 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 176 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_PauseChallenge::
# 177 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	message ChampionsTown_DomeTentBattleRoom_Text_SavingPleaseWait
# 178 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmessage
# 179 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	championsdometent_save CHALLENGE_STATUS_PAUSED
# 180 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	playse SE_SAVE
# 181 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitse
# 182 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 183 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	frontier_reset
# 184 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	end
# 185 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 186 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_ResumeChallenge::
# 187 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_ATTENDANT, ChampionsTown_DomeTentBattleRoom_Movement_AttendantApproachPlayer
# 188 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 189 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_BATTLE_PLAYER, ChampionsTown_DomeTentBattleRoom_Movement_PlayerFaceAttendant
# 190 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	waitmovement 0
# 191 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	goto ChampionsTown_DomeTentBattleRoom_EventScript_AskContinueChallenge
# 192 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	end
# 193 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 194 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Movement_PlayerEnter:
# 195 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_up
# 196 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_up
# 197 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_up
# 198 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 199 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	step_end
# 200 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 201 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Movement_PlayerFaceBattle:
# 202 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 203 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	step_end
# 204 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 205 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Movement_PlayerFaceAttendant:
# 206 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 207 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	step_end
# 208 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 209 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Movement_OpponentEnter:
# 210 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_down
# 211 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_down
# 212 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_down
# 213 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_down
# 214 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 215 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	step_end
# 216 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 217 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Movement_OpponentExit:
# 218 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_up
# 219 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_up
# 220 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_up
# 221 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_up
# 222 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	step_end
# 223 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 224 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Movement_AttendantJump:
# 225 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 226 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	jump_in_place_down
# 227 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	step_end
# 228 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 229 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Movement_AttendantApproachPlayer:
# 230 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_down
# 231 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_down
# 232 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_down
# 233 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 234 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	step_end
# 235 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 236 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Movement_AttendantReturnToPos:
# 237 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_up
# 238 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_up
# 239 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_up
# 240 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 241 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	step_end
# 242 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 243 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_OnWarp:
# 244 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ChampionsTown_DomeTentBattleRoom_EventScript_SetUpObjects
# 245 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.2byte 0
# 246 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 247 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_EventScript_SetUpObjects::
# 248 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_CHAMPIONS_TOWN_DOME_TENT_BATTLE_ROOM
# 249 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_CHAMPIONS_DOME_TENT_BATTLE_PLAYER, MAP_CHAMPIONS_TOWN_DOME_TENT_BATTLE_ROOM
# 250 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	removeobject LOCALID_CHAMPIONS_DOME_TENT_BATTLE_OPPONENT
# 251 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 252 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	end
# 253 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 254 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Text_RoundOf8Begin:
# 255 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "ROUND OF 8!\p"
# 256 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "Win this match to reach the\n"
# 257 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "SEMIFINAL!$"
# 258 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 259 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Text_SemifinalBegin:
# 260 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "SEMIFINAL!\p"
# 261 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "This opponent fought their way\n"
# 262 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "through the other side of the\l"
# 263 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "bracket to be here. Win, and it's\l"
# 264 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "on to the FINAL!$"
# 265 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 266 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Text_FinalBegin:
# 267 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "FINAL!\p"
# 268 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "This is it - the last opponent\n"
# 269 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "standing between you and the\l"
# 270 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "CHAMPIONS DOME TENT prize!$"
# 271 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 272 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Text_WinnerIsPlayer:
# 273 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "And the winner is… {PLAYER}!$"
# 274 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 275 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Text_WinnerIsOpponent:
# 276 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "And the winner is… {STR_VAR_1}!$"
# 277 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 278 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Text_MonsWillBeRestored:
# 279 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "Your POKéMON will be restored to\n"
# 280 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "full health.$"
# 281 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 282 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Text_ReadyForSemifinal:
# 283 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "Are you ready to move on to the\n"
# 284 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "SEMIFINAL?$"
# 285 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 286 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Text_ReadyForFinal:
# 287 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "Are you ready to move on to the\n"
# 288 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "FINAL?$"
# 289 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 290 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Text_SaveAndShutDown:
# 291 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "Would you like to save your progress\n"
# 292 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "and take a break?$"
# 293 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 294 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Text_RetireFromChallenge:
# 295 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "Are you sure you want to retire from\n"
# 296 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "the challenge?$"
# 297 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"

# 298 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
ChampionsTown_DomeTentBattleRoom_Text_SavingPleaseWait:
# 299 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "Saving…\n"
# 300 "data/maps/ChampionsTown_DomeTentBattleRoom/scripts.pory"
	.string "Please wait.$"
