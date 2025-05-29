# 1 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 2 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 3 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_MapScripts::
# 4 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.byte 0
# 5 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 6 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire::
# 7 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	lock
# 8 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	faceplayer
# 9 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 10 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 11 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	message SixIsland_DottedHole_SapphireRoom_Text_FoundSapphire
# 12 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmessage
# 13 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitfanfare
# 14 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	closemessage
# 15 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setobjectxyperm LOCALID_DOTTED_HOLE_THIEF, 5, 0
# 16 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	addobject LOCALID_DOTTED_HOLE_THIEF
# 17 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playse SE_FALL
# 18 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn
# 19 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 20 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playse SE_M_STRENGTH
# 21 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
# 22 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
# 23 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
# 24 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
# 25 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8004, 3
# 26 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 27 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8006, 12
# 28 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8007, 3
# 29 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	special ShakeScreen
# 30 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay 60
# 31 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth
# 32 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth
# 33 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast
# 34 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest
# 35 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 36 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_IWasRightInTailingYou
# 37 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	closemessage
# 38 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth
# 39 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth
# 40 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast
# 41 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest
# 42 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	removeobject LOCALID_SAPPHIRE
# 43 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
# 44 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
# 45 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
# 46 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
# 47 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_SellToTeamRocketTellPassword
# 48 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	closemessage
# 49 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth
# 50 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth
# 51 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast
# 52 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest
# 53 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playse SE_EXIT
# 54 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay 35
# 55 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	removeobject LOCALID_DOTTED_HOLE_THIEF
# 56 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setflag FLAG_LEARNED_YES_NAH_CHANSEY
# 57 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	release
# 58 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	end
# 59 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 60 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
@ Lots of redundant scripts below
# 61 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2::
# 62 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 63 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 64 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 65 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 66 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2::
# 67 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 68 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 69 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 70 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 71 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft::
# 72 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 73 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 74 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 75 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 76 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown::
# 77 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 78 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 79 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 80 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 81 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth::
# 82 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 83 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 84 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 85 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 86 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth::
# 87 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 88 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 89 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 90 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 91 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast::
# 92 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 93 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 94 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 95 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 96 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest::
# 97 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 98 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 99 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 100 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 101 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth::
# 102 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 103 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 104 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 105 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 106 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 107 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 108 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth::
# 109 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 110 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 111 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 112 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 113 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 114 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 115 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast::
# 116 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 117 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 118 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 119 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 120 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 121 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 122 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest::
# 123 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 124 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 125 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 126 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 127 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 128 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 129 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth::
# 130 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 131 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth
# 132 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 133 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 134 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 135 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth::
# 136 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 137 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth
# 138 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 139 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 140 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 141 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast::
# 142 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 143 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 144 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 145 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 146 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 147 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest::
# 148 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 149 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 150 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 151 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 152 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 153 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft::
# 154 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_up
# 155 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_up
# 156 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_in_place_faster_right
# 157 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 158 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 159 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow::
# 160 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_right
# 161 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_right
# 162 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_in_place_faster_up
# 163 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 164 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 165 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft::
# 166 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_right
# 167 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 168 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 169 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow::
# 170 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_up
# 171 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 172 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 173 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth::
# 174 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_up
# 175 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 176 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 177 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 178 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_down
# 179 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 180 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 181 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 182 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 183 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth::
# 184 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_down
# 185 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 186 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 187 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 188 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_up
# 189 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 190 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 191 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 192 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 193 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest::
# 194 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 195 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 196 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 197 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 198 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_up
# 199 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 200 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 201 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn::
# 202 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	face_down
# 203 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	disable_anim
# 204 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 205 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 206 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 207 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 208 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 209 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 210 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 211 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 212 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 213 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	restore_anim
# 214 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 215 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 216 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit::
# 217 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay_16
# 218 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_in_place_faster_right
# 219 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 220 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 221 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_BrailleMessage::
# 222 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	lockall
# 223 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8005, 130
# 224 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_LetTheTwo
# 225 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Glittering
# 226 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Stones
# 227 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_OneInRed
# 228 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_OneInBlue
# 229 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_ConnectThe
# 230 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Past
# 231 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_TwoFriends
# 232 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Sharing
# 233 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_PowerOpen
# 234 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_AWindowTo
# 235 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_ANewWorld
# 236 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_ThatGlows
# 237 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_TheNext
# 238 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_WorldWaits
# 239 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage Braille_Text_ForYou
# 240 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitbuttonpress
# 241 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	releaseall
# 242 "data//maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	end
