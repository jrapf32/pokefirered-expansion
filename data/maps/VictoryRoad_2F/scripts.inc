# 1 "data//maps/VictoryRoad_2F/scripts.pory"

# 2 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_MapScripts::
# 3 "data//maps/VictoryRoad_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_2F_OnLoad
# 4 "data//maps/VictoryRoad_2F/scripts.pory"
	.byte 0
# 5 "data//maps/VictoryRoad_2F/scripts.pory"

# 6 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_OnLoad::
# 7 "data//maps/VictoryRoad_2F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_SetRockBarrier1
# 8 "data//maps/VictoryRoad_2F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_SetRockBarrier2
# 9 "data//maps/VictoryRoad_2F/scripts.pory"
	end
# 10 "data//maps/VictoryRoad_2F/scripts.pory"

# 11 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier1::
# 12 "data//maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_RockBarrier_Top, 1
# 13 "data//maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_RockBarrier_Bottom, 1
# 14 "data//maps/VictoryRoad_2F/scripts.pory"
	return
# 15 "data//maps/VictoryRoad_2F/scripts.pory"

# 16 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier2::
# 17 "data//maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_RockBarrier_Top, 1
# 18 "data//maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_RockBarrier_Bottom, 1
# 19 "data//maps/VictoryRoad_2F/scripts.pory"
	return
# 20 "data//maps/VictoryRoad_2F/scripts.pory"

# 21 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1::
# 22 "data//maps/VictoryRoad_2F/scripts.pory"
	lockall
# 23 "data//maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed
# 24 "data//maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_Floor_Ledge_Top, 0
# 25 "data//maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_Floor_Ledge_Bottom, 0
# 26 "data//maps/VictoryRoad_2F/scripts.pory"
	playse SE_ICE_BREAK
# 27 "data//maps/VictoryRoad_2F/scripts.pory"
	special DrawWholeMapView
# 28 "data//maps/VictoryRoad_2F/scripts.pory"
	waitse
# 29 "data//maps/VictoryRoad_2F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER1
# 30 "data//maps/VictoryRoad_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
# 31 "data//maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 32 "data//maps/VictoryRoad_2F/scripts.pory"
	end
# 33 "data//maps/VictoryRoad_2F/scripts.pory"

# 34 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed::
# 35 "data//maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 36 "data//maps/VictoryRoad_2F/scripts.pory"
	end
# 37 "data//maps/VictoryRoad_2F/scripts.pory"

# 38 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2::
# 39 "data//maps/VictoryRoad_2F/scripts.pory"
	lockall
# 40 "data//maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed
# 41 "data//maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_Floor_Ledge_Top, 0
# 42 "data//maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_Floor_Ledge_Bottom, 0
# 43 "data//maps/VictoryRoad_2F/scripts.pory"
	playse SE_ICE_BREAK
# 44 "data//maps/VictoryRoad_2F/scripts.pory"
	special DrawWholeMapView
# 45 "data//maps/VictoryRoad_2F/scripts.pory"
	waitse
# 46 "data//maps/VictoryRoad_2F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER2
# 47 "data//maps/VictoryRoad_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
# 48 "data//maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 49 "data//maps/VictoryRoad_2F/scripts.pory"
	end
# 50 "data//maps/VictoryRoad_2F/scripts.pory"

# 51 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed::
# 52 "data//maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 53 "data//maps/VictoryRoad_2F/scripts.pory"
	end
# 54 "data//maps/VictoryRoad_2F/scripts.pory"

# 55 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Dawson::
# 56 "data//maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_DAWSON, VictoryRoad_2F_Text_DawsonIntro, VictoryRoad_2F_Text_DawsonDefeat
# 57 "data//maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 58 "data//maps/VictoryRoad_2F/scripts.pory"
	end
# 59 "data//maps/VictoryRoad_2F/scripts.pory"

# 60 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Daisuke::
# 61 "data//maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_DAISUKE, VictoryRoad_2F_Text_DaisukeIntro, VictoryRoad_2F_Text_DaisukeDefeat
# 62 "data//maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 63 "data//maps/VictoryRoad_2F/scripts.pory"
	end
# 64 "data//maps/VictoryRoad_2F/scripts.pory"

# 65 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Nelson::
# 66 "data//maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NELSON, VictoryRoad_2F_Text_NelsonIntro, VictoryRoad_2F_Text_NelsonDefeat
# 67 "data//maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_NelsonPostBattle, MSGBOX_AUTOCLOSE
# 68 "data//maps/VictoryRoad_2F/scripts.pory"
	end
# 69 "data//maps/VictoryRoad_2F/scripts.pory"

# 70 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Gregory::
# 71 "data//maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_GREGORY, VictoryRoad_2F_Text_GregoryIntro, VictoryRoad_2F_Text_GregoryDefeat
# 72 "data//maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
# 73 "data//maps/VictoryRoad_2F/scripts.pory"
	end
# 74 "data//maps/VictoryRoad_2F/scripts.pory"

# 75 "data//maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Vincent::
# 76 "data//maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_TAMER_VINCENT, VictoryRoad_2F_Text_VincentIntro, VictoryRoad_2F_Text_VincentDefeat
# 77 "data//maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
# 78 "data//maps/VictoryRoad_2F/scripts.pory"
	end
