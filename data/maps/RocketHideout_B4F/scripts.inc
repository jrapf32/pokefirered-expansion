# 1 "data//maps/RocketHideout_B4F/scripts.pory"

# 2 "data//maps/RocketHideout_B4F/scripts.pory"

# 3 "data//maps/RocketHideout_B4F/scripts.pory"
.equ NUM_DOOR_GRUNTS_DEFEATED, VAR_TEMP_1
# 4 "data//maps/RocketHideout_B4F/scripts.pory"

# 5 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_MapScripts::
# 6 "data//maps/RocketHideout_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B4F_OnLoad
# 7 "data//maps/RocketHideout_B4F/scripts.pory"
	.byte 0
# 8 "data//maps/RocketHideout_B4F/scripts.pory"

# 9 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_OnLoad::
# 10 "data//maps/RocketHideout_B4F/scripts.pory"
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
# 11 "data//maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 12 "data//maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 13 "data//maps/RocketHideout_B4F/scripts.pory"
	call_if_ne NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_SetBarrier
# 14 "data//maps/RocketHideout_B4F/scripts.pory"
	end
# 15 "data//maps/RocketHideout_B4F/scripts.pory"

# 16 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_CountGruntDefeated::
# 17 "data//maps/RocketHideout_B4F/scripts.pory"
	addvar NUM_DOOR_GRUNTS_DEFEATED, 1
# 18 "data//maps/RocketHideout_B4F/scripts.pory"
	return
# 19 "data//maps/RocketHideout_B4F/scripts.pory"

# 20 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_Giovanni::
# 21 "data//maps/RocketHideout_B4F/scripts.pory"
	lock
# 22 "data//maps/RocketHideout_B4F/scripts.pory"
	faceplayer
# 23 "data//maps/RocketHideout_B4F/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 0
# 24 "data//maps/RocketHideout_B4F/scripts.pory"
	message RocketHideout_B4F_Text_GiovanniIntro
# 25 "data//maps/RocketHideout_B4F/scripts.pory"
	waitmessage
# 26 "data//maps/RocketHideout_B4F/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 27 "data//maps/RocketHideout_B4F/scripts.pory"
	waitbuttonpress
# 28 "data//maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI, RocketHideout_B4F_Text_GiovanniDefeat
# 29 "data//maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_GiovanniPostBattle
# 30 "data//maps/RocketHideout_B4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 31 "data//maps/RocketHideout_B4F/scripts.pory"
	closemessage
# 32 "data//maps/RocketHideout_B4F/scripts.pory"
	removeobject LOCALID_HIDEOUT_GIOVANNI
# 33 "data//maps/RocketHideout_B4F/scripts.pory"
	addobject LOCALID_SILPH_SCOPE
# 34 "data//maps/RocketHideout_B4F/scripts.pory"
	clearflag FLAG_HIDE_SILPH_SCOPE
# 35 "data//maps/RocketHideout_B4F/scripts.pory"
	setflag FLAG_HIDE_CELADON_ROCKETS
# 36 "data//maps/RocketHideout_B4F/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 37 "data//maps/RocketHideout_B4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 38 "data//maps/RocketHideout_B4F/scripts.pory"
	release
# 39 "data//maps/RocketHideout_B4F/scripts.pory"
	end
# 40 "data//maps/RocketHideout_B4F/scripts.pory"

# 41 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_SilphScope::
# 42 "data//maps/RocketHideout_B4F/scripts.pory"
	lock
# 43 "data//maps/RocketHideout_B4F/scripts.pory"
	faceplayer
# 44 "data//maps/RocketHideout_B4F/scripts.pory"
	removeobject LOCALID_SILPH_SCOPE
# 45 "data//maps/RocketHideout_B4F/scripts.pory"
	giveitem ITEM_SILPH_SCOPE
# 46 "data//maps/RocketHideout_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 47 "data//maps/RocketHideout_B4F/scripts.pory"
	release
# 48 "data//maps/RocketHideout_B4F/scripts.pory"
	end
# 49 "data//maps/RocketHideout_B4F/scripts.pory"

# 50 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_Grunt1::
# 51 "data//maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_18, RocketHideout_B4F_Text_Grunt1Intro, RocketHideout_B4F_Text_Grunt1Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt1
# 52 "data//maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
# 53 "data//maps/RocketHideout_B4F/scripts.pory"
	release
# 54 "data//maps/RocketHideout_B4F/scripts.pory"
	end
# 55 "data//maps/RocketHideout_B4F/scripts.pory"

