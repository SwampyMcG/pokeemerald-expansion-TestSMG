# 1 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 2 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_MapScripts::
# 3 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChampionsTown_DomeTentLobby_OnFrame
# 4 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.byte 0
# 5 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 6 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_OnFrame:
# 7 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, ChampionsTown_DomeTentLobby_EventScript_GetChallengeStatus
# 8 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, ChampionsTown_DomeTentLobby_EventScript_QuitWithoutSaving
# 9 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, ChampionsTown_DomeTentLobby_EventScript_ResumeChallenge
# 10 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, ChampionsTown_DomeTentLobby_EventScript_WonChallenge
# 11 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, ChampionsTown_DomeTentLobby_EventScript_LostChallenge
# 12 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.2byte 0
# 13 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 14 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_GetChallengeStatus::
# 15 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_getstatus
# 16 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	end
# 17 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 18 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_QuitWithoutSaving::
# 19 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	lockall
# 20 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 21 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	closemessage
# 22 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 23 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 24 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 25 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	releaseall
# 26 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	end
# 27 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 28 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_WonChallenge::
# 29 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	lockall
# 30 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_WonTheFinal, MSGBOX_DEFAULT
# 31 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	message ChampionsTown_DomeTentLobby_Text_WaitWhileSaveGame
# 32 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitmessage
# 33 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	championsdometent_setrandomprize
# 34 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 35 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	championsdometent_save 0
# 36 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	playse SE_SAVE
# 37 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitse
# 38 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 39 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_GivePrize::
# 40 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_PresentYouWithPrize, MSGBOX_DEFAULT
# 41 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	championsdometent_giveprize
# 42 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	case FALSE, ChampionsTown_DomeTentLobby_EventScript_NoRoomForPrize
# 44 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 45 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	message ChampionsTown_DomeTentLobby_Text_ReceivedPrize
# 46 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitmessage
# 47 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 48 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitfanfare
# 49 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 50 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	closemessage
# 51 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 52 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	releaseall
# 53 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	end
# 54 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 55 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_NoRoomForPrize::
# 56 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_BagFullReturnForPrize, MSGBOX_DEFAULT
# 57 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitmessage
# 58 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	closemessage
# 59 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 60 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	releaseall
# 61 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	end
# 62 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 63 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_PrizeWaiting::
# 64 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	lockall
# 65 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_WonTheFinal, MSGBOX_DEFAULT
# 66 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	goto ChampionsTown_DomeTentLobby_EventScript_GivePrize
# 67 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	end
# 68 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 69 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_LostChallenge::
# 70 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	lockall
# 71 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	message ChampionsTown_DomeTentLobby_Text_ThankYouWaitWhileSaving
# 72 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitmessage
# 73 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 74 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	championsdometent_save 0
# 75 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	playse SE_SAVE
# 76 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitse
# 77 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 78 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	closemessage
# 79 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 80 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	releaseall
# 81 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	end
# 82 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 83 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_ResumeChallenge::
# 84 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	lockall
# 85 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	message ChampionsTown_DomeTentLobby_Text_LookingForwardToArrival
# 86 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitmessage
# 87 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	championsdometent_save CHALLENGE_STATUS_SAVING
# 88 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	playse SE_SAVE
# 89 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitse
# 90 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 91 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 92 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	goto ChampionsTown_DomeTentLobby_EventScript_EnterChallenge
# 93 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 94 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_Attendant::
# 95 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	lock
# 96 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	faceplayer
# 97 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	championsdometent_getprize
# 98 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	goto_if_ne VAR_RESULT, ITEM_NONE, ChampionsTown_DomeTentLobby_EventScript_PrizeWaiting
# 99 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	special SavePlayerParty
# 100 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_WelcomeExplain, MSGBOX_DEFAULT
# 101 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_AskEnterChallenge::
# 102 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	message ChampionsTown_DomeTentLobby_Text_TakeChallenge
# 103 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitmessage
# 104 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 105 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	case 0, ChampionsTown_DomeTentLobby_EventScript_TryEnterChallenge
# 107 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	case 1, ChampionsTown_DomeTentLobby_EventScript_ExplainChallenge
# 108 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	case 2, ChampionsTown_DomeTentLobby_EventScript_CancelChallenge
# 109 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	case MULTI_B_PRESSED, ChampionsTown_DomeTentLobby_EventScript_CancelChallenge
# 110 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 111 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_TryEnterChallenge::
# 112 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 113 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 114 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_RESULT, 2
# 115 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_checkineligible
# 116 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, ChampionsTown_DomeTentLobby_EventScript_NotEnoughValidMons
# 117 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 118 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 119 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 120 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_0x8004, 1
# 121 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 122 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 123 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, ChampionsTown_DomeTentLobby_EventScript_LoadPartyCancelChallenge
# 124 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 125 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	switch VAR_RESULT
# 126 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	case NO, ChampionsTown_DomeTentLobby_EventScript_LoadPartyCancelChallenge
# 127 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	case YES, ChampionsTown_DomeTentLobby_EventScript_SaveBeforeChallenge
# 128 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	case MULTI_B_PRESSED, ChampionsTown_DomeTentLobby_EventScript_LoadPartyCancelChallenge
# 129 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 130 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_SaveBeforeChallenge::
# 131 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 132 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 133 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	championsdometent_init
# 134 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	championsdometent_generatebracket
# 135 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 136 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 137 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	special LoadPlayerParty
# 138 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	closemessage
# 139 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	delay 2
# 140 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 141 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 142 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, ChampionsTown_DomeTentLobby_EventScript_CancelChallengeSaveFailed
# 143 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_EnterChallenge::
# 144 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	special SavePlayerParty
# 145 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 146 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_GuideYouToBattleTent, MSGBOX_DEFAULT
# 147 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	closemessage
# 148 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	call ChampionsTown_DomeTentLobby_EventScript_WalkToDoor
# 149 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	warp MAP_CHAMPIONS_TOWN_DOME_TENT_CORRIDOR, 2, 7
# 150 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 151 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitstate
# 152 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	end
# 153 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 154 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_ExplainChallenge::
# 155 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_ExplainDomeTent, MSGBOX_DEFAULT
# 156 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	goto ChampionsTown_DomeTentLobby_EventScript_AskEnterChallenge
# 157 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 158 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_NotEnoughValidMons::
# 159 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	case FRONTIER_LVL_50, ChampionsTown_DomeTentLobby_EventScript_NotEnoughValidMonsLv50
# 161 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, ChampionsTown_DomeTentLobby_EventScript_NotEnoughValidMonsLvOpen
# 162 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_NotEnoughValidMonsLv50::
# 163 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 164 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	goto ChampionsTown_DomeTentLobby_EventScript_EndCancelChallenge
# 165 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 166 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_NotEnoughValidMonsLvOpen::
# 167 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 168 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	goto ChampionsTown_DomeTentLobby_EventScript_EndCancelChallenge
# 169 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 170 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_CancelChallengeSaveFailed::
# 171 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 172 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	goto ChampionsTown_DomeTentLobby_EventScript_CancelChallenge
# 173 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 174 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_LoadPartyCancelChallenge::
# 175 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	special LoadPlayerParty
# 176 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_CancelChallenge::
# 177 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	msgbox ChampionsTown_DomeTentLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
# 178 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_EndCancelChallenge::
# 179 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	release
# 180 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	end
# 181 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 182 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_EventScript_WalkToDoor::
# 183 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_ATTENDANT, ChampionsTown_DomeTentLobby_Movement_AttendantWalkToDoor
# 184 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, ChampionsTown_DomeTentLobby_Movement_PlayerWalkToDoor
# 185 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitmovement 0
# 186 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	opendoor 6, 1
# 187 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitdooranim
# 188 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_ATTENDANT, ChampionsTown_DomeTentLobby_Movement_AttendantEnterDoor
# 189 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, ChampionsTown_DomeTentLobby_Movement_PlayerEnterDoor
# 190 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitmovement 0
# 191 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	closedoor 6, 1
# 192 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	waitdooranim
# 193 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	return
# 194 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 195 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Movement_AttendantWalkToDoor:
# 196 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	walk_up
# 197 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	walk_up
# 198 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	walk_up
# 199 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	step_end
# 200 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 201 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Movement_AttendantEnterDoor:
# 202 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	walk_up
# 203 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	set_invisible
# 204 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	step_end
# 205 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 206 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Movement_PlayerWalkToDoor:
# 207 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	walk_up
# 208 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	walk_up
# 209 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	walk_up
# 210 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	step_end
# 211 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 212 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Movement_PlayerEnterDoor:
# 213 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	walk_up
# 214 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	walk_up
# 215 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	set_invisible
# 216 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	step_end
# 217 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 218 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_WelcomeExplain:
# 219 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Welcome to the CHAMPIONS DOME TENT!\p"
# 220 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "This is a bite-sized taste of the\n"
# 221 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "BATTLE DOME - a tiny 8-TRAINER\l"
# 222 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "bracket. You'll only ever fight\l"
# 223 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "three matches: the Round of 8, the\l"
# 224 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "SEMIFINAL, and the FINAL.\p"
# 225 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "The rest of the bracket sorts itself\n"
# 226 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "out behind the scenes!$"
# 227 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 228 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_ExplainDomeTent:
# 229 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Bring three POKéMON.\p"
# 230 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Win three matches in a row and the\n"
# 231 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "bracket - and a prize - are yours!$"
# 232 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 233 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_TakeChallenge:
# 234 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Will you take the challenge?$"
# 235 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 236 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_SelectThreeMons:
# 237 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Select the three POKéMON you'll\n"
# 238 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "bring into the bracket.$"
# 239 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 240 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_SaveBeforeChallenge:
# 241 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "The challenge will begin shortly.\p"
# 242 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Would you like to save before you\n"
# 243 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "begin?$"
# 244 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 245 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_GuideYouToBattleTent:
# 246 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Right this way!$"
# 247 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 248 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_AwaitAnotherChallenge:
# 249 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "We'll be awaiting your challenge!$"
# 250 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 251 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_AwaitAnotherChallenge2:
# 252 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "We'll be awaiting your next\n"
# 253 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "challenge!$"
# 254 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 255 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_NotEnoughValidMonsLv50:
# 256 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "You need three POKéMON of Lv. 50\n"
# 257 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "or lower, none identical, to enter.$"
# 258 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 259 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_NotEnoughValidMonsLvOpen:
# 260 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "You need three POKéMON, none\n"
# 261 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "identical, to enter.$"
# 262 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 263 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_DidntSaveBeforeQuitting:
# 264 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "It looks like you didn't save before\n"
# 265 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "you quit last time.$"
# 266 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 267 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_WonTheFinal:
# 268 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Congratulations!\p"
# 269 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "You won the FINAL and swept the\n"
# 270 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "whole bracket!$"
# 271 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 272 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_WaitWhileSaveGame:
# 273 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Please wait while I save the game…$"
# 274 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 275 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_PresentYouWithPrize:
# 276 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "As proof of your victory, please\n"
# 277 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "take this.$"
# 278 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 279 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_ReceivedPrize:
# 280 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "{PLAYER} received the prize!$"
# 281 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 282 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_BagFullReturnForPrize:
# 283 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Oh? Your Bag is full.\p"
# 284 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Please come back for your prize\n"
# 285 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "once you've made room.$"
# 286 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 287 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_ThankYouWaitWhileSaving:
# 288 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Thank you for competing!\p"
# 289 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "Please wait while I save the game…$"
# 290 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"

# 291 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
ChampionsTown_DomeTentLobby_Text_LookingForwardToArrival:
# 292 "data/maps/ChampionsTown_DomeTentLobby/scripts.pory"
	.string "We look forward to your arrival!$"
