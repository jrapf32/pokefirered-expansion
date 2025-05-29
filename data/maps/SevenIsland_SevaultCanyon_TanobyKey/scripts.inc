# 1 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 2 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 3 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 4 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
.equ NUM_SWITCHES_PRESSED, VAR_TEMP_8
# 5 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 6 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_MapScripts::
# 7 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_SevaultCanyon_TanobyKey_OnTransition
# 8 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	.byte 0
# 9 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 10 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_OnTransition::
# 11 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY
# 12 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call_if_set FLAG_SYS_UNLOCKED_TANOBY_RUINS, SevenIsland_SevaultCanyon_TanobyKey_EventScript_MoveBouldersToSolvedPos
# 13 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_1, 0
# 14 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_2, 0
# 15 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_3, 0
# 16 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_4, 0
# 17 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_5, 0
# 18 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_6, 0
# 19 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_7, 0
# 20 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar NUM_SWITCHES_PRESSED, 0
# 21 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 22 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 23 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_MoveBouldersToSolvedPos::
# 24 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER1, 7, 2
# 25 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER2, 4, 4
# 26 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER3, 10, 4
# 27 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER4, 5, 6
# 28 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER5, 9, 6
# 29 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER6, 5, 8
# 30 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER7, 9, 8
# 31 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	return
# 32 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 33 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1::
# 34 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 35 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_1, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 36 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 37 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_1, 100
# 38 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 39 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 40 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 41 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 42 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2::
# 43 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 44 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_2, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 45 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 46 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_2, 100
# 47 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 48 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 49 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 50 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 51 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3::
# 52 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 53 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_3, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 54 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 55 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_3, 100
# 56 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 57 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 58 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 59 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 60 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4::
# 61 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 62 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_4, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 63 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 64 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_4, 100
# 65 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 66 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 67 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 68 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 69 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5::
# 70 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 71 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_5, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 72 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 73 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_5, 100
# 74 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 75 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 76 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 77 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 78 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6::
# 79 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 80 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_6, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 81 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 82 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_6, 100
# 83 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 84 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 85 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 86 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 87 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7::
# 88 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	lockall
# 89 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq VAR_TEMP_7, 100, SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 90 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 91 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_TEMP_7, 100
# 92 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	goto_if_eq NUM_SWITCHES_PRESSED, 7, SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 93 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 94 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 95 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 96 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed::
# 97 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	addvar NUM_SWITCHES_PRESSED, 1
# 98 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	playse SE_TRUCK_MOVE
# 99 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8004, 1
# 100 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8005, 1
# 101 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8006, 8
# 102 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8007, 3
# 103 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	special ShakeScreen
# 104 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	delay 60
# 105 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	return
# 106 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 107 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolvedShakeScreen::
# 108 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8004, 2
# 109 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8005, 2
# 110 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8006, 10
# 111 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8007, 3
# 112 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	special ShakeScreen
# 113 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	delay 60
# 114 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8004, 3
# 115 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8005, 3
# 116 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8006, 12
# 117 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setvar VAR_0x8007, 2
# 118 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	special ShakeScreen
# 119 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	delay 60
# 120 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	playse SE_LAVARIDGE_FALL_WARP
# 121 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	waitse
# 122 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	return
# 123 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 124 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed::
# 125 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 126 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
# 127 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"

# 128 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved::
# 129 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolvedShakeScreen
# 130 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_TanobyKey_Text_MysteriousRumbleFarAway
# 131 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	setflag FLAG_SYS_UNLOCKED_TANOBY_RUINS
# 132 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	releaseall
# 133 "data//maps/SevenIsland_SevaultCanyon_TanobyKey/scripts.pory"
	end
