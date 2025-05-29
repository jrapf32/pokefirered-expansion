# 1 "data//maps/ViridianCity_Gym/scripts.pory"

# 2 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_MapScripts::
# 3 "data//maps/ViridianCity_Gym/scripts.pory"
	.byte 0
# 4 "data//maps/ViridianCity_Gym/scripts.pory"

# 5 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Giovanni::
# 6 "data//maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data//maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_GIOVANNI, ViridianCity_Gym_Text_GiovanniIntro, ViridianCity_Gym_Text_GiovanniDefeat, ViridianCity_Gym_EventScript_DefeatedGiovanni, NO_MUSIC
# 8 "data//maps/ViridianCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM26_FROM_GIOVANNI, ViridianCity_Gym_EventScript_GiveTM26
# 9 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GiovanniPostBattle
# 10 "data//maps/ViridianCity_Gym/scripts.pory"
	closemessage
# 11 "data//maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 12 "data//maps/ViridianCity_Gym/scripts.pory"
	removeobject LOCALID_VIRIDIAN_GIOVANNI
# 13 "data//maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 14 "data//maps/ViridianCity_Gym/scripts.pory"
	release
# 15 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 16 "data//maps/ViridianCity_Gym/scripts.pory"

# 17 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_DefeatedGiovanni::
# 18 "data//maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 3
# 19 "data//maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MISC_KANTO_ROCKETS
# 20 "data//maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_LEADER_GIOVANNI
# 21 "data//maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 22 "data//maps/ViridianCity_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 3
# 23 "data//maps/ViridianCity_Gym/scripts.pory"
	set_gym_trainers 8
# 24 "data//maps/ViridianCity_Gym/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26
# 25 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 26 "data//maps/ViridianCity_Gym/scripts.pory"

# 27 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GiveTM26::
# 28 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis
# 29 "data//maps/ViridianCity_Gym/scripts.pory"
	checkitemspace ITEM_TM26
# 30 "data//maps/ViridianCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_Gym_EventScript_NoRoomForTM26
# 31 "data//maps/ViridianCity_Gym/scripts.pory"
	giveitem_msg ViridianCity_Gym_Text_ReceivedTM26FromGiovanni, ITEM_TM26
# 32 "data//maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM26_FROM_GIOVANNI
# 33 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainTM26
# 34 "data//maps/ViridianCity_Gym/scripts.pory"
	release
# 35 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 36 "data//maps/ViridianCity_Gym/scripts.pory"

# 37 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_NoRoomForTM26::
# 38 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
# 39 "data//maps/ViridianCity_Gym/scripts.pory"
	release
# 40 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 41 "data//maps/ViridianCity_Gym/scripts.pory"

# 42 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Jason::
# 43 "data//maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
# 44 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
# 45 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 46 "data//maps/ViridianCity_Gym/scripts.pory"

# 47 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Cole::
# 48 "data//maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Text_ColeIntro, ViridianCity_Gym_Text_ColeDefeat
# 49 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 50 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 51 "data//maps/ViridianCity_Gym/scripts.pory"

# 52 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Atsushi::
# 53 "data//maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
# 54 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
# 55 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 56 "data//maps/ViridianCity_Gym/scripts.pory"

# 57 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Kiyo::
# 58 "data//maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
# 59 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
# 60 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 61 "data//maps/ViridianCity_Gym/scripts.pory"

# 62 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Takashi::
# 63 "data//maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
# 64 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 65 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 66 "data//maps/ViridianCity_Gym/scripts.pory"

# 67 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Samuel::
# 68 "data//maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
# 69 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 70 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 71 "data//maps/ViridianCity_Gym/scripts.pory"

# 72 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Yuji::
# 73 "data//maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
# 74 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 75 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 76 "data//maps/ViridianCity_Gym/scripts.pory"

# 77 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Warren::
# 78 "data//maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
# 79 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
# 80 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 81 "data//maps/ViridianCity_Gym/scripts.pory"

# 82 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymGuy::
# 83 "data//maps/ViridianCity_Gym/scripts.pory"
	lock
# 84 "data//maps/ViridianCity_Gym/scripts.pory"
	faceplayer
# 85 "data//maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_EventScript_GymGuyPostVictory
# 86 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
# 87 "data//maps/ViridianCity_Gym/scripts.pory"
	release
# 88 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 89 "data//maps/ViridianCity_Gym/scripts.pory"

# 90 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymGuyPostVictory::
# 91 "data//maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 4
# 92 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
# 93 "data//maps/ViridianCity_Gym/scripts.pory"
	release
# 94 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 95 "data//maps/ViridianCity_Gym/scripts.pory"

# 96 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymStatue::
# 97 "data//maps/ViridianCity_Gym/scripts.pory"
	lockall
# 98 "data//maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
# 99 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatue
# 100 "data//maps/ViridianCity_Gym/scripts.pory"
	releaseall
# 101 "data//maps/ViridianCity_Gym/scripts.pory"
	end
# 102 "data//maps/ViridianCity_Gym/scripts.pory"

# 103 "data//maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymStatuePostVictory::
# 104 "data//maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
# 105 "data//maps/ViridianCity_Gym/scripts.pory"
	releaseall
# 106 "data//maps/ViridianCity_Gym/scripts.pory"
	end
