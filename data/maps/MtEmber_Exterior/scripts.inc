# 1 "data//maps/MtEmber_Exterior/scripts.pory"

# 2 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_MapScripts::
# 3 "data//maps/MtEmber_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Exterior_OnTransition
# 4 "data//maps/MtEmber_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MtEmber_Exterior_OnLoad
# 5 "data//maps/MtEmber_Exterior/scripts.pory"
	.byte 0
# 6 "data//maps/MtEmber_Exterior/scripts.pory"

# 7 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_OnTransition::
# 8 "data//maps/MtEmber_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
# 9 "data//maps/MtEmber_Exterior/scripts.pory"
	call_if_eq VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2, MtEmber_Exterior_EventScript_RocketsFaceDown
# 10 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 11 "data//maps/MtEmber_Exterior/scripts.pory"

# 12 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_RocketsFaceDown::
# 13 "data//maps/MtEmber_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT1, MOVEMENT_TYPE_FACE_DOWN
# 14 "data//maps/MtEmber_Exterior/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT2, MOVEMENT_TYPE_FACE_DOWN
# 15 "data//maps/MtEmber_Exterior/scripts.pory"
	return
# 16 "data//maps/MtEmber_Exterior/scripts.pory"

# 17 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_OnLoad::
# 18 "data//maps/MtEmber_Exterior/scripts.pory"
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_OpenCave
# 19 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 20 "data//maps/MtEmber_Exterior/scripts.pory"

# 21 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_OpenCave::
# 22 "data//maps/MtEmber_Exterior/scripts.pory"
	setmetatile 42, 39, METATILE_MtEmber_CaveEntrance, 0
# 23 "data//maps/MtEmber_Exterior/scripts.pory"
	return
# 24 "data//maps/MtEmber_Exterior/scripts.pory"

# 25 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_Grunt1::
# 26 "data//maps/MtEmber_Exterior/scripts.pory"
	lock
# 27 "data//maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_Grunt1Defeated
# 28 "data//maps/MtEmber_Exterior/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt1
# 29 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellTryDiggingHere
# 30 "data//maps/MtEmber_Exterior/scripts.pory"
	release
# 31 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 32 "data//maps/MtEmber_Exterior/scripts.pory"

# 33 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_Grunt1Defeated::
# 34 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 35 "data//maps/MtEmber_Exterior/scripts.pory"
	release
# 36 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 37 "data//maps/MtEmber_Exterior/scripts.pory"

# 38 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_BattleGrunt1::
# 39 "data//maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_FacePlayer
# 40 "data//maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 41 "data//maps/MtEmber_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 42 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1Intro
# 43 "data//maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_Text_Grunt1Defeat
# 44 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 45 "data//maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 46 "data//maps/MtEmber_Exterior/scripts.pory"
	release
# 47 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 48 "data//maps/MtEmber_Exterior/scripts.pory"

# 49 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_DefeatedBothGrunts::
# 50 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellRegroupDontStepInsideThere
# 51 "data//maps/MtEmber_Exterior/scripts.pory"
	closemessage
# 52 "data//maps/MtEmber_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data//maps/MtEmber_Exterior/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT1
# 54 "data//maps/MtEmber_Exterior/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT2
# 55 "data//maps/MtEmber_Exterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 56 "data//maps/MtEmber_Exterior/scripts.pory"
	release
# 57 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 58 "data//maps/MtEmber_Exterior/scripts.pory"

# 59 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_Grunt2::
# 60 "data//maps/MtEmber_Exterior/scripts.pory"
	lock
# 61 "data//maps/MtEmber_Exterior/scripts.pory"
	faceplayer
# 62 "data//maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedGrunt2
# 63 "data//maps/MtEmber_Exterior/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt2
# 64 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_YoureInTheWayGetLost
# 65 "data//maps/MtEmber_Exterior/scripts.pory"
	closemessage
# 66 "data//maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_FaceOriginalDirection
# 67 "data//maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 68 "data//maps/MtEmber_Exterior/scripts.pory"
	release
# 69 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 70 "data//maps/MtEmber_Exterior/scripts.pory"

# 71 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_DefeatedGrunt2::
# 72 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 73 "data//maps/MtEmber_Exterior/scripts.pory"
	release
# 74 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 75 "data//maps/MtEmber_Exterior/scripts.pory"

# 76 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_BattleGrunt2::
# 77 "data//maps/MtEmber_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 78 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2Intro
# 79 "data//maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_Text_Grunt2Defeat
# 80 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 81 "data//maps/MtEmber_Exterior/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 82 "data//maps/MtEmber_Exterior/scripts.pory"
	release
# 83 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 84 "data//maps/MtEmber_Exterior/scripts.pory"

# 85 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_RocketPasswordScene::
# 86 "data//maps/MtEmber_Exterior/scripts.pory"
	lockall
# 87 "data//maps/MtEmber_Exterior/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 88 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_PunchedThroughAtLast
# 89 "data//maps/MtEmber_Exterior/scripts.pory"
	message MtEmber_Exterior_Text_WhatsPasswordAgain
# 90 "data//maps/MtEmber_Exterior/scripts.pory"
	waitmessage
# 91 "data//maps/MtEmber_Exterior/scripts.pory"
	playse SE_PIN
# 92 "data//maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_QuestionMark
# 93 "data//maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 94 "data//maps/MtEmber_Exterior/scripts.pory"
	waitbuttonpress
# 95 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_FirstPasswordGoldeen
# 96 "data//maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_WalkInPlaceFasterDown
# 97 "data//maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 98 "data//maps/MtEmber_Exterior/scripts.pory"
	playse SE_PIN
# 99 "data//maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_ExclamationMark
# 100 "data//maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 101 "data//maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_Delay48
# 102 "data//maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 103 "data//maps/MtEmber_Exterior/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_WalkInPlaceFasterDown
# 104 "data//maps/MtEmber_Exterior/scripts.pory"
	waitmovement 0
# 105 "data//maps/MtEmber_Exterior/scripts.pory"
	call MtEmber_Exterior_EventScript_RocketsFaceDown
# 106 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_SnoopsBeenListeningIn
# 107 "data//maps/MtEmber_Exterior/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
# 108 "data//maps/MtEmber_Exterior/scripts.pory"
	releaseall
# 109 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 110 "data//maps/MtEmber_Exterior/scripts.pory"

# 111 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_Logan::
# 112 "data//maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
# 113 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
# 114 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 115 "data//maps/MtEmber_Exterior/scripts.pory"

# 116 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_Beth::
# 117 "data//maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_BETH, MtEmber_Exterior_Text_BethIntro, MtEmber_Exterior_Text_BethDefeat
# 118 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 119 "data//maps/MtEmber_Exterior/scripts.pory"
	end
# 120 "data//maps/MtEmber_Exterior/scripts.pory"

# 121 "data//maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_Jocelyn::
# 122 "data//maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_JOCELYN, MtEmber_Exterior_Text_JocelynIntro, MtEmber_Exterior_Text_JocelynDefeat
# 123 "data//maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 124 "data//maps/MtEmber_Exterior/scripts.pory"
	end
