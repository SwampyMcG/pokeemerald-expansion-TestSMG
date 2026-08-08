# 1 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"

# 2 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
ChampionsTown_DomeTentCorridor_MapScripts::
# 3 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ChampionsTown_DomeTentCorridor_OnFrame
# 4 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	.byte 0
# 5 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"

# 6 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
ChampionsTown_DomeTentCorridor_OnFrame:
# 7 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ChampionsTown_DomeTentCorridor_EventScript_EnterCorridor
# 8 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	.2byte 0
# 9 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"

# 10 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
ChampionsTown_DomeTentCorridor_EventScript_EnterCorridor::
# 11 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	lockall
# 12 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 13 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_CORRIDOR_ATTENDANT, ChampionsTown_DomeTentCorridor_Movement_WalkToDoor
# 14 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, ChampionsTown_DomeTentCorridor_Movement_WalkToDoor
# 15 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	waitmovement 0
# 16 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	opendoor 2, 1
# 17 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	waitdooranim
# 18 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	applymovement LOCALID_CHAMPIONS_DOME_TENT_CORRIDOR_ATTENDANT, ChampionsTown_DomeTentCorridor_Movement_AttendantEnterDoor
# 19 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, ChampionsTown_DomeTentCorridor_Movement_PlayerEnterDoor
# 20 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	waitmovement 0
# 21 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	closedoor 2, 1
# 22 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	waitdooranim
# 23 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 24 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	warp MAP_CHAMPIONS_TOWN_DOME_TENT_BATTLE_ROOM, 4, 4
# 25 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	waitstate
# 26 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	releaseall
# 27 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	end
# 28 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"

# 29 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
ChampionsTown_DomeTentCorridor_Movement_WalkToDoor:
# 30 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	walk_up
# 31 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	walk_up
# 32 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	walk_up
# 33 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	walk_up
# 34 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	step_end
# 35 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"

# 36 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
ChampionsTown_DomeTentCorridor_Movement_PlayerEnterDoor:
# 37 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	walk_up
# 38 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
ChampionsTown_DomeTentCorridor_Movement_AttendantEnterDoor:
# 39 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	walk_up
# 40 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	set_invisible
# 41 "data/maps/ChampionsTown_DomeTentCorridor/scripts.pory"
	step_end
