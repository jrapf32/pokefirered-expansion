# 1 "data//maps/MtMoon_B2F/scripts.pory"

# 2 "data//maps/MtMoon_B2F/scripts.pory"

# 3 "data//maps/MtMoon_B2F/scripts.pory"

# 4 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_MapScripts::
# 5 "data//maps/MtMoon_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_B2F_OnTransition
# 6 "data//maps/MtMoon_B2F/scripts.pory"
	.byte 0
# 7 "data//maps/MtMoon_B2F/scripts.pory"

# 8 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_OnTransition::
# 9 "data//maps/MtMoon_B2F/scripts.pory"
	call_if_unset FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_EventScript_ShowFossils
# 10 "data//maps/MtMoon_B2F/scripts.pory"
	end
# 11 "data//maps/MtMoon_B2F/scripts.pory"

# 12 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_ShowFossils::
# 13 "data//maps/MtMoon_B2F/scripts.pory"
	clearflag FLAG_HIDE_DOME_FOSSIL
# 14 "data//maps/MtMoon_B2F/scripts.pory"
	clearflag FLAG_HIDE_HELIX_FOSSIL
# 15 "data//maps/MtMoon_B2F/scripts.pory"
	return
# 16 "data//maps/MtMoon_B2F/scripts.pory"

# 17 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_MiguelTrigger::
# 18 "data//maps/MtMoon_B2F/scripts.pory"
	lockall
# 19 "data//maps/MtMoon_B2F/scripts.pory"
	applymovement LOCALID_MIGUEL, Common_Movement_WalkInPlaceFasterRight
# 20 "data//maps/MtMoon_B2F/scripts.pory"
	waitmovement 0
# 21 "data//maps/MtMoon_B2F/scripts.pory"
	call MtMoon_B2F_EventScript_BattleMiguel
# 22 "data//maps/MtMoon_B2F/scripts.pory"
	releaseall
# 23 "data//maps/MtMoon_B2F/scripts.pory"
	end
# 24 "data//maps/MtMoon_B2F/scripts.pory"

# 25 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_Miguel::
# 26 "data//maps/MtMoon_B2F/scripts.pory"
	lock
# 27 "data//maps/MtMoon_B2F/scripts.pory"
	faceplayer
# 28 "data//maps/MtMoon_B2F/scripts.pory"
	goto_if_set FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_EventScript_MiguelFossilPicked
# 29 "data//maps/MtMoon_B2F/scripts.pory"
	goto_if_defeated TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_EventScript_MiguelGoPickFossil
# 30 "data//maps/MtMoon_B2F/scripts.pory"
	call MtMoon_B2F_EventScript_BattleMiguel
# 31 "data//maps/MtMoon_B2F/scripts.pory"
	release
# 32 "data//maps/MtMoon_B2F/scripts.pory"
	end
# 33 "data//maps/MtMoon_B2F/scripts.pory"

# 34 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_BattleMiguel::
# 35 "data//maps/MtMoon_B2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 36 "data//maps/MtMoon_B2F/scripts.pory"
	message MtMoon_B2F_Text_MiguelIntro
# 37 "data//maps/MtMoon_B2F/scripts.pory"
	waitmessage
# 38 "data//maps/MtMoon_B2F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 39 "data//maps/MtMoon_B2F/scripts.pory"
	waitbuttonpress
# 40 "data//maps/MtMoon_B2F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_MIGUEL
# 41 "data//maps/MtMoon_B2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_Text_MiguelDefeat
# 42 "data//maps/MtMoon_B2F/scripts.pory"
	setvar VAR_MAP_SCENE_MT_MOON_B2F, 1
# 43 "data//maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
# 44 "data//maps/MtMoon_B2F/scripts.pory"
	return
# 45 "data//maps/MtMoon_B2F/scripts.pory"

# 46 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_MiguelFossilPicked::
# 47 "data//maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_LabOnCinnabarRegeneratesFossils
# 48 "data//maps/MtMoon_B2F/scripts.pory"
	release
