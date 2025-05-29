# 1 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 2 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_MapScripts::
# 3 "data//maps/CinnabarIsland_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CinnabarIsland_Gym_OnLoad
# 4 "data//maps/CinnabarIsland_Gym/scripts.pory"
	.byte 0
# 5 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 6 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoad::
# 7 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_OnLoadOpenAllDoors
# 8 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_OnLoadOpenDoor1
# 9 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_OnLoadOpenDoor2
# 10 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_OnLoadOpenDoor3
# 11 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_OnLoadOpenDoor4
# 12 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_OnLoadOpenDoor5
# 13 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_OnLoadOpenDoor6
# 14 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 15 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 16 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenAllDoors::
# 17 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 18 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 19 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 20 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 21 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 22 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 23 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 24 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 25 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor1::
# 26 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 27 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 28 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 29 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor2::
# 30 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 31 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 32 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 33 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor3::
# 34 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 35 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 36 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 37 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor4::
# 38 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 39 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 40 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 41 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor5::
# 42 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 43 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 44 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 45 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor6::
# 46 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 47 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 48 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 49 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Blaine::
# 50 "data//maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 51 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE, CinnabarIsland_Gym_Text_BlaineIntro, CinnabarIsland_Gym_Text_BlaineDefeat, CinnabarIsland_Gym_EventScript_DefeatedBlaine, NO_MUSIC
# 52 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM38_FROM_BLAINE, CinnabarIsland_Gym_EventScript_GiveTM38
# 53 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostBattle
# 54 "data//maps/CinnabarIsland_Gym/scripts.pory"
	release
# 55 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 56 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 57 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedBlaine::
# 58 "data//maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 1
# 59 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_DEFEATED_BLAINE
# 60 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 61 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
# 62 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 1
# 63 "data//maps/CinnabarIsland_Gym/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 64 "data//maps/CinnabarIsland_Gym/scripts.pory"
	set_gym_trainers 7
# 65 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
# 66 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 67 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 68 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GiveTM38::
# 69 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ExplainVolcanoBadge
# 70 "data//maps/CinnabarIsland_Gym/scripts.pory"
	checkitemspace ITEM_TM38
# 71 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CinnabarIsland_Gym_EventScript_NoRoomForTM38
# 72 "data//maps/CinnabarIsland_Gym/scripts.pory"
	giveitem_msg CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine, ITEM_TM38
# 73 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GOT_TM38_FROM_BLAINE
# 74 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove
# 75 "data//maps/CinnabarIsland_Gym/scripts.pory"
	release
# 76 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 77 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 78 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_NoRoomForTM38::
# 79 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_MakeSpaceForThis
# 80 "data//maps/CinnabarIsland_Gym/scripts.pory"
	release
# 81 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 82 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 83 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Erik::
# 84 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Text_ErikIntro, CinnabarIsland_Gym_Text_ErikDefeat
# 85 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
# 86 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 87 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 88 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Avery::
# 89 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryIntro, CinnabarIsland_Gym_Text_AveryDefeat, CinnabarIsland_Gym_EventScript_DefeatedAvery
# 90 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
# 91 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 92 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 93 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedAvery::
# 94 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer
# 95 "data//maps/CinnabarIsland_Gym/scripts.pory"
	release
# 96 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 97 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 98 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer::
# 99 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 100 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 101 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 102 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Derek::
# 103 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekIntro, CinnabarIsland_Gym_Text_DerekDefeat, CinnabarIsland_Gym_EventScript_DefeatedDerek
# 104 "data//maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 2
# 105 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 106 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 107 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 108 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDerek::
# 109 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer
# 110 "data//maps/CinnabarIsland_Gym/scripts.pory"
	release
# 111 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 112 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 113 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer::
# 114 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 115 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 116 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 117 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Zac::
# 118 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacIntro, CinnabarIsland_Gym_Text_ZacDefeat, CinnabarIsland_Gym_EventScript_DefeatedZac
# 119 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
# 120 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 121 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 122 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedZac::
# 123 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer
# 124 "data//maps/CinnabarIsland_Gym/scripts.pory"
	release
# 125 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 126 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 127 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer::
# 128 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 129 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 130 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 131 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quinn::
# 132 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnIntro, CinnabarIsland_Gym_Text_QuinnDefeat, CinnabarIsland_Gym_EventScript_DefeatedQuinn
# 133 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
# 134 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 135 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 136 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedQuinn::
# 137 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer
# 138 "data//maps/CinnabarIsland_Gym/scripts.pory"
	release
# 139 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 140 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 141 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer::
# 142 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 143 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 144 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 145 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Ramon::
# 146 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonIntro, CinnabarIsland_Gym_Text_RamonDefeat, CinnabarIsland_Gym_EventScript_DefeatedRamon
# 147 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
# 148 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 149 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 150 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedRamon::
# 151 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer
# 152 "data//maps/CinnabarIsland_Gym/scripts.pory"
	release
