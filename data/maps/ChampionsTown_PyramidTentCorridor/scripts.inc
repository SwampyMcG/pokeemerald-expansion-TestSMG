# 1 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"

# 2 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
ChampionsTown_PyramidTentCorridor_MapScripts::
# 3 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChampionsTown_PyramidTentCorridor_OnFrame
# 4 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	.byte 0
# 5 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"

# 6 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
ChampionsTown_PyramidTentCorridor_OnFrame:
# 7 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ChampionsTown_PyramidTentCorridor_EventScript_EnterCorridor
# 8 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	.2byte 0
# 9 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"

# 10 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
ChampionsTown_PyramidTentCorridor_EventScript_EnterCorridor::
# 11 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	lockall
# 12 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 13 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	msgbox ChampionsTown_PyramidTentCorridor_Text_DimCorridor, MSGBOX_DEFAULT
# 14 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	waitmessage
# 15 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	randomelement ITEM_POKE_BALL, ITEM_GREAT_BALL, ITEM_POTION, ITEM_SUPER_POTION, ITEM_ESCAPE_ROPE, ITEM_HEART_SCALE, ITEM_STAR_PIECE
# 16 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	giveitem VAR_RESULT
# 17 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_CORRIDOR_ATTENDANT, ChampionsTown_PyramidTentCorridor_Movement_WalkToDoor
# 18 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, ChampionsTown_PyramidTentCorridor_Movement_WalkToDoor
# 19 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	waitmovement 0
# 20 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	opendoor 2, 1
# 21 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	waitdooranim
# 22 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	applymovement LOCALID_CHAMPIONS_PYRAMID_TENT_CORRIDOR_ATTENDANT, ChampionsTown_PyramidTentCorridor_Movement_AttendantEnterDoor
# 23 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, ChampionsTown_PyramidTentCorridor_Movement_PlayerEnterDoor
# 24 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	waitmovement 0
# 25 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	closedoor 2, 1
# 26 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	waitdooranim
# 27 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 28 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	warp MAP_CHAMPIONS_TOWN_PYRAMID_TENT_BATTLE_ROOM, 4, 4
# 29 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	waitstate
# 30 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	releaseall
# 31 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	end
# 32 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"

# 33 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
ChampionsTown_PyramidTentCorridor_Movement_WalkToDoor:
# 34 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	walk_up
# 35 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	walk_up
# 36 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	walk_up
# 37 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	walk_up
# 38 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	step_end
# 39 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"

# 40 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
ChampionsTown_PyramidTentCorridor_Movement_PlayerEnterDoor:
# 41 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	walk_up
# 42 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
ChampionsTown_PyramidTentCorridor_Movement_AttendantEnterDoor:
# 43 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	walk_up
# 44 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	set_invisible
# 45 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	step_end
# 46 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"

# 47 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
ChampionsTown_PyramidTentCorridor_Text_DimCorridor:
# 48 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	.string "The corridor ahead is dim, lit only\n"
# 49 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	.string "by a few flickering torches…\p"
# 50 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	.string "Something catches your eye on the\n"
# 51 "data/maps/ChampionsTown_PyramidTentCorridor/scripts.pory"
	.string "ground as you walk.$"
