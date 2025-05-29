# 1 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 2 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_MapScripts::
# 3 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_1F_OnTransition
# 4 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 7 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_OnTransition::
# 8 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
# 9 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 10 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 11 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	release
# 16 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 17 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 18 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom, MSGBOX_NPC
# 20 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 21 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 22 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 23 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked, MSGBOX_NPC
# 24 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 25 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 26 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Youngster::
# 27 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves, MSGBOX_NPC
# 28 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 29 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 30 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill::
# 31 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	lock
# 32 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 33 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland, MSGBOX_YESNO
# 34 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail
# 35 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_LetsGo
# 36 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 37 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	playbgm MUS_FOLLOW_ME, 1
# 38 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 39 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 40 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 41 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay 20
# 42 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth
# 43 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast
# 44 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest
# 45 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_CINNABAR_POKEMON_CENTER_BILL
# 46 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1
# 47 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 48 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	warp MAP_CINNABAR_ISLAND, 14, 11
# 49 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitstate
# 50 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	release
# 51 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 52 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 53 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth::
# 54 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
# 55 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth
# 56 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 57 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	return
# 58 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 59 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast::
# 60 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast
# 61 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast
# 62 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 63 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	return
# 64 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 65 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest::
# 66 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
# 67 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest
# 68 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 69 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	return
# 70 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 71 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail::
# 72 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_OhNotDoneYet
# 73 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	release
# 74 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 75 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 76 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_BillExit::
# 77 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 78 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 79 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 80 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 81 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 82 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 83 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 84 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 85 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	set_invisible
# 86 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 87 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 88 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth::
# 89 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 90 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 91 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 92 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 93 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 94 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 95 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 96 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 97 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 98 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 99 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 100 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast::
# 101 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 102 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 103 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 104 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 105 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 106 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 107 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 108 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 109 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 110 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 111 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	set_invisible
# 112 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 113 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 114 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast::
# 115 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 116 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 117 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 118 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	face_left
# 119 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 120 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 121 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 122 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 123 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 124 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 125 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 126 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 127 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 128 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	set_invisible
# 129 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 130 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 131 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest::
# 132 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 133 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 134 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 135 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 136 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 137 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 138 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 139 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 140 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 141 "data//maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end