# 153 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 154 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 155 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer::
# 156 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 157 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 158 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 159 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Dusty::
# 160 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyIntro, CinnabarIsland_Gym_Text_DustyDefeat, CinnabarIsland_Gym_EventScript_DefeatedDusty
# 161 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
# 162 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 163 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 164 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDusty::
# 165 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer
# 166 "data//maps/CinnabarIsland_Gym/scripts.pory"
	release
# 167 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 168 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 169 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer::
# 170 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 171 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 172 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 173 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuy::
# 174 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lock
# 175 "data//maps/CinnabarIsland_Gym/scripts.pory"
	faceplayer
# 176 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_EventScript_GymGuyPostVictory
# 177 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyAdvice
# 178 "data//maps/CinnabarIsland_Gym/scripts.pory"
	release
# 179 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 180 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 181 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuyPostVictory::
# 182 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyPostVictory
# 183 "data//maps/CinnabarIsland_Gym/scripts.pory"
	release
# 184 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 185 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 186 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatue::
# 187 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 188 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_EventScript_GymStatuePostVictory
# 189 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatue
# 190 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 191 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 192 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 193 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatuePostVictory::
# 194 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatuePlayerWon
# 195 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 196 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 197 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 198 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Left::
# 199 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 200 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 201 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 202 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 203 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 204 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Right::
# 205 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 206 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 207 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 208 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 209 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 210 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1::
# 211 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 212 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
# 213 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz1Correct
# 214 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz1Incorrect
# 215 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 216 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 217 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_CorrectAnswer::
# 218 "data//maps/CinnabarIsland_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 219 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitfanfare
# 220 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
# 221 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 222 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 223 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_IncorrectAnswer::
# 224 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 225 "data//maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_BOO
# 226 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 227 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
# 228 "data//maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 229 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 230 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 231 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Correct::
# 232 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 233 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 234 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 235 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 236 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 237 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 238 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Complete::
# 239 "data//maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 240 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 241 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 242 "data//maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 243 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_1
# 244 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 245 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 246 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DoorAlreadyOpen::
# 247 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 248 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 249 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 250 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Incorrect::
# 251 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 252 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_EventScript_BattleQuinn
# 253 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 254 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 255 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 256 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn::
# 257 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_QuinnApproachLeft
# 258 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_QuinnApproachRight
# 259 "data//maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 260 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnIntro
# 261 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnDefeat
# 262 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 263 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 264 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 265 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 266 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 267 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachLeft::
# 268 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 269 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachLeft
# 270 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 271 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 272 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 273 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachRight::
# 274 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 275 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachRight
# 276 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 277 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 278 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 279 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachLeft::
# 280 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 281 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 282 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 283 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 284 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachRight::
# 285 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 286 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 287 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 288 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Left::
# 289 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 290 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 291 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 292 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 293 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 294 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Right::
# 295 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 296 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 297 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 298 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 299 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 300 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2::
# 301 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 302 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
# 303 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz2Incorrect
# 304 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz2Correct
# 305 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 306 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 307 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Correct::
# 308 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 309 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 310 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 311 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 312 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 313 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 314 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Complete::
# 315 "data//maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 316 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 317 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 318 "data//maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 319 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_2
# 320 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 321 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 322 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Incorrect::
# 323 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 324 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_EventScript_BattleAvery
# 325 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 326 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 327 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 328 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery::
# 329 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_AveryApproachLeft
# 330 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_AveryApproachRight
# 331 "data//maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 332 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryIntro
# 333 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryDefeat
# 334 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 335 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 336 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 337 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 338 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 339 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachLeft::
# 340 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 341 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachLeft
# 342 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 343 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 344 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 345 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachRight::
# 346 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 347 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachRight
# 348 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 349 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 350 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 351 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachLeft::
# 352 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 353 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 354 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 355 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 356 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 357 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachRight::
# 358 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 359 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 360 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_left
# 361 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 362 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 363 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_PlayerFaceAvery::
# 364 "data//maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 365 "data//maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 366 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_right
# 367 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 368 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 369 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Left::
# 370 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 371 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 372 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 373 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 374 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 375 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Right::
# 376 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 377 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 378 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 379 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 380 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 381 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3::
# 382 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 383 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion3, MSGBOX_YESNO
# 384 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz3Incorrect
# 385 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz3Correct
# 386 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 387 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 388 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Correct::
# 389 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 390 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 391 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 392 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 393 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 394 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 395 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Complete::
# 396 "data//maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 397 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 398 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 399 "data//maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 400 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_3
# 401 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 402 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 403 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Incorrect::
# 404 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 405 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_EventScript_BattleRamon
# 406 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 407 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 408 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 409 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon::
# 410 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_RamonApproachLeft
# 411 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_RamonApproachRight
# 412 "data//maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 413 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonIntro
# 414 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonDefeat
# 415 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 416 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 417 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 418 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 419 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 420 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachLeft::
# 421 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 422 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachLeft
# 423 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 424 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 425 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 426 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachRight::
# 427 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 428 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachRight
# 429 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 430 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 431 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 432 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachLeft::
# 433 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 434 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 435 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 436 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 437 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachRight::
# 438 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 439 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 440 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 441 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Left::
# 442 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 443 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 444 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 445 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 446 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 447 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Right::
# 448 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 449 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 450 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 451 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 452 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 453 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4::
# 454 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 455 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion4, MSGBOX_YESNO
# 456 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz4Incorrect
# 457 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz4Correct
# 458 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 459 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 460 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Correct::
# 461 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 462 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 463 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 464 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 465 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 466 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 467 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Complete::
# 468 "data//maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 469 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 470 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 471 "data//maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 472 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_4
# 473 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 474 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 475 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Incorrect::
# 476 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 477 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_EventScript_BattleDerek
# 478 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 479 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 480 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 481 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek::
# 482 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DerekApproachLeft
# 483 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DerekApproachRight
# 484 "data//maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 485 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekIntro
# 486 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekDefeat
# 487 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 488 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 489 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 490 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 491 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 492 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachLeft::
# 493 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 494 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachLeft
# 495 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 496 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 497 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 498 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachRight::
# 499 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 500 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachRight
# 501 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 502 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 503 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 504 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachLeft::
# 505 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 506 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 507 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 508 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 509 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachRight::
# 510 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 511 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 512 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 513 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Left::
# 514 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 515 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 516 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 517 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 518 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 519 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Right::
# 520 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 521 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 522 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 523 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 524 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 525 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5::
# 526 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 527 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion5, MSGBOX_YESNO
# 528 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz5Correct
# 529 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz5Incorrect
# 530 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 531 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 532 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Correct::
# 533 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 534 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 535 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 536 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 537 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 538 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 539 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Complete::
# 540 "data//maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 541 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 542 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 543 "data//maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 544 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_5
# 545 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 546 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 547 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Incorrect::
# 548 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 549 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_EventScript_BattleDusty
# 550 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 551 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 552 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 553 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty::
# 554 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DustyApproachLeft
# 555 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DustyApproachRight
# 556 "data//maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 557 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyIntro
# 558 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyDefeat
# 559 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 560 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 561 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 562 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 563 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 564 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachLeft::
# 565 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 566 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachLeft
# 567 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 568 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 569 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 570 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachRight::
# 571 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 572 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachRight
# 573 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 574 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 575 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 576 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachLeft::
# 577 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 578 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 579 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 580 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 581 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachRight::
# 582 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 583 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 584 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 585 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Left::
# 586 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 587 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 588 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 589 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 590 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 591 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Right::
# 592 "data//maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 593 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 594 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 595 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 596 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 597 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6::
# 598 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 599 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion6, MSGBOX_YESNO
# 600 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz6Incorrect
# 601 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz6Correct
# 602 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 603 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 604 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Correct::
# 605 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 606 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 607 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 608 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 609 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 610 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 611 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Complete::
# 612 "data//maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 613 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 614 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 615 "data//maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 616 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_6
# 617 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 618 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 619 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Incorrect::
# 620 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 621 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_EventScript_BattleZac
# 622 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 623 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 624 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 625 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac::
# 626 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_ZacApproachLeft
# 627 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_ZacApproachRight
# 628 "data//maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 629 "data//maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacIntro
# 630 "data//maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacDefeat
# 631 "data//maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 632 "data//maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 633 "data//maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 634 "data//maps/CinnabarIsland_Gym/scripts.pory"
	end
