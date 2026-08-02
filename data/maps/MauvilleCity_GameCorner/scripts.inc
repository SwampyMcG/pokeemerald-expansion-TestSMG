# 1 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.set LOCALID_BOUNCER, 24
# 2 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 3 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_MapScripts::
# 4 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerId_Onframe
# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.byte 0
# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	@ Game Corner prices
# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_DOUBLE_TEAM_COINS, 1500
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_PSYCHIC_COINS, 3500
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_FLAMETHROWER_COINS, 4000
# 11 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_THUNDERBOLT_COINS, 4000
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_ICE_BEAM_COINS, 4000
# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set DOLL_COINS, 1000
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set RARECANDY_COINS, 4000
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set SUNSTONE_COINS, 2000
# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set MOONSTONE_COINS, 2000
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set FIRESTONE_COINS, 2000
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set THUNDERSTONE_COINS, 2000
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set WATERSTONE_COINS, 2000
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set LEAFSTONE_COINS, 2000
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set CHOICEBAND_COINS, 4500
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set BRIGHTPOWDER_COINS, 4500
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_50,  1000
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_500, 10000
# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"
TrainerId_Onframe:
# 28 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.if GAME_CORNER_VAR_ID_CHECK != 0
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	map_script_2 GAME_CORNER_VAR_ID_CHECK, 0, BouncerCheck
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.endif
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.2byte 0
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BouncerCheck::
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Common_Movement_WalkInPlaceFasterLeft
# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_PIN
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Common_Movement_ExclamationMark
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 40 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Common_Movement_Delay48
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 42 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Movement_Bouncer_Approach
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bouncer1, MSGBOX_DEFAULT
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_ID_CHECK, 1
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Movement_Bouncer_Leave
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Movement_Bouncer_Approach:
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_left
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_left
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	step_end	
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Movement_Bouncer_Leave:
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_right
# 59 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_right
# 60 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_in_place_faster_left
# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	step_end		
# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Blackjack::
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_BlackJack, MSGBOX_YESNO
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelBJ
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartBlackJack
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 78 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Derby::
# 79 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 80 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby, MSGBOX_YESNO
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 84 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelBJ
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_PEWTER, FALSE
# 86 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartDerby
# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CheckWinnings::
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq GAME_CORNER_VAR_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_CancelVF::
# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_CancelBJ::
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_NoWin::
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Snake::
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Onix_Not_Enough
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Snake, MSGBOX_YESNO
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_NONE, FALSE
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartSnake
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_FlappyBird::
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Butterfree_Not_Enough
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bird, MSGBOX_YESNO
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_NONE, FALSE
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartFlappyBird
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BlockStacker::
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, BlockStacker_Not_Enough
# 159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_BS, MSGBOX_YESNO
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_1, FALSE
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartBlockStacker
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BlockStacker_Not_Enough::
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox BS_Not_Enough, MSGBOX_DEFAULT
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Pinball_Not_Enough::
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_Not_Enough, MSGBOX_DEFAULT
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Onix_Not_Enough::
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Snake_Not_Enough, MSGBOX_DEFAULT
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Juice_Not_Enough::
# 191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Bjuice_Not_Enough, MSGBOX_DEFAULT
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Butterfree_Not_Enough::
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Bird_Not_Enough, MSGBOX_DEFAULT
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Not_Enough::
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Flip_Not_Enough, MSGBOX_DEFAULT
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Pachinko::	
# 206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pachinko, MSGBOX_YESNO
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_ROUTE1, FALSE
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayPachinko
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballMeowth::
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Pinball_Not_Enough
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Meowth, MSGBOX_YESNO
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_POKE_CENTER, FALSE
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayMeowthPinballGame
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 241 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballDiglett::
# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 50, Pinball_Not_Enough
# 248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Diglett, MSGBOX_YESNO
# 250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 50
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_POKE_JUMP, FALSE
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayDiglettPinballGame
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballSeel::
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Pinball_Not_Enough
# 270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Seel, MSGBOX_YESNO
# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_SS_ANNE, FALSE
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlaySeelPinballGame
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate 
# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballGengar::
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, Pinball_Not_Enough
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Gengar, MSGBOX_YESNO
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_POKE_TOWER, FALSE
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayGengarPinballGame
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VoltorbFlip::
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 50, VF_Not_Enough
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VF, MSGBOX_YESNO
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 50
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_OAK, FALSE
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special Special_ViewVoltorbFlip
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VF_Come_Again
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 1, VF_Go_On
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Come_Again::
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox VF_Come_Again_Text, MSGBOX_DEFAULT
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Go_On::
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS	
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VF_Keep_Going, MSGBOX_YESNO
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VF_Cash_Out
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto VF_Loop
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Loop::
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special Special_ViewVoltorbFlip
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VF_Come_Again
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 1, VF_Go_On
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Cash_Out::	
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.if FLIP_VAR_LEVEL != 0
# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar FLIP_VAR_LEVEL, 0
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.endif
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Basic::
# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GachaCommon::
# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartGacha
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_RecieveGachaMonParty
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_RecieveGachaMonPC
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GachaEnd:
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_RecieveGachaMonParty:
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_GachaEnd
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GachaEnd
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_RecieveGachaMonPC:
# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_TransferGachaMonToPC
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TransferGachaMonToPC:
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_TransferredToPC
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GachaEnd
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Great::
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Ultra::
# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Master::
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
# 544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TreeckoDoll
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TorchicDoll
# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MudkipDoll
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TreeckoDoll::
# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TREECKO_DOLL
# 555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 556 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TorchicDoll::
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TORCHIC_DOLL
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MudkipDoll::
# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_MUDKIP_DOLL
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
# 573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
# 574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 575 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll::
# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TREECKO_DOLL
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll::
# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TORCHIC_DOLL
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 603 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll::
# 605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll::
# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForDoll::
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelDollSelect::
# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerNew::
# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerNew2::
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage2
# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage::
# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize	
# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage2::
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize2		
# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize::
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize	
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2::
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize2	
# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TMDoubleTeam
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TMPsychic
# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TMFlamethrower
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TMThunderbolt
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TMIceBeam
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrize::
# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAMECORNER_NEW, FALSE
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_RareCandy
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_SunStone
# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MoonStone
# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChoiceBand
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BrightPowder
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrize2::
# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAMECORNER_NEW2, FALSE
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_FireStone
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ThunderStone
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_WaterStone
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_LeafStone
# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChoiceBand::
# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 8
# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CHOICE_BAND
# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_CHOICE_BAND
# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BrightPowder::
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 9
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BRIGHT_POWDER
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_BRIGHT_POWDER
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize	
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_RareCandy::
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RARE_CANDY
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_RARE_CANDY
# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SunStone::
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SUN_STONE
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_SUN_STONE
# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MoonStone::
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_MOON_STONE
# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_MOON_STONE
# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ThunderStone::
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_THUNDER_STONE
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_THUNDER_STONE
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_WaterStone::
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 6
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_WATER_STONE
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_WATER_STONE
# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_LeafStone::
# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 7
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_LEAF_STONE
# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_LEAF_STONE
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_FireStone::
# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FIRE_STONE
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_FIRE_STONE
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize	
# 785 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmNewPrize::
# 787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//special BufferItemName
# 788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheNewX, MSGBOX_YESNO
# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyRareCandy
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuySunStone
# 793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMoonStone
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyFireStone
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyThunderStone
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_BuyWaterStone
# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_BuyLeafStone
# 798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_BuyChoiceBand
# 799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_BuyBrightPowder
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyBrightPowder::
# 804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, BRIGHTPOWDER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_BRIGHT_POWDER
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins BRIGHTPOWDER_COINS
# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_BRIGHT_POWDER
# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyChoiceBand::
# 817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, CHOICEBAND_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_CHOICE_BAND
# 820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins CHOICEBAND_COINS
# 822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_CHOICE_BAND
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyRareCandy::
# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, RARECANDY_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_RARE_CANDY
# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins RARECANDY_COINS
# 835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_RARE_CANDY
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuySunStone::
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, SUNSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_SUN_STONE
# 846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 847 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins SUNSTONE_COINS
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_SUN_STONE
# 849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMoonStone::
# 856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, MOONSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_MOON_STONE
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins MOONSTONE_COINS
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_MOON_STONE
# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 867 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyFireStone::
# 869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 870 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, FIRESTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 871 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_FIRE_STONE
# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins FIRESTONE_COINS
# 874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_FIRE_STONE
# 875 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 878 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 880 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 881 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyThunderStone::
# 882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, THUNDERSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_THUNDER_STONE
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins THUNDERSTONE_COINS
# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_THUNDER_STONE
# 888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 894 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyWaterStone::
# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 896 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, WATERSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_WATER_STONE
# 898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins WATERSTONE_COINS
# 900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_WATER_STONE
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyLeafStone::
# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, LEAFSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_LEAF_STONE
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins LEAFSTONE_COINS
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_LEAF_STONE
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMDoubleTeam::
# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_DOUBLE_TEAM
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_DOUBLE_TEAM
# 924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 925 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMPsychic::
# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_PSYCHIC
# 929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_PSYCHIC
# 930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 931 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMFlamethrower::
# 933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 934 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_FLAMETHROWER
# 935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_FLAMETHROWER
# 936 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 937 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 938 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMThunderbolt::
# 939 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 940 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_THUNDERBOLT
# 941 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_THUNDERBOLT
# 942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 943 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMIceBeam::
# 945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_ICE_BEAM
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_ICE_BEAM
# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTMPsychic
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTMIceBeam
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam::
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_DOUBLE_TEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_DOUBLE_TEAM
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_DOUBLE_TEAM_COINS
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_DOUBLE_TEAM
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic::
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_PSYCHIC_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_PSYCHIC
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_PSYCHIC_COINS
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_PSYCHIC
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower::
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_FLAMETHROWER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_FLAMETHROWER
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_FLAMETHROWER_COINS
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_FLAMETHROWER
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt::
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_THUNDERBOLT_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_THUNDERBOLT
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_THUNDERBOLT_COINS
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_THUNDERBOLT
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam::
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_ICE_BEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_ICE_BEAM
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_ICE_BEAM_COINS
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_ICE_BEAM
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew::
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2::
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForTM::
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForNew::
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForNew2::
# 1053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1055 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman2::
# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Dealer::
# 1068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Dealer, MSGBOX_NPC
# 1069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1070 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Dealer2::
# 1073 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Dealer2, MSGBOX_NPC
# 1074 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1075 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VFGuy1::
# 1078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VFGuy1, MSGBOX_NPC
# 1079 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1080 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VFGuy2::
# 1083 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VFGuy2, MSGBOX_NPC
# 1084 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1086 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman::
# 1088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 1089 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1090 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1091 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl::
# 1092 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 1096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 1097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 1098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
# 1099 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
# 1100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
# 1101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1102 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
# 1104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 1105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 1106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 1109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1112 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
# 1114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 1115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 1116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 1119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1122 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
# 1124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 1125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 1126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 1129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1132 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 1134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 1135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 1136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1138 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 1140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 1141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1143 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 1145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 1146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1148 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM::
# 1150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 1154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 1155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1157 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 1159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 1161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
# 1162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 1163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 1164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 1165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1168 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanMNormal::
# 1170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 1171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1173 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan::
# 1175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 1178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PachinkoGuy::
# 1182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_PachinkoGuy, MSGBOX_DEFAULT
# 1185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Hiker::
# 1189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Hiker, MSGBOX_DEFAULT
# 1192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1194 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Bouncer::
# 1196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bouncer2, MSGBOX_DEFAULT
# 1199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DerbyLady1::
# 1203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby_1, MSGBOX_DEFAULT
# 1206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DerbyLady2::
# 1210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby_2, MSGBOX_DEFAULT
# 1213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1215 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Fisherman::
# 1217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Fisherman, MSGBOX_DEFAULT
# 1220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gachalady::
# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Gachalady, MSGBOX_DEFAULT
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Employee::
# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Employee, MSGBOX_DEFAULT
# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook::
# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man::
# 1245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 1248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1250 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_JuiceLady::	
# 1252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase2
# 1256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Juice, MSGBOX_YESNO
# 1258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 1260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 10, Juice_Not_Enough
# 1262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 10
# 1263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 1266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_BERRY_JUICE
# 1268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1270 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 1272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 1275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1277 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac::
# 1279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 1282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1284 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman::
# 1286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 1289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1291 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 1293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 1297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1302 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 1304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 1308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1313 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 1315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 1319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1324 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 1326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 1330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1335 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 1337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 1341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1346 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 1348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 1352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 1359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 1363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 1374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1379 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 1381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 1385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1390 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 1392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 1396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1401 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 1403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 1407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1412 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 1414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 1418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1423 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 1425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 1426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1428 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase2::
# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantBuyWithNoCoinCase, MSGBOX_DEFAULT
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"
# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_PachinkoGuy:
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I used to own one of these dusty old\n"
# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "DROPSPIN MACHINES.\p"
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The manual always said 'Use the\n"
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "DIRECTIONAL BUTTONS to TILT and\l"
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "change the DROP SPEED…'\p"
# 1443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I've always wondered what that\n"
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "means.$"
# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Hiker:
# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gah!\n"
# 1448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I blew it all on that ONIX game.\p"
# 1449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to be careful…\p"
# 1450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You only win 2 COINS for\n"
# 1451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "every point in these machines.$"
# 1452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby_1:
# 1454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Looking to bet on the DERBY?\n"
# 1455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We've gone digital!\p"
# 1456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Use one of the tablets\n"
# 1457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in front of the counter.$"	
# 1458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby_2:
# 1460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's not all about CONDITION.\p"
# 1461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "At the end of the day, it's\n"
# 1462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "really all luck.\p"
# 1463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sometimes it's best to just\n"
# 1464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick your favorite!$"	
# 1465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Fisherman:
# 1467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I come here for the food.\p"
# 1468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's no CELADON CAFE…\n"
# 1469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But it'll do.$"		
# 1470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Gachalady:
# 1472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The LOTTERY MACHINES have odds,\n"
# 1473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "but nothing is guaranteed.\p"
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Some machines are better than\n"
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "others, and there are different\l"
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rarities in all of them.\p"
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "New POKéMON are also weighted\n"
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "By your POKéDEX, so be wary.$"	
# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Employee:
# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm on the lookout for cheaters.\n"
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nobody likes a cheater!$"
# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bouncer1:
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need a valid TRAINER ID\n"
# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "to enter the GAME CORNER.\p"
# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Let's see…\p"
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "…\p"
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hmm…\p"
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "…\p"
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Everything looks good here.\n"
# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Enjoy the GAME CORNER!$"	
# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bouncer2:
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Enjoy the GAME CORNER!$"	
# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pachinko:
# 1498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "A DROPSPIN MACHINE!\n"
# 1499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's 3 COINS per BALL.$"
# 1500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
# 1502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some COINS for\n"
# 1503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the games?\p"
# 1504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But you don't have a COIN CASE for\n"
# 1505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "stowing the COINS.$"
# 1506 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
# 1508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for COINS?\p"
# 1509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ¥1000 for 50 COINS.\n"
# 1510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like some?$"
# 1511 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
# 1513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
# 1514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here are your COINS!$"
# 1515 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
# 1517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
# 1518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "enough money…$"
# 1519 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull:
# 1521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 1522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Your COIN CASE is full.$"
# 1523 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
# 1525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need COINS, then?\n"
# 1526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Good luck on your adventure!$"
# 1527 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
# 1529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 1530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your COINS for\n"
# 1531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "prizes here.$"
# 1532 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize:
# 1534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"
# 1535 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX:
# 1537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 1538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"
# 1539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheNewX:
# 1541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 1542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1}?$"
# 1543 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_BlackJack:
# 1545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a BLACKJACK TABLE!\n"
# 1546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Want to play?$"
# 1547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby:
# 1549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's the MAUVILLE DERBY!\n"
# 1550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Want to place a bet?$"	
# 1551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Snake:
# 1553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ONIX!\n"
# 1554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 COINS to play.$"		
# 1555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bird:
# 1557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's FLUTTERFREE!\n"
# 1558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 COINS to play.$"		
# 1559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Meowth:
# 1561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 COINS to play.$"
# 1563 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_BS:
# 1565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's BLOCK BUILDER!\n"
# 1566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 COINS to play.$"
# 1567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Seel:
# 1569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 25 COINS to play.$"
# 1571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Diglett:
# 1573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 50 COINS to play.$"
# 1575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Gengar:
# 1577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\n"
# 1578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 100 COINS to play.$"
# 1579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VF:
# 1581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's VOLTORB FLIP!\n"
# 1582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It costs 50 COINS to play.$"
# 1583 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Come_Again_Text:
# 1585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Too bad.\n"
# 1586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Try again soon!$"
# 1587 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC:
# 1589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
# 1590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 1591 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins:
# 1593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS.$"
# 1594 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
PB_YOU_WON_TEXT:
# 1596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You won\n"
# 1597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} COINS!$"
# 1598 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
PB_Not_Enough:
# 1600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a PINBALL MACHINE!\p"
# 1601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"
# 1602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Snake_Not_Enough:
# 1604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ONIX!\p"
# 1605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"	
# 1606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Bjuice_Not_Enough:
# 1608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS.$"	
# 1609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Bird_Not_Enough:
# 1611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's FLUTTERFREE!\p"
# 1612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"		
# 1613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BS_Not_Enough:
# 1615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's BLOCK BUILDER!\p"
# 1616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"	
# 1617 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Flip_Not_Enough:
# 1619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's VOLTORB FLIP!\p"
# 1620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS…$"
# 1621 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 1623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
# 1624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 1625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 1626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VF_Keep_Going:
# 1628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You've made {STR_VAR_1} COINS.\n"
# 1629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Keep going?$"
# 1630 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo:
# 1632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
# 1633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to save some COINS before\l"
# 1634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "coming back here.$"
# 1635 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
# 1637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 1638 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo:
# 1640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 1641 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 1643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
# 1644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 1645 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
# 1647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
# 1648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the same DOLLS.\p"
# 1649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like one of them?$"
# 1650 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2:
# 1652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 1653 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow:
# 1655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
# 1656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want it, but not right now?$"
# 1657 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative:
# 1659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
# 1660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can have this!$"
# 1661 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot:
# 1663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
# 1664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the jackpot.$"
# 1665 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
# 1667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
# 1668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "you need a COIN CASE.\p"
# 1669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I think the young lady next door\n"
# 1670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "had one. Go see her!$"
# 1671 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
# 1673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
# 1674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is too much for me.\l"
# 1675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here, take some COINS!$"
# 1676 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
# 1678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
# 1679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "everyone.\p"
# 1680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "For me, it's the GAME CORNER.$"
# 1681 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
# 1683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
# 1684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rates.\p"
# 1685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Check your COINS if you're going to\n"
# 1686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick a table.$"
# 1687 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
# 1689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
# 1690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I should get back to work.$"
# 1691 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
# 1693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "COINS are needed to play here\n"
# 1694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in the GAME CORNER.$"
# 1695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	MauvilleCity_GameCorner_Text_Dealer:
# 1697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Some say BLACKJACK is about skill.\n"
# 1698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Others say it's about luck.\p"
# 1699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I say it's about having fun…\n"
# 1700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "and maybe winning big!$"
# 1701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	MauvilleCity_GameCorner_Text_Dealer2:
# 1703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can bet anything divisible\n"
# 1704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "by 10 here.\p"
# 1705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Maybe you should go all in!$"	
# 1706 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VFGuy1:
# 1708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want to play VOLTORB FLIP?\p"
# 1709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to be on the other\n"
# 1710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "side of the table.$"
# 1711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VFGuy2:
# 1713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Try the other side of\n"
# 1714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the table, pal.$"	
# 1715 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
# 1717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
# 1718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's rather demanding.\p"
# 1719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 1720 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
# 1722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three COINS can be used to play\n"
# 1723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the SLOTS.$"
# 1724 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7:
# 1726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
# 1727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "right on “7.”\p"
# 1728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If it stops on “7” during the REEL TIME\n"
# 1729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonus game, you'll receive extra COINS.$"
# 1730 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
# 1732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
# 1733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "about the SLOTS.\p"
# 1734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The more lightning bolts you stock,\n"
# 1735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the more REEL TIME chances you get.\p"
# 1736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In a game with the maximum five\n"
# 1737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "REEL TIME chances…\p"
# 1738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It is possible to receive four regular\n"
# 1739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonuses, then a big bonus.\p"
# 1740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "That would total 660 COINS, but it's\n"
# 1741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "very difficult to get.$"
# 1742 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
# 1744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
# 1745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"
# 1746 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantBuyWithNoCoinCase:
# 1748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh? Looks like you need\n"
# 1749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"
# 1750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Juice:
# 1752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "BERRY JUICE!\n"
# 1753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Just 10 COINS.$"
