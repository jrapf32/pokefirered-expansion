# 1 "data//maps/VictoryRoad_1F/scripts.pory"

# 2 "data//maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts::
# 3 "data//maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_1F_OnLoad
# 4 "data//maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 5 "data//maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 6 "data//maps/VictoryRoad_1F/scripts.pory"

# 7 "data//maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnLoad::
# 8 "data//maps/VictoryRoad_1F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_1F, 100, VictoryRoad_1F_EventScript_SetRockBarrier
# 9 "data//maps/VictoryRoad_1F/scripts.pory"
	end
# 10 "data//maps/VictoryRoad_1F/scripts.pory"

# 11 "data//maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetRockBarrier::
# 12 "data//maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 14, METATILE_Cave_RockBarrier_Top, 1
# 13 "data//maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 15, METATILE_Cave_RockBarrier_Bottom, 1
# 14 "data//maps/VictoryRoad_1F/scripts.pory"
	return
# 15 "data//maps/VictoryRoad_1F/scripts.pory"

# 16 "data//maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition::
# 17 "data//maps/VictoryRoad_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VICTORY_ROAD_1F
# 18 "data//maps/VictoryRoad_1F/scripts.pory"
	end
# 19 "data//maps/VictoryRoad_1F/scripts.pory"

# 20 "data//maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_FloorSwitch::
# 21 "data//maps/VictoryRoad_1F/scripts.pory"
	lockall
# 22 "data//maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_1F, 100, VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed
# 23 "data//maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 14, METATILE_Cave_Floor_Ledge_Top, 0
# 24 "data//maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 15, METATILE_Cave_Floor_Ledge_Bottom, 0
# 25 "data//maps/VictoryRoad_1F/scripts.pory"
	playse SE_ICE_BREAK
# 26 "data//maps/VictoryRoad_1F/scripts.pory"
	special DrawWholeMapView
# 27 "data//maps/VictoryRoad_1F/scripts.pory"
	waitse
# 28 "data//maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_1F_BOULDER
# 29 "data//maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 100
# 30 "data//maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 31 "data//maps/VictoryRoad_1F/scripts.pory"
	end
# 32 "data//maps/VictoryRoad_1F/scripts.pory"

# 33 "data//maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed::
# 34 "data//maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 35 "data//maps/VictoryRoad_1F/scripts.pory"
	end
# 36 "data//maps/VictoryRoad_1F/scripts.pory"

# 37 "data//maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Naomi::
# 38 "data//maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_NAOMI, VictoryRoad_1F_Text_NaomiIntro, VictoryRoad_1F_Text_NaomiDefeat
# 39 "data//maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
# 40 "data//maps/VictoryRoad_1F/scripts.pory"
	end
# 41 "data//maps/VictoryRoad_1F/scripts.pory"

# 42 "data//maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Rolando::
# 43 "data//maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ROLANDO, VictoryRoad_1F_Text_RolandoIntro, VictoryRoad_1F_Text_RolandoDefeat
# 44 "data//maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_RolandoPostBattle, MSGBOX_AUTOCLOSE
# 45 "data//maps/VictoryRoad_1F/scripts.pory"
	end