# 49 "data//maps/MtMoon_B2F/scripts.pory"
	end
# 50 "data//maps/MtMoon_B2F/scripts.pory"

# 51 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_MiguelGoPickFossil::
# 52 "data//maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
# 53 "data//maps/MtMoon_B2F/scripts.pory"
	release
# 54 "data//maps/MtMoon_B2F/scripts.pory"
	end
# 55 "data//maps/MtMoon_B2F/scripts.pory"

# 56 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_DomeFossil::
# 57 "data//maps/MtMoon_B2F/scripts.pory"
	lock
# 58 "data//maps/MtMoon_B2F/scripts.pory"
	faceplayer
# 59 "data//maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_YouWantDomeFossil, MSGBOX_YESNO
# 60 "data//maps/MtMoon_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtMoon_B2F_EventScript_DontTakeFossil
# 61 "data//maps/MtMoon_B2F/scripts.pory"
	removeobject LOCALID_DOME_FOSSIL
# 62 "data//maps/MtMoon_B2F/scripts.pory"
	giveitem_msg MtMoon_B2F_Text_ObtainedDomeFossil, ITEM_DOME_FOSSIL, 1, MUS_OBTAIN_KEY_ITEM
# 63 "data//maps/MtMoon_B2F/scripts.pory"
	closemessage
# 64 "data//maps/MtMoon_B2F/scripts.pory"
	
# 65 "data//maps/MtMoon_B2F/scripts.pory"
	delay 10
# 66 "data//maps/MtMoon_B2F/scripts.pory"
	applymovement LOCALID_MIGUEL, MtMoon_B2F_Movement_MiguelToHelixFossil
# 67 "data//maps/MtMoon_B2F/scripts.pory"
	waitmovement 0
# 68 "data//maps/MtMoon_B2F/scripts.pory"
	copyobjectxytoperm LOCALID_MIGUEL
# 69 "data//maps/MtMoon_B2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 70 "data//maps/MtMoon_B2F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 71 "data//maps/MtMoon_B2F/scripts.pory"
	message MtMoon_B2F_Text_ThenThisFossilIsMine
# 72 "data//maps/MtMoon_B2F/scripts.pory"
	waitmessage
# 73 "data//maps/MtMoon_B2F/scripts.pory"
	waitfanfare
# 74 "data//maps/MtMoon_B2F/scripts.pory"
	removeobject LOCALID_HELIX_FOSSIL
# 75 "data//maps/MtMoon_B2F/scripts.pory"
	setflag FLAG_GOT_DOME_FOSSIL
# 76 "data//maps/MtMoon_B2F/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
# 77 "data//maps/MtMoon_B2F/scripts.pory"
	release
# 78 "data//maps/MtMoon_B2F/scripts.pory"
	end
# 79 "data//maps/MtMoon_B2F/scripts.pory"

# 80 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_Movement_MiguelToHelixFossil::
# 81 "data//maps/MtMoon_B2F/scripts.pory"
	walk_right
# 82 "data//maps/MtMoon_B2F/scripts.pory"
	walk_up
# 83 "data//maps/MtMoon_B2F/scripts.pory"
	walk_up
# 84 "data//maps/MtMoon_B2F/scripts.pory"
	walk_up
# 85 "data//maps/MtMoon_B2F/scripts.pory"
	step_end
# 86 "data//maps/MtMoon_B2F/scripts.pory"

# 87 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_HelixFossil::
# 88 "data//maps/MtMoon_B2F/scripts.pory"
	lock
# 89 "data//maps/MtMoon_B2F/scripts.pory"
	faceplayer
# 90 "data//maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_YouWantHelixFossil, MSGBOX_YESNO
# 91 "data//maps/MtMoon_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtMoon_B2F_EventScript_DontTakeFossil
# 92 "data//maps/MtMoon_B2F/scripts.pory"
	removeobject LOCALID_HELIX_FOSSIL
