# 1 "data/maps/CoastalMeadow/scripts.pory"

# 2 "data/maps/CoastalMeadow/scripts.pory"
CoastalMeadow_MapScripts::
# 3 "data/maps/CoastalMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Meadow_OnTransition
# 4 "data/maps/CoastalMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Meadow_OnFrame
# 5 "data/maps/CoastalMeadow/scripts.pory"
	.byte 0
# 6 "data/maps/CoastalMeadow/scripts.pory"

# 7 "data/maps/CoastalMeadow/scripts.pory"
Meadow_OnTransition:
# 8 "data/maps/CoastalMeadow/scripts.pory"
	end
# 10 "data/maps/CoastalMeadow/scripts.pory"

# 11 "data/maps/CoastalMeadow/scripts.pory"
Meadow_OnFrame:
# 12 "data/maps/CoastalMeadow/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 2, Meadow_EventScript_EnterSafariZone
# 13 "data/maps/CoastalMeadow/scripts.pory"
	.2byte 0
# 14 "data/maps/CoastalMeadow/scripts.pory"

# 15 "data/maps/CoastalMeadow/scripts.pory"
Meadow_EventScript_EnterSafariZone::
# 16 "data/maps/CoastalMeadow/scripts.pory"
	lockall
# 17 "data/maps/CoastalMeadow/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 18 "data/maps/CoastalMeadow/scripts.pory"
	releaseall
# 19 "data/maps/CoastalMeadow/scripts.pory"
	end
# 20 "data/maps/CoastalMeadow/scripts.pory"

# 21 "data/maps/CoastalMeadow/scripts.pory"
Meadow_EventScript_ExitAttendant::
# 22 "data/maps/CoastalMeadow/scripts.pory"
	lock
# 23 "data/maps/CoastalMeadow/scripts.pory"
	faceplayer
# 24 "data/maps/CoastalMeadow/scripts.pory"
	goto_if_unset FLAG_GOOD_LUCK_SAFARI_ZONE, Meadow_EventScript_GoodLuck
# 25 "data/maps/CoastalMeadow/scripts.pory"
	msgbox SafariZone_South_Text_StillHaveTimeExit, MSGBOX_YESNO
# 26 "data/maps/CoastalMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Meadow_EventScript_ExitEarly
# 27 "data/maps/CoastalMeadow/scripts.pory"
	msgbox SafariZone_South_Text_EnjoyTheRestOfYourAdventure, MSGBOX_DEFAULT
# 28 "data/maps/CoastalMeadow/scripts.pory"
	release
# 29 "data/maps/CoastalMeadow/scripts.pory"
	end
# 30 "data/maps/CoastalMeadow/scripts.pory"

# 31 "data/maps/CoastalMeadow/scripts.pory"
Meadow_EventScript_GoodLuck::
# 32 "data/maps/CoastalMeadow/scripts.pory"
	setflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 33 "data/maps/CoastalMeadow/scripts.pory"
	msgbox SafariZone_South_Text_GoodLuck, MSGBOX_DEFAULT
# 34 "data/maps/CoastalMeadow/scripts.pory"
	release
# 35 "data/maps/CoastalMeadow/scripts.pory"
	end
# 36 "data/maps/CoastalMeadow/scripts.pory"

# 37 "data/maps/CoastalMeadow/scripts.pory"
Meadow_EventScript_ExitEarly::
# 38 "data/maps/CoastalMeadow/scripts.pory"
	msgbox SafariZone_South_EventScript_Exit, MSGBOX_DEFAULT
# 39 "data/maps/CoastalMeadow/scripts.pory"
	closemessage
# 40 "data/maps/CoastalMeadow/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 1
# 41 "data/maps/CoastalMeadow/scripts.pory"
	special ExitSafariMode
# 42 "data/maps/CoastalMeadow/scripts.pory"
	warpdoor MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
# 43 "data/maps/CoastalMeadow/scripts.pory"
	waitstate
# 44 "data/maps/CoastalMeadow/scripts.pory"
	end
