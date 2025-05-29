# 1 "data//maps/NavelRock_Summit/scripts.pory"

# 2 "data//maps/NavelRock_Summit/scripts.pory"
NavelRock_Summit_MapScripts::
# 3 "data//maps/NavelRock_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Summit_OnTransition
# 4 "data//maps/NavelRock_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Summit_OnResume
# 5 "data//maps/NavelRock_Summit/scripts.pory"
	.byte 0
# 6 "data//maps/NavelRock_Summit/scripts.pory"

# 7 "data//maps/NavelRock_Summit/scripts.pory"
NavelRock_Summit_OnTransition::
# 8 "data//maps/NavelRock_Summit/scripts.pory"
	call_if_set FLAG_FOUGHT_HO_OH, NavelRock_Summit_EventScript_HideHoOh
# 9 "data//maps/NavelRock_Summit/scripts.pory"
	call_if_unset FLAG_FOUGHT_HO_OH, NavelRock_Summit_EventScript_TryShowHoOh
# 10 "data//maps/NavelRock_Summit/scripts.pory"
	end
# 11 "data//maps/NavelRock_Summit/scripts.pory"

# 12 "data//maps/NavelRock_Summit/scripts.pory"
NavelRock_Summit_EventScript_HideHoOh::
# 13 "data//maps/NavelRock_Summit/scripts.pory"
	setvar VAR_TEMP_1, 1
# 14 "data//maps/NavelRock_Summit/scripts.pory"
	setflag FLAG_HIDE_HO_OH
# 15 "data//maps/NavelRock_Summit/scripts.pory"
	return
# 16 "data//maps/NavelRock_Summit/scripts.pory"

# 17 "data//maps/NavelRock_Summit/scripts.pory"
NavelRock_Summit_EventScript_TryShowHoOh::
# 18 "data//maps/NavelRock_Summit/scripts.pory"
	setvar VAR_TEMP_1, 1
# 19 "data//maps/NavelRock_Summit/scripts.pory"
	goto_if_set FLAG_HO_OH_FLEW_AWAY, EventScript_Return
# 20 "data//maps/NavelRock_Summit/scripts.pory"
	setvar VAR_TEMP_1, 0
# 21 "data//maps/NavelRock_Summit/scripts.pory"
	clearflag FLAG_HIDE_HO_OH
# 22 "data//maps/NavelRock_Summit/scripts.pory"
	return
# 23 "data//maps/NavelRock_Summit/scripts.pory"

# 24 "data//maps/NavelRock_Summit/scripts.pory"
NavelRock_Summit_OnResume::
# 25 "data//maps/NavelRock_Summit/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, NavelRock_Summit_EventScript_TryRemoveHoOh
# 26 "data//maps/NavelRock_Summit/scripts.pory"
	end
# 27 "data//maps/NavelRock_Summit/scripts.pory"

# 28 "data//maps/NavelRock_Summit/scripts.pory"
NavelRock_Summit_EventScript_TryRemoveHoOh::
# 29 "data//maps/NavelRock_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 30 "data//maps/NavelRock_Summit/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 31 "data//maps/NavelRock_Summit/scripts.pory"
	removeobject LOCALID_NAVEL_ROCK_HO_OH
# 32 "data//maps/NavelRock_Summit/scripts.pory"
	return
# 33 "data//maps/NavelRock_Summit/scripts.pory"

# 34 "data//maps/NavelRock_Summit/scripts.pory"
NavelRock_Summit_EventScript_HoOh::
# 35 "data//maps/NavelRock_Summit/scripts.pory"
	
# 36 "data//maps/NavelRock_Summit/scripts.pory"
	
# 37 "data//maps/NavelRock_Summit/scripts.pory"
	lockall
# 38 "data//maps/NavelRock_Summit/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data//maps/NavelRock_Summit/scripts.pory"
	special SpawnCameraObject
# 40 "data//maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8004, 3  @ Num loops
# 41 "data//maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8005, 35 @ Delay
# 42 "data//maps/NavelRock_Summit/scripts.pory"
	special LoopWingFlapSound
# 43 "data//maps/NavelRock_Summit/scripts.pory"
	applymovement LOCALID_NAVEL_ROCK_HO_OH, Movement_HoOhAppear
# 44 "data//maps/NavelRock_Summit/scripts.pory"
	applymovement LOCALID_CAMERA, Movement_CameraPanUp
# 45 "data//maps/NavelRock_Summit/scripts.pory"
	waitmovement 0
# 46 "data//maps/NavelRock_Summit/scripts.pory"
	delay 50
# 47 "data//maps/NavelRock_Summit/scripts.pory"
	setweather 0
# 48 "data//maps/NavelRock_Summit/scripts.pory"
	doweather
# 49 "data//maps/NavelRock_Summit/scripts.pory"
	waitse
# 50 "data//maps/NavelRock_Summit/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 51 "data//maps/NavelRock_Summit/scripts.pory"
	delay 30
# 52 "data//maps/NavelRock_Summit/scripts.pory"
	waitmoncry
# 53 "data//maps/NavelRock_Summit/scripts.pory"
	delay 60
# 54 "data//maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8004, 3  @ Num loops
# 55 "data//maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8005, 35 @ Delay
# 56 "data//maps/NavelRock_Summit/scripts.pory"
	special LoopWingFlapSound
# 57 "data//maps/NavelRock_Summit/scripts.pory"
	applymovement LOCALID_CAMERA, Movement_CameraPanDown
