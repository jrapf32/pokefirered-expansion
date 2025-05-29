# 1 "data//maps/VictoryRoad_3F/scripts.pory"

# 2 "data//maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_MapScripts::
# 3 "data//maps/VictoryRoad_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_3F_OnLoad
# 4 "data//maps/VictoryRoad_3F/scripts.pory"
	.byte 0
# 5 "data//maps/VictoryRoad_3F/scripts.pory"

# 6 "data//maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_OnLoad::
# 7 "data//maps/VictoryRoad_3F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_SetRockBarrier
# 8 "data//maps/VictoryRoad_3F/scripts.pory"
	end
# 9 "data//maps/VictoryRoad_3F/scripts.pory"

# 10 "data//maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_SetRockBarrier::
# 11 "data//maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_RockBarrier_Top, 1
# 12 "data//maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_RockBarrier_Bottom, 1
# 13 "data//maps/VictoryRoad_3F/scripts.pory"
	return
# 14 "data//maps/VictoryRoad_3F/scripts.pory"

# 15 "data//maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitch::
# 16 "data//maps/VictoryRoad_3F/scripts.pory"
	lockall
# 17 "data//maps/VictoryRoad_3F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed
# 18 "data//maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_Floor_Ledge_Top, 0
# 19 "data//maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_Floor_Ledge_Bottom, 0
# 20 "data//maps/VictoryRoad_3F/scripts.pory"
	playse SE_ICE_BREAK
# 21 "data//maps/VictoryRoad_3F/scripts.pory"
	special DrawWholeMapView
# 22 "data//maps/VictoryRoad_3F/scripts.pory"
	waitse
# 23 "data//maps/VictoryRoad_3F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER1
# 24 "data//maps/VictoryRoad_3F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER2
# 25 "data//maps/VictoryRoad_3F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
# 26 "data//maps/VictoryRoad_3F/scripts.pory"
	releaseall
# 27 "data//maps/VictoryRoad_3F/scripts.pory"
	end
# 28 "data//maps/VictoryRoad_3F/scripts.pory"

# 29 "data//maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed::
# 30 "data//maps/VictoryRoad_3F/scripts.pory"
	releaseall
# 31 "data//maps/VictoryRoad_3F/scripts.pory"
	end
# 32 "data//maps/VictoryRoad_3F/scripts.pory"

# 33 "data//maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_George::
# 34 "data//maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_GEORGE, VictoryRoad_3F_Text_GeorgeIntro, VictoryRoad_3F_Text_GeorgeDefeat
# 35 "data//maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 36 "data//maps/VictoryRoad_3F/scripts.pory"
	end
# 37 "data//maps/VictoryRoad_3F/scripts.pory"

# 38 "data//maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Colby::
# 39 "data//maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_COLBY, VictoryRoad_3F_Text_ColbyIntro, VictoryRoad_3F_Text_ColbyDefeat
# 40 "data//maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_ColbyPostBattle, MSGBOX_AUTOCLOSE
# 41 "data//maps/VictoryRoad_3F/scripts.pory"
	end
# 42 "data//maps/VictoryRoad_3F/scripts.pory"

# 43 "data//maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Caroline::
# 44 "data//maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_CAROLINE, VictoryRoad_3F_Text_CarolineIntro, VictoryRoad_3F_Text_CarolineDefeat
# 45 "data//maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 46 "data//maps/VictoryRoad_3F/scripts.pory"
	end
# 47 "data//maps/VictoryRoad_3F/scripts.pory"

# 48 "data//maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Alexa::
# 49 "data//maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ALEXA, VictoryRoad_3F_Text_AlexaIntro, VictoryRoad_3F_Text_AlexaDefeat
# 50 "data//maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 51 "data//maps/VictoryRoad_3F/scripts.pory"
	end
# 52 "data//maps/VictoryRoad_3F/scripts.pory"

# 53 "data//maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Ray::
# 54 "data//maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_RayIntro, VictoryRoad_3F_Text_RayDefeat, VictoryRoad_3F_Text_RayNotEnoughMons
# 55 "data//maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 56 "data//maps/VictoryRoad_3F/scripts.pory"
	end
# 57 "data//maps/VictoryRoad_3F/scripts.pory"

# 58 "data//maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Tyra::
# 59 "data//maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_TyraIntro, VictoryRoad_3F_Text_TyraDefeat, VictoryRoad_3F_Text_TyraNotEnoughMons
# 60 "data//maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 61 "data//maps/VictoryRoad_3F/scripts.pory"
	end