# 635 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 636 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachLeft::
# 637 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 638 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachLeft
# 639 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 640 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 641 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 642 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachRight::
# 643 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 644 "data//maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachRight
# 645 "data//maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 646 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 647 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 648 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachLeft::
# 649 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 650 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 651 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 652 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 653 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachRight::
# 654 "data//maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 655 "data//maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 656 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 657 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor1::
# 658 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 659 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 660 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 661 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 662 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 663 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
# 664 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 665 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 666 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 667 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor2::
# 668 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 669 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 670 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 671 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 672 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 673 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
# 674 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 675 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 676 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 677 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor3::
# 678 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 679 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 680 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 681 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 682 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 683 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
# 684 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 685 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 686 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 687 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor4::
# 688 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
# 689 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 690 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
# 691 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 692 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 693 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor5::
# 694 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 695 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 696 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 697 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 698 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 699 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 18, METATILE_CinnabarGym_Floor, 0
# 700 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 701 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
# 702 "data//maps/CinnabarIsland_Gym/scripts.pory"

# 703 "data//maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor6::
# 704 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 705 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 706 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 707 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 708 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 709 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 10, METATILE_CinnabarGym_Floor, 0
# 710 "data//maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 711 "data//maps/CinnabarIsland_Gym/scripts.pory"
	return