# 58 "data//maps/NavelRock_Summit/scripts.pory"
	applymovement LOCALID_NAVEL_ROCK_HO_OH, Movement_HoOhApproach
# 59 "data//maps/NavelRock_Summit/scripts.pory"
	waitmovement 0
# 60 "data//maps/NavelRock_Summit/scripts.pory"
	special RemoveCameraObject
# 61 "data//maps/NavelRock_Summit/scripts.pory"
	seteventmon SPECIES_HO_OH, 70
# 62 "data//maps/NavelRock_Summit/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 63 "data//maps/NavelRock_Summit/scripts.pory"
	special StartLegendaryBattle
# 64 "data//maps/NavelRock_Summit/scripts.pory"
	waitstate
# 65 "data//maps/NavelRock_Summit/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 66 "data//maps/NavelRock_Summit/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_NAVEL_ROCK_HO_OH
# 67 "data//maps/NavelRock_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 68 "data//maps/NavelRock_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NavelRock_Summit_EventScript_DefeatedHoOh
# 69 "data//maps/NavelRock_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NavelRock_Summit_EventScript_RanFromHoOh
# 70 "data//maps/NavelRock_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Summit_EventScript_RanFromHoOh
# 71 "data//maps/NavelRock_Summit/scripts.pory"
	setflag FLAG_FOUGHT_HO_OH
# 72 "data//maps/NavelRock_Summit/scripts.pory"
	releaseall
# 73 "data//maps/NavelRock_Summit/scripts.pory"
	end
# 74 "data//maps/NavelRock_Summit/scripts.pory"

# 75 "data//maps/NavelRock_Summit/scripts.pory"
NavelRock_Summit_EventScript_DefeatedHoOh::
# 76 "data//maps/NavelRock_Summit/scripts.pory"
	setflag FLAG_HO_OH_FLEW_AWAY
# 77 "data//maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 78 "data//maps/NavelRock_Summit/scripts.pory"
	goto EventScript_MonFlewAway
# 79 "data//maps/NavelRock_Summit/scripts.pory"
	end
# 80 "data//maps/NavelRock_Summit/scripts.pory"

# 81 "data//maps/NavelRock_Summit/scripts.pory"
NavelRock_Summit_EventScript_RanFromHoOh::
# 82 "data//maps/NavelRock_Summit/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 83 "data//maps/NavelRock_Summit/scripts.pory"
	goto EventScript_MonFlewAway
# 84 "data//maps/NavelRock_Summit/scripts.pory"
	end
# 85 "data//maps/NavelRock_Summit/scripts.pory"

# 86 "data//maps/NavelRock_Summit/scripts.pory"
Movement_CameraPanUp:
# 87 "data//maps/NavelRock_Summit/scripts.pory"
	walk_up
# 88 "data//maps/NavelRock_Summit/scripts.pory"
	walk_up
# 89 "data//maps/NavelRock_Summit/scripts.pory"
	walk_up
# 90 "data//maps/NavelRock_Summit/scripts.pory"
	step_end
# 91 "data//maps/NavelRock_Summit/scripts.pory"

# 92 "data//maps/NavelRock_Summit/scripts.pory"
Movement_CameraPanDown:
# 93 "data//maps/NavelRock_Summit/scripts.pory"
	delay_16
# 94 "data//maps/NavelRock_Summit/scripts.pory"
	delay_16
# 95 "data//maps/NavelRock_Summit/scripts.pory"
	walk_down
# 96 "data//maps/NavelRock_Summit/scripts.pory"
	walk_down
# 97 "data//maps/NavelRock_Summit/scripts.pory"
	walk_down
# 98 "data//maps/NavelRock_Summit/scripts.pory"
	step_end
# 99 "data//maps/NavelRock_Summit/scripts.pory"

# 100 "data//maps/NavelRock_Summit/scripts.pory"
Movement_HoOhApproach:
# 101 "data//maps/NavelRock_Summit/scripts.pory"
	walk_down
# 102 "data//maps/NavelRock_Summit/scripts.pory"
	walk_down
# 103 "data//maps/NavelRock_Summit/scripts.pory"
	walk_down
# 104 "data//maps/NavelRock_Summit/scripts.pory"
	walk_down
# 105 "data//maps/NavelRock_Summit/scripts.pory"
	walk_down
# 106 "data//maps/NavelRock_Summit/scripts.pory"
	walk_in_place_down
# 107 "data//maps/NavelRock_Summit/scripts.pory"
	delay_16
# 108 "data//maps/NavelRock_Summit/scripts.pory"
	delay_16
# 109 "data//maps/NavelRock_Summit/scripts.pory"
	step_end
# 110 "data//maps/NavelRock_Summit/scripts.pory"

# 111 "data//maps/NavelRock_Summit/scripts.pory"
Movement_HoOhAppear:
# 112 "data//maps/NavelRock_Summit/scripts.pory"
	delay_16
# 113 "data//maps/NavelRock_Summit/scripts.pory"
	delay_16
# 114 "data//maps/NavelRock_Summit/scripts.pory"
	walk_in_place_down
# 115 "data//maps/NavelRock_Summit/scripts.pory"
	walk_in_place_down
# 116 "data//maps/NavelRock_Summit/scripts.pory"
	walk_in_place_down
# 117 "data//maps/NavelRock_Summit/scripts.pory"
	walk_in_place_down
# 118 "data//maps/NavelRock_Summit/scripts.pory"
	step_end