# 56 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt1::
# 57 "data//maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
# 58 "data//maps/RocketHideout_B4F/scripts.pory"
	addobject LOCALID_LIFT_KEY
# 59 "data//maps/RocketHideout_B4F/scripts.pory"
	clearflag FLAG_HIDE_LIFT_KEY
# 60 "data//maps/RocketHideout_B4F/scripts.pory"
	release
# 61 "data//maps/RocketHideout_B4F/scripts.pory"
	end
# 62 "data//maps/RocketHideout_B4F/scripts.pory"

# 63 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_LiftKey::
# 64 "data//maps/RocketHideout_B4F/scripts.pory"
	lock
# 65 "data//maps/RocketHideout_B4F/scripts.pory"
	faceplayer
# 66 "data//maps/RocketHideout_B4F/scripts.pory"
	setflag FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT
# 67 "data//maps/RocketHideout_B4F/scripts.pory"
	removeobject LOCALID_LIFT_KEY
# 68 "data//maps/RocketHideout_B4F/scripts.pory"
	giveitem ITEM_LIFT_KEY
# 69 "data//maps/RocketHideout_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 70 "data//maps/RocketHideout_B4F/scripts.pory"
	release
# 71 "data//maps/RocketHideout_B4F/scripts.pory"
	end
# 72 "data//maps/RocketHideout_B4F/scripts.pory"

# 73 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_Grunt2::
# 74 "data//maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_Text_Grunt2Intro, RocketHideout_B4F_Text_Grunt2Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt2
# 75 "data//maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 76 "data//maps/RocketHideout_B4F/scripts.pory"
	end
# 77 "data//maps/RocketHideout_B4F/scripts.pory"

# 78 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt2::
# 79 "data//maps/RocketHideout_B4F/scripts.pory"
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
# 80 "data//maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 81 "data//maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 82 "data//maps/RocketHideout_B4F/scripts.pory"
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_RemoveBarrier
# 83 "data//maps/RocketHideout_B4F/scripts.pory"
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval
# 84 "data//maps/RocketHideout_B4F/scripts.pory"
	release
# 85 "data//maps/RocketHideout_B4F/scripts.pory"
	end
# 86 "data//maps/RocketHideout_B4F/scripts.pory"

# 87 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_Grunt3::
# 88 "data//maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_Text_Grunt3Intro, RocketHideout_B4F_Text_Grunt3Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt3
# 89 "data//maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 90 "data//maps/RocketHideout_B4F/scripts.pory"
	end
# 91 "data//maps/RocketHideout_B4F/scripts.pory"

# 92 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt3::
# 93 "data//maps/RocketHideout_B4F/scripts.pory"
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
# 94 "data//maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 95 "data//maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 96 "data//maps/RocketHideout_B4F/scripts.pory"
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_RemoveBarrier
# 97 "data//maps/RocketHideout_B4F/scripts.pory"
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval
# 98 "data//maps/RocketHideout_B4F/scripts.pory"
	release
# 99 "data//maps/RocketHideout_B4F/scripts.pory"
	end
# 100 "data//maps/RocketHideout_B4F/scripts.pory"

# 101 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval::
# 102 "data//maps/RocketHideout_B4F/scripts.pory"
	playse SE_UNLOCK
# 103 "data//maps/RocketHideout_B4F/scripts.pory"
	special DrawWholeMapView
# 104 "data//maps/RocketHideout_B4F/scripts.pory"
	waitse
# 105 "data//maps/RocketHideout_B4F/scripts.pory"
	return
# 106 "data//maps/RocketHideout_B4F/scripts.pory"

# 107 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_SetBarrier::
# 108 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 12, METATILE_SilphCo_HideoutBarrier_TopLeft_Floor, 1
# 109 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 12, METATILE_SilphCo_HideoutBarrier_TopRight_Floor, 1
# 110 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 13, METATILE_SilphCo_HideoutBarrier_BottomLeft, 1
# 111 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 13, METATILE_SilphCo_HideoutBarrier_BottomRight, 1
# 112 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 113 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 114 "data//maps/RocketHideout_B4F/scripts.pory"
	return
# 115 "data//maps/RocketHideout_B4F/scripts.pory"

# 116 "data//maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_RemoveBarrier::
# 117 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 12, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 118 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 12, METATILE_SilphCo_HideoutFloor, 0
# 119 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 13, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 120 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 13, METATILE_SilphCo_HideoutFloor, 0
# 121 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 122 "data//maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor, 0
# 123 "data//maps/RocketHideout_B4F/scripts.pory"
	return
