# 1 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 2 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_MapScripts::
# 3 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_ReceptionGate_OnFrame
# 4 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_ReceptionGate_OnTransition
# 5 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 7 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_OnTransition:
# 8 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 9 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 10 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 11 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_OnFrame:
# 12 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script_2 VAR_HAS_ENTERED_BATTLE_FRONTIER, 0, BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering
# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.2byte 0
# 14 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 15 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering::
# 16 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lockall
# 17 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
# 18 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 19 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 20 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 21 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_Delay48
# 22 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 23 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 25 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter
# 26 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 27 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ScottScene
# 28 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 30 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ScottScene::
# 31 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 32 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IssueFrontierPass, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 34 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass
# 35 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitfanfare
# 36 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 37 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass, MSGBOX_DEFAULT
# 38 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 39 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 40 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 41 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 42 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	special EnableNationalPokedex
# 43 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 44 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 45 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	giveitem ITEM_COIN_CASE
# 46 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_RECEIVED_COIN_CASE
# 47 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_SYS_FRONTIER_PASS
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	special ShowStarterSelectScreen
# 50 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitstate
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 54 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_WalkInPlaceFasterUp
# 56 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 58 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 59 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 60 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_ExclamationMark
# 61 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 62 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 63 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay, MSGBOX_DEFAULT
# 64 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 65 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, BattleFrontier_ReceptionGate_Movement_GreeterFaceScott
# 66 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott
# 67 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerFaceScott
# 68 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottEnter
# 69 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 70 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere, MSGBOX_DEFAULT
# 71 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 72 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottExit
# 73 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 74 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	removeobject LOCALID_FRONTIER_RECEPTION_SCOTT
# 75 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	releaseall
# 76 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 77 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 78 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter:
# 79 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 80 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 81 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 82 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 83 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 84 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 85 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerFaceScott:
# 86 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 87 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 88 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 89 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 90 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 91 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 92 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 93 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
@ Unused
# 94 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_WalkDown:
# 95 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 96 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 97 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 98 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 99 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottEnter:
# 100 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 101 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 102 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 103 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 104 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 105 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 106 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 107 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 108 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 109 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottExit:
# 110 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_right
# 111 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 112 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 113 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 114 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 115 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 116 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 117 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 118 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 119 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_GreeterFaceScott:
# 120 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 121 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 122 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 123 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 124 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 125 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 126 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 127 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott:
# 128 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 129 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 130 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 131 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 132 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_left
# 133 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 134 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 135 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Greeter::
# 136 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 137 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 138 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 139 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 140 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 141 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 142 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 143 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FacilityGuide::
# 144 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 145 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 146 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFacilities, MSGBOX_DEFAULT
# 147 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 148 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 149 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 150 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout::
# 151 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich2
# 152 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 153 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_RECEPTIONIST
# 154 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	special ShowScrollableMultichoice
# 155 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 156 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_BattleTower
# 157 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_BattleDome
# 158 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePalace
# 159 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_BattleArena
# 160 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_BattleFactory
# 161 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_BattlePike
# 162 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 6, BattleFrontier_ReceptionGate_EventScript_BattlePyramid
# 163 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 7, BattleFrontier_ReceptionGate_EventScript_RankingHall
# 164 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 8, BattleFrontier_ReceptionGate_EventScript_ExchangeCorner
# 165 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 9, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 166 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 167 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 168 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 169 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleTower::
# 170 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleTowerInfo, MSGBOX_DEFAULT
# 171 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 172 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 173 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 174 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleDome::
# 175 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleDomeInfo, MSGBOX_DEFAULT
# 176 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 177 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 178 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 179 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePalace::
# 180 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePalaceInfo, MSGBOX_DEFAULT
# 181 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 182 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 183 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 184 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleArena::
# 185 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleArenaInfo, MSGBOX_DEFAULT
# 186 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 187 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 188 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 189 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleFactory::
# 190 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleFactoryInfo, MSGBOX_DEFAULT
# 191 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 192 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 193 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 194 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePike::
# 195 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePikeInfo, MSGBOX_DEFAULT
# 196 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 197 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 198 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 199 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePyramid::
# 200 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePyramidInfo, MSGBOX_DEFAULT
# 201 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 202 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 203 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 204 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RankingHall::
# 205 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RankingHallInfo, MSGBOX_DEFAULT
# 206 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 207 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 208 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 209 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExchangeCorner::
# 210 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo, MSGBOX_DEFAULT
# 211 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 212 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 213 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 214 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide::
# 215 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 216 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 217 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 218 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 219 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RulesGuide::
# 220 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 221 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 222 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToRules, MSGBOX_DEFAULT
# 223 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 224 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 225 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 226 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout::
# 227 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhat
# 228 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 229 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 15, 0, MULTI_FRONTIER_RULES, FALSE
# 230 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 231 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_LevelMode
# 232 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_Level50
# 233 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_OpenLevel
# 234 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_MonEntry
# 235 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_HoldItems
# 236 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 237 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 238 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 239 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 240 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_LevelMode::
# 241 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_LevelModeInfo, MSGBOX_DEFAULT
# 242 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 243 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 244 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 245 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Level50::
# 246 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_Level50Info, MSGBOX_DEFAULT
# 247 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 248 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 249 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 250 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_OpenLevel::
# 251 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OpenLevelInfo, MSGBOX_DEFAULT
# 252 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 253 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 254 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 255 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_MonEntry::
# 256 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_MonEntryInfo, MSGBOX_DEFAULT
# 257 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 258 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 259 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 260 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_HoldItems::
# 261 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_HoldItemsInfo, MSGBOX_DEFAULT
# 262 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 263 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 264 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 265 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide::
# 266 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 267 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 268 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 269 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 270 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide::
# 271 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 272 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 273 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass, MSGBOX_DEFAULT
# 274 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 275 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 276 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 277 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout::
# 278 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich1
# 279 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 280 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 16, 4, MULTI_FRONTIER_PASS_INFO, FALSE
# 281 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 282 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_Symbols
# 283 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_RecordBattle
# 284 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePoints
# 285 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 286 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 287 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 288 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 289 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Symbols::
# 290 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_SymbolsInfo, MSGBOX_DEFAULT
# 291 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 292 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 293 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 294 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RecordBattle::
# 295 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RecordedBattleInfo, MSGBOX_DEFAULT
# 296 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 297 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 298 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 299 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePoints::
# 300 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePointsInfo, MSGBOX_DEFAULT
# 301 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 302 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 303 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 304 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide::
# 305 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 306 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 307 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 308 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 309 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay:
# 310 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Is it your first time here?\n"
# 311 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Please step this way!$"
# 312 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 313 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier:
# 314 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Welcome to the-!\n"
# 315 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Well... We are still working\p"
# 316 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on the name. Keep calling\n"
# 317 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "it the BATTLE FRONTIER for now$"
# 318 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 319 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IssueFrontierPass:
# 320 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "...\n"
# 321 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Oh! You are here on\p"
# 322 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the Beginner's Program!\n"
# 323 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm sorry. You're the first.\p"
# 324 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Let's see here. You need a \n"
# 325 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Team, POKéDEX, and a FRONTIER PASS.\n"
# 326 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "COINCASE for the games, and some funds$"
# 327 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 328 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass:
# 329 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} obtained\n"
# 330 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the FRONTIER PASS.$"
# 331 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 332 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass:
# 333 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} placed the TRAINER CARD\n"
# 334 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "in the FRONTIER PASS.$"
# 335 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 336 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier:
# 337 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "and that's all! We hope \n" 
# 338 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "you enjoy all that the BATTLE\p"
# 339 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER has to offer!$"
# 340 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 341 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame:
# 342 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "???: Well, if it isn't {PLAYER}{KUN}!\n"
# 343 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You came out here!$"
# 344 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 345 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay:
# 346 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "GUIDE: Oh! MR. McG, sir!\n"
# 347 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Good day to you, sir!$"
# 348 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 349 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere:
# 350 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "McG: It's great to see you here,\n"
# 351 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "it really is!\p"
# 352 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I didn't think your application\n"
# 353 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "was serious. You come here to the\p"
# 354 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "heart of battle, with all of the\n"
# 355 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "pros? Starting from nothing? I\p"
# 356 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I can't say no to an underdog \n"
# 357 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "story. So I cooked this Beginner's\p"
# 358 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Program up. One of the many changes\n"
# 359 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I have been tasked to make here!\p"
# 360 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I never thought I'd be in this\n"
# 361 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "position. No pressure...\p"
# 362 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Anyways, enjoy the sneak peak\n"
# 363 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "to POKéMON: WORKING TITLE.\n"
# 364 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 365 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFacilities:
# 366 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the various facilities\n"
# 367 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "here in the BATTLE FRONTIER.$"
# 368 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 369 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich2:
# 370 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Which would you like to learn about?$"
# 371 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 372 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleTowerInfo:
# 373 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It is the gigantic tower considered\n"
# 374 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "to be the BATTLE FRONTIER's symbol.\p"
# 375 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There are four kinds of BATTLE ROOMS\n"
# 376 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "in the tower for SINGLE, DOUBLE, MULTI,\l"
# 377 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "and LINK MULTI BATTLES.$"
# 378 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 379 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleDomeInfo:
# 380 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE DOME is the large building\n"
# 381 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "shaped like a huge egg.\p"
# 382 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Events named Battle Tourneys are held\n"
# 383 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "in this facility.\p"
# 384 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Battle Tourneys are offered in\n"
# 385 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "two courses--for SINGLE and DOUBLE\l"
# 386 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "BATTLES.$"
# 387 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 388 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePalaceInfo:
# 389 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PALACE is the red building\n"
# 390 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on the right of the BATTLE FRONTIER.\p"
# 391 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There are two kinds of BATTLE HALLS\n"
# 392 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "for SINGLE and DOUBLE BATTLES.$"
# 393 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 394 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleArenaInfo:
# 395 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE ARENA is the dojo-like\n"
# 396 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "building at the center-right of\l"
# 397 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.\p"
# 398 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Set KO Tourney\n"
# 399 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "takes place at the BATTLE ARENA.$"
# 400 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 401 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleFactoryInfo:
# 402 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE FACTORY is the large\n"
# 403 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "building that is the closest to us.\p"
# 404 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Battle Swap\n"
# 405 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "is conducted there.\p"
# 406 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Battle Swap event is offered in\n"
# 407 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "two courses for SINGLE and DOUBLE\l"
# 408 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "BATTLES.$"
# 409 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 410 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePikeInfo:
# 411 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PIKE is the building shaped\n"
# 412 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "like a POKéMON at the center-left of\l"
# 413 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.\p"
# 414 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Battle Choice\n"
# 415 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "is conducted there.$"
# 416 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 417 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePyramidInfo:
# 418 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PYRAMID is the enormous\n"
# 419 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "pyramid.\p"
# 420 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "An event called the Battle Quest\n"
# 421 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "is conducted there.$"
# 422 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 423 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RankingHallInfo:
# 424 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The RANKING HALL is located near\n"
# 425 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE TOWER.\p"
# 426 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There, you may see the most fantastic\n"
# 427 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "records left by the TRAINERS that\l"
# 428 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "took on the many challenges of\l"
# 429 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.$"
# 430 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 431 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo:
# 432 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The EXCHANGE SERVICE CORNER is near\n"
# 433 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE TOWER.\p"
# 434 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Battle Points you have earned in\n"
# 435 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER may be exchanged\l"
# 436 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "for fabulous prizes there.$"
# 437 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 438 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToRules:
# 439 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the basic rules that\n"
# 440 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "are common to all the challenges\l"
# 441 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "offered by the facilities in the BATTLE\l"
# 442 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER.$"
# 443 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 444 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhat:
# 445 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "What would you like to learn about?$"
# 446 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 447 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LevelModeInfo:
# 448 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "All the challenges at the BATTLE\n"
# 449 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER's facilities come in\l"
# 450 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "two courses--Level 50 and Open Level.$"
# 451 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 452 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_Level50Info:
# 453 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Level 50 course is open to POKéMON\n"
# 454 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "up to and including Level 50.\p"
# 455 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Please keep in mind, however, that\n"
# 456 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "no TRAINER you face will have any\l"
# 457 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "POKéMON below Level 50.\p"
# 458 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "This course is the entry level for\n"
# 459 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "battles at the BATTLE FRONTIER.\p"
# 460 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "To begin, we hope you will challenge\n"
# 461 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "this course.$"
# 462 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 463 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OpenLevelInfo:
# 464 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Open Level course places no limit\n"
# 465 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on the levels of POKéMON entering\l"
# 466 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "challenges.\p"
# 467 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The levels of your opponents will\n"
# 468 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "be adjusted to match the levels of\l"
# 469 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "your POKéMON.\p"
# 470 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "However, no TRAINER you face will\n"
# 471 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "have any POKéMON below Level 60.$"
# 472 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 473 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_MonEntryInfo:
# 474 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Virtually any kind of POKéMON may take\n"
# 475 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on the challenges at all facilities.\p"
# 476 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "EGGS and certain kinds of POKéMON,\n"
# 477 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "however, are not permitted.\p"
# 478 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The numbers of POKéMON required for\n"
# 479 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "challenges will depend on the facility.\p"
# 480 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "At all facilities, however, two or more\n"
# 481 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "of the same kind of POKéMON are not\l"
# 482 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "permitted.$"
# 483 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 484 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_HoldItemsInfo:
# 485 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "When entering a challenge at a BATTLE\n"
# 486 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "FRONTIER facility, POKéMON may not\l"
# 487 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "be holding the same kind of item.\p"
# 488 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Please make sure that all POKéMON\n"
# 489 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "entering a challenge are holding\l"
# 490 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "different items.$"
# 491 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 492 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass:
# 493 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the FRONTIER PASS.$"
# 494 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 495 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich1:
# 496 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Which would you like to learn about?$"
# 497 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 498 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_SymbolsInfo:
# 499 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There are seven facilities at\n"
# 500 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE FRONTIER.\p"
# 501 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "TRAINERS who gain recognition for\n"
# 502 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "their abilities may be rewarded with\l"
# 503 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "symbols from each of the facilities.\p"
# 504 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "To earn a symbol, TRAINERS may need\n"
# 505 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "to defeat other TRAINERS in a row,\l"
# 506 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "and may need to win events repeatedly.\p"
# 507 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It's certainly not easy to win symbols.\n"
# 508 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I wish you the best of luck!$"
# 509 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 510 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RecordedBattleInfo:
# 511 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It is possible to record one battle\n"
# 512 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "on your FRONTIER PASS.\p"
# 513 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You may record a battle you had with\n"
# 514 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "a friend or friends.\p"
# 515 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Or you may record a battle conducted\n"
# 516 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "at the BATTLE FRONTIER excluding\l"
# 517 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "matches at the BATTLE PIKE or\l"
# 518 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "the BATTLE PYRAMID.\p"
# 519 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You may choose to record your match\n"
# 520 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "at the end of a battle.$"
# 521 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 522 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePointsInfo:
# 523 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Battle Points are rewards given to\n"
# 524 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "TRAINERS who battled outstandingly\l"
# 525 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "at the BATTLE FRONTIER.\p"
# 526 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "You may trade in your Battle Points\n"
# 527 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "for prizes at the EXCHANGE SERVICE\l"
# 528 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "CORNER.$"
