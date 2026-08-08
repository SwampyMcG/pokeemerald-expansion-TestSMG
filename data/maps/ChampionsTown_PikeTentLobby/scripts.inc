# 1 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 2 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_MapScripts::
# 3 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChampionsTown_PikeTentLobby_OnFrame
# 4 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.byte 0
# 5 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 6 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_OnFrame:
# 7 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, ChampionsTown_PikeTentLobby_EventScript_GetChallengeStatus
# 8 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, ChampionsTown_PikeTentLobby_EventScript_QuitWithoutSaving
# 9 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, ChampionsTown_PikeTentLobby_EventScript_ResumeChallenge
# 10 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, ChampionsTown_PikeTentLobby_EventScript_WonChallenge
# 11 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, ChampionsTown_PikeTentLobby_EventScript_LostChallenge
# 12 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.2byte 0
# 13 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 14 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_GetChallengeStatus::
# 15 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_getstatus
# 16 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	end
# 17 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 18 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_QuitWithoutSaving::
# 19 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	lockall
# 20 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 21 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	closemessage
# 22 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 23 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 24 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 25 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	releaseall
# 26 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	end
# 27 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 28 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_WonChallenge::
# 29 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	lockall
# 30 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_ClearedTheCorridor, MSGBOX_DEFAULT
# 31 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	message ChampionsTown_PikeTentLobby_Text_WaitWhileSaveGame
# 32 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitmessage
# 33 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	championspiketent_setrandomprize
# 34 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 35 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	championspiketent_save 0
# 36 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	playse SE_SAVE
# 37 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitse
# 38 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 39 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_GivePrize::
# 40 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_PresentYouWithPrize, MSGBOX_DEFAULT
# 41 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	championspiketent_giveprize
# 42 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	case FALSE, ChampionsTown_PikeTentLobby_EventScript_NoRoomForPrize
# 44 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 45 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	message ChampionsTown_PikeTentLobby_Text_ReceivedPrize
# 46 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitmessage
# 47 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 48 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitfanfare
# 49 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 50 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	closemessage
# 51 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 52 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	releaseall
# 53 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	end
# 54 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 55 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_NoRoomForPrize::
# 56 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_BagFullReturnForPrize, MSGBOX_DEFAULT
# 57 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitmessage
# 58 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	closemessage
# 59 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 60 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	releaseall
# 61 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	end
# 62 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 63 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_PrizeWaiting::
# 64 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	lockall
# 65 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_ClearedTheCorridor, MSGBOX_DEFAULT
# 66 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	goto ChampionsTown_PikeTentLobby_EventScript_GivePrize
# 67 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	end
# 68 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 69 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_LostChallenge::
# 70 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	lockall
# 71 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	message ChampionsTown_PikeTentLobby_Text_ThankYouWaitWhileSaving
# 72 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitmessage
# 73 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 74 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	championspiketent_save 0
# 75 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	playse SE_SAVE
# 76 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitse
# 77 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 78 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	closemessage
# 79 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 80 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	releaseall
# 81 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	end
# 82 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 83 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_ResumeChallenge::
# 84 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	lockall
# 85 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	message ChampionsTown_PikeTentLobby_Text_LookingForwardToArrival
# 86 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitmessage
# 87 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	championspiketent_save CHALLENGE_STATUS_SAVING
# 88 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	playse SE_SAVE
# 89 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitse
# 90 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 91 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 92 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	goto ChampionsTown_PikeTentLobby_EventScript_EnterChallenge
# 93 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 94 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_Attendant::
# 95 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	lock
# 96 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	faceplayer
# 97 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	championspiketent_getprize
# 98 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	goto_if_ne VAR_RESULT, ITEM_NONE, ChampionsTown_PikeTentLobby_EventScript_PrizeWaiting
# 99 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	special SavePlayerParty
# 100 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_WelcomeExplain, MSGBOX_DEFAULT
# 101 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_AskEnterChallenge::
# 102 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	message ChampionsTown_PikeTentLobby_Text_TakeChallenge
# 103 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitmessage
# 104 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 105 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	case 0, ChampionsTown_PikeTentLobby_EventScript_TryEnterChallenge
# 107 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	case 1, ChampionsTown_PikeTentLobby_EventScript_ExplainChallenge
# 108 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	case 2, ChampionsTown_PikeTentLobby_EventScript_CancelChallenge
# 109 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	case MULTI_B_PRESSED, ChampionsTown_PikeTentLobby_EventScript_CancelChallenge
# 110 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 111 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_TryEnterChallenge::
# 112 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PIKE
# 113 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 114 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_RESULT, 2
# 115 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_checkineligible
# 116 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, ChampionsTown_PikeTentLobby_EventScript_NotEnoughValidMons
# 117 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 118 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 119 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 120 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_0x8004, 1
# 121 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 122 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 123 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, ChampionsTown_PikeTentLobby_EventScript_LoadPartyCancelChallenge
# 124 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 125 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	switch VAR_RESULT
# 126 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	case NO, ChampionsTown_PikeTentLobby_EventScript_LoadPartyCancelChallenge
# 127 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	case YES, ChampionsTown_PikeTentLobby_EventScript_SaveBeforeChallenge
# 128 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	case MULTI_B_PRESSED, ChampionsTown_PikeTentLobby_EventScript_LoadPartyCancelChallenge
# 129 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 130 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_SaveBeforeChallenge::
# 131 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 132 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 133 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	championspiketent_init
# 134 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 135 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 136 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	special LoadPlayerParty
# 137 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	closemessage
# 138 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	delay 2
# 139 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 140 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 141 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, ChampionsTown_PikeTentLobby_EventScript_CancelChallengeSaveFailed
# 142 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_EnterChallenge::
# 143 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	special SavePlayerParty
# 144 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 145 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_GuideYouToBattleTent, MSGBOX_DEFAULT
# 146 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	closemessage
# 147 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	call ChampionsTown_PikeTentLobby_EventScript_WalkToDoor
# 148 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	warp MAP_CHAMPIONS_TOWN_PIKE_TENT_CORRIDOR, 2, 7
# 149 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 150 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitstate
# 151 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	end
# 152 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 153 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_ExplainChallenge::
# 154 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_ExplainPikeTent, MSGBOX_DEFAULT
# 155 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	goto ChampionsTown_PikeTentLobby_EventScript_AskEnterChallenge
# 156 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 157 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_NotEnoughValidMons::
# 158 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	case FRONTIER_LVL_50, ChampionsTown_PikeTentLobby_EventScript_NotEnoughValidMonsLv50
# 160 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, ChampionsTown_PikeTentLobby_EventScript_NotEnoughValidMonsLvOpen
# 161 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_NotEnoughValidMonsLv50::
# 162 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 163 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	goto ChampionsTown_PikeTentLobby_EventScript_EndCancelChallenge
# 164 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 165 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_NotEnoughValidMonsLvOpen::
# 166 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 167 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	goto ChampionsTown_PikeTentLobby_EventScript_EndCancelChallenge
# 168 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 169 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_CancelChallengeSaveFailed::
# 170 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 171 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	goto ChampionsTown_PikeTentLobby_EventScript_CancelChallenge
# 172 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 173 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_LoadPartyCancelChallenge::
# 174 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	special LoadPlayerParty
# 175 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_CancelChallenge::
# 176 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	msgbox ChampionsTown_PikeTentLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
# 177 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_EndCancelChallenge::
# 178 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	release
# 179 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	end
# 180 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 181 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_EventScript_WalkToDoor::
# 182 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_ATTENDANT, ChampionsTown_PikeTentLobby_Movement_AttendantWalkToDoor
# 183 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, ChampionsTown_PikeTentLobby_Movement_PlayerWalkToDoor
# 184 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitmovement 0
# 185 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	opendoor 6, 1
# 186 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitdooranim
# 187 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PIKE_TENT_ATTENDANT, ChampionsTown_PikeTentLobby_Movement_AttendantEnterDoor
# 188 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, ChampionsTown_PikeTentLobby_Movement_PlayerEnterDoor
# 189 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitmovement 0
# 190 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	closedoor 6, 1
# 191 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	waitdooranim
# 192 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	return
# 193 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 194 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Movement_AttendantWalkToDoor:
# 195 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	walk_up
# 196 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	walk_up
# 197 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	walk_up
# 198 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	step_end
# 199 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 200 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Movement_AttendantEnterDoor:
# 201 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	walk_up
# 202 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	set_invisible
# 203 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	step_end
# 204 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 205 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Movement_PlayerWalkToDoor:
# 206 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	walk_up
# 207 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	walk_up
# 208 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	walk_up
# 209 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	step_end
# 210 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 211 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Movement_PlayerEnterDoor:
# 212 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	walk_up
# 213 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	walk_up
# 214 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	set_invisible
# 215 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	step_end
# 216 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 217 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_WelcomeExplain:
# 218 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Welcome to the CHAMPIONS PIKE TENT!\p"
# 219 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "A short corridor, three stops.\p"
# 220 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Two of them are straight battles.\n"
# 221 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "The other is a bit of a gamble -\l"
# 222 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "you might find treasure, or you\l"
# 223 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "might walk away with a curse!$"
# 224 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 225 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_ExplainPikeTent:
# 226 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Bring three POKéMON.\p"
# 227 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Make it through all three stops and\n"
# 228 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "a prize is yours!$"
# 229 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 230 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_TakeChallenge:
# 231 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Will you take the challenge?$"
# 232 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 233 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_SelectThreeMons:
# 234 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Select the three POKéMON you'll\n"
# 235 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "bring into the corridor.$"
# 236 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 237 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_SaveBeforeChallenge:
# 238 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "The challenge will begin shortly.\p"
# 239 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Would you like to save before you\n"
# 240 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "begin?$"
# 241 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 242 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_GuideYouToBattleTent:
# 243 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Right this way!$"
# 244 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 245 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_AwaitAnotherChallenge:
# 246 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "We'll be awaiting your challenge!$"
# 247 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 248 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_AwaitAnotherChallenge2:
# 249 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "We'll be awaiting your next\n"
# 250 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "challenge!$"
# 251 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 252 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_NotEnoughValidMonsLv50:
# 253 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "You need three POKéMON of Lv. 50\n"
# 254 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "or lower, none identical, to enter.$"
# 255 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 256 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_NotEnoughValidMonsLvOpen:
# 257 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "You need three POKéMON, none\n"
# 258 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "identical, to enter.$"
# 259 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 260 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_DidntSaveBeforeQuitting:
# 261 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "It looks like you didn't save before\n"
# 262 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "you quit last time.$"
# 263 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 264 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_ClearedTheCorridor:
# 265 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Congratulations!\p"
# 266 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "You made it through the whole\n"
# 267 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "corridor!$"
# 268 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 269 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_WaitWhileSaveGame:
# 270 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Please wait while I save the game…$"
# 271 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 272 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_PresentYouWithPrize:
# 273 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "As proof of your victory, please\n"
# 274 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "take this.$"
# 275 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 276 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_ReceivedPrize:
# 277 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "{PLAYER} received the prize!$"
# 278 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 279 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_BagFullReturnForPrize:
# 280 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Oh? Your Bag is full.\p"
# 281 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Please come back for your prize\n"
# 282 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "once you've made room.$"
# 283 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 284 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_ThankYouWaitWhileSaving:
# 285 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Thank you for competing!\p"
# 286 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "Please wait while I save the game…$"
# 287 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"

# 288 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
ChampionsTown_PikeTentLobby_Text_LookingForwardToArrival:
# 289 "data/maps/ChampionsTown_PikeTentLobby/scripts.pory"
	.string "We look forward to your arrival!$"