# 93 "data//maps/MtMoon_B2F/scripts.pory"
	giveitem_msg MtMoon_B2F_Text_ObtainedHelixFossil, ITEM_HELIX_FOSSIL, 1, MUS_OBTAIN_KEY_ITEM
# 94 "data//maps/MtMoon_B2F/scripts.pory"
	closemessage
# 95 "data//maps/MtMoon_B2F/scripts.pory"
	
# 96 "data//maps/MtMoon_B2F/scripts.pory"
	delay 10
# 97 "data//maps/MtMoon_B2F/scripts.pory"
	applymovement LOCALID_MIGUEL, MtMoon_B2F_Movement_MiguelToDomeFossil
# 98 "data//maps/MtMoon_B2F/scripts.pory"
	waitmovement 0
# 99 "data//maps/MtMoon_B2F/scripts.pory"
	copyobjectxytoperm LOCALID_MIGUEL
# 100 "data//maps/MtMoon_B2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 101 "data//maps/MtMoon_B2F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 102 "data//maps/MtMoon_B2F/scripts.pory"
	message MtMoon_B2F_Text_ThenThisFossilIsMine
# 103 "data//maps/MtMoon_B2F/scripts.pory"
	waitmessage
# 104 "data//maps/MtMoon_B2F/scripts.pory"
	waitfanfare
# 105 "data//maps/MtMoon_B2F/scripts.pory"
	removeobject LOCALID_DOME_FOSSIL
# 106 "data//maps/MtMoon_B2F/scripts.pory"
	setflag FLAG_GOT_HELIX_FOSSIL
# 107 "data//maps/MtMoon_B2F/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
# 108 "data//maps/MtMoon_B2F/scripts.pory"
	release
# 109 "data//maps/MtMoon_B2F/scripts.pory"
	end
# 110 "data//maps/MtMoon_B2F/scripts.pory"

# 111 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_DontTakeFossil::
# 112 "data//maps/MtMoon_B2F/scripts.pory"
	release
# 113 "data//maps/MtMoon_B2F/scripts.pory"
	end
# 114 "data//maps/MtMoon_B2F/scripts.pory"

# 115 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_Movement_MiguelToDomeFossil::
# 116 "data//maps/MtMoon_B2F/scripts.pory"
	walk_up
# 117 "data//maps/MtMoon_B2F/scripts.pory"
	walk_up
# 118 "data//maps/MtMoon_B2F/scripts.pory"
	walk_up
# 119 "data//maps/MtMoon_B2F/scripts.pory"
	step_end
# 120 "data//maps/MtMoon_B2F/scripts.pory"

# 121 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_Grunt1::
# 122 "data//maps/MtMoon_B2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT, MtMoon_B2F_Text_Grunt1Intro, MtMoon_B2F_Text_Grunt1Defeat
# 123 "data//maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 124 "data//maps/MtMoon_B2F/scripts.pory"
	end
# 125 "data//maps/MtMoon_B2F/scripts.pory"

# 126 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_Grunt2::
# 127 "data//maps/MtMoon_B2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_2, MtMoon_B2F_Text_Grunt2Intro, MtMoon_B2F_Text_Grunt2Defeat
# 128 "data//maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 129 "data//maps/MtMoon_B2F/scripts.pory"
	end
# 130 "data//maps/MtMoon_B2F/scripts.pory"

# 131 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_Grunt3::
# 132 "data//maps/MtMoon_B2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_3, MtMoon_B2F_Text_Grunt3Intro, MtMoon_B2F_Text_Grunt3Defeat
# 133 "data//maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 134 "data//maps/MtMoon_B2F/scripts.pory"
	end
# 135 "data//maps/MtMoon_B2F/scripts.pory"

# 136 "data//maps/MtMoon_B2F/scripts.pory"
MtMoon_B2F_EventScript_Grunt4::
# 137 "data//maps/MtMoon_B2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_4, MtMoon_B2F_Text_Grunt4Intro, MtMoon_B2F_Text_Grunt4Defeat
# 138 "data//maps/MtMoon_B2F/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 139 "data//maps/MtMoon_B2F/scripts.pory"
	end
