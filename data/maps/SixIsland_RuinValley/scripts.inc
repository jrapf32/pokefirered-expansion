# 1 "data//maps/SixIsland_RuinValley/scripts.pory"

# 2 "data//maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_MapScripts::
# 3 "data//maps/SixIsland_RuinValley/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SixIsland_RuinValley_OnLoad
# 4 "data//maps/SixIsland_RuinValley/scripts.pory"
	.byte 0
# 5 "data//maps/SixIsland_RuinValley/scripts.pory"

# 6 "data//maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_OnLoad::
# 7 "data//maps/SixIsland_RuinValley/scripts.pory"
	call_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_OpenDottedHoleDoor
# 8 "data//maps/SixIsland_RuinValley/scripts.pory"
	end
# 9 "data//maps/SixIsland_RuinValley/scripts.pory"

# 10 "data//maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_OpenDottedHoleDoor::
# 11 "data//maps/SixIsland_RuinValley/scripts.pory"
	setmetatile 24, 24, METATILE_SeviiIslands67_DottedHoleDoor_Open, 0
# 12 "data//maps/SixIsland_RuinValley/scripts.pory"
	return
# 13 "data//maps/SixIsland_RuinValley/scripts.pory"

# 14 "data//maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Scientist::
# 15 "data//maps/SixIsland_RuinValley/scripts.pory"
	lock
# 16 "data//maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CantFigureOutHowToGetInside
# 17 "data//maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FacePlayer
# 18 "data//maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 19 "data//maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_IFoundThisPlace
# 20 "data//maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FaceOriginalDirection
# 21 "data//maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 22 "data//maps/SixIsland_RuinValley/scripts.pory"
	release
# 23 "data//maps/SixIsland_RuinValley/scripts.pory"
	end
# 24 "data//maps/SixIsland_RuinValley/scripts.pory"

# 25 "data//maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoor::
# 26 "data//maps/SixIsland_RuinValley/scripts.pory"
	lockall
# 27 "data//maps/SixIsland_RuinValley/scripts.pory"
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_DottedHoleDoorOpen
# 28 "data//maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CheckDoorMoreThoroughly, MSGBOX_YESNO
# 29 "data//maps/SixIsland_RuinValley/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor
# 30 "data//maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_SeveralDotsOnTheDoor
# 31 "data//maps/SixIsland_RuinValley/scripts.pory"
	braillemessage Braille_Text_Cut
# 32 "data//maps/SixIsland_RuinValley/scripts.pory"
	waitbuttonpress
# 33 "data//maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 34 "data//maps/SixIsland_RuinValley/scripts.pory"
	end
# 35 "data//maps/SixIsland_RuinValley/scripts.pory"

# 36 "data//maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoorOpen::
# 37 "data//maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_DoorIsOpen
# 38 "data//maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 39 "data//maps/SixIsland_RuinValley/scripts.pory"
	end
# 40 "data//maps/SixIsland_RuinValley/scripts.pory"

# 41 "data//maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor::
# 42 "data//maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_LeftDoorAlone
# 43 "data//maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 44 "data//maps/SixIsland_RuinValley/scripts.pory"
	end
