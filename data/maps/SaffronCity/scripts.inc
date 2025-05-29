# 1 "data//maps/SaffronCity/scripts.pory"

# 2 "data//maps/SaffronCity/scripts.pory"
SaffronCity_MapScripts::
# 3 "data//maps/SaffronCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
# 4 "data//maps/SaffronCity/scripts.pory"
	.byte 0
# 5 "data//maps/SaffronCity/scripts.pory"

# 6 "data//maps/SaffronCity/scripts.pory"
SaffronCity_OnTransition::
# 7 "data//maps/SaffronCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFFRON_CITY
# 8 "data//maps/SaffronCity/scripts.pory"
	call_if_unset FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_MoveDoorGuardGrunt
# 9 "data//maps/SaffronCity/scripts.pory"
	end
# 10 "data//maps/SaffronCity/scripts.pory"

# 11 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_MoveDoorGuardGrunt::
# 12 "data//maps/SaffronCity/scripts.pory"
	setobjectxyperm LOCALID_SAFFRON_DOOR_GUARD_GRUNT, 33, 31
# 13 "data//maps/SaffronCity/scripts.pory"
	return
# 14 "data//maps/SaffronCity/scripts.pory"

# 15 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt1::
# 16 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WhatDoYouWantGetLost, MSGBOX_NPC
# 17 "data//maps/SaffronCity/scripts.pory"
	end
# 18 "data//maps/SaffronCity/scripts.pory"

# 19 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt2::
# 20 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_BossTakeTownForTeamRocket, MSGBOX_NPC
# 21 "data//maps/SaffronCity/scripts.pory"
	end
# 22 "data//maps/SaffronCity/scripts.pory"

# 23 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt3::
# 24 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_DontGetDefiantOrIllHurtYou, MSGBOX_NPC
# 25 "data//maps/SaffronCity/scripts.pory"
	end
# 26 "data//maps/SaffronCity/scripts.pory"

# 27 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt4::
# 28 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SaffronBelongsToTeamRocket, MSGBOX_NPC
# 29 "data//maps/SaffronCity/scripts.pory"
	end
# 30 "data//maps/SaffronCity/scripts.pory"

# 31 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt5::
# 32 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_CriminalLifeMakesMeFeelAlive, MSGBOX_NPC
# 33 "data//maps/SaffronCity/scripts.pory"
	end
# 34 "data//maps/SaffronCity/scripts.pory"

# 35 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt6::
# 36 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WatchWhereYoureWalking, MSGBOX_NPC
# 37 "data//maps/SaffronCity/scripts.pory"
	end
# 38 "data//maps/SaffronCity/scripts.pory"

# 39 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_RocketGrunt7::
# 40 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_WeCanExploitMonsAroundWorld, MSGBOX_NPC
# 41 "data//maps/SaffronCity/scripts.pory"
	end
# 42 "data//maps/SaffronCity/scripts.pory"

# 43 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DoorGuardGrunt::
# 44 "data//maps/SaffronCity/scripts.pory"
	lock
# 45 "data//maps/SaffronCity/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_DoorGuardAsleep
# 46 "data//maps/SaffronCity/scripts.pory"
	applymovement LOCALID_SAFFRON_DOOR_GUARD_GRUNT, Common_Movement_FacePlayer
# 47 "data//maps/SaffronCity/scripts.pory"
	waitmovement 0
# 48 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_ImASecurityGuard
# 49 "data//maps/SaffronCity/scripts.pory"
	release
# 50 "data//maps/SaffronCity/scripts.pory"
	end
# 51 "data//maps/SaffronCity/scripts.pory"

# 52 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DoorGuardAsleep::
# 53 "data//maps/SaffronCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 54 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_HesTakingASnooze
# 55 "data//maps/SaffronCity/scripts.pory"
	release
# 56 "data//maps/SaffronCity/scripts.pory"
	end
# 57 "data//maps/SaffronCity/scripts.pory"

# 58 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_WorkerM::
# 59 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_YouBeatTeamRocket, MSGBOX_NPC
# 60 "data//maps/SaffronCity/scripts.pory"
	end
# 61 "data//maps/SaffronCity/scripts.pory"

# 62 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Youngster::
# 63 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SafeToGoOutAgain, MSGBOX_NPC
# 64 "data//maps/SaffronCity/scripts.pory"
	end
# 65 "data//maps/SaffronCity/scripts.pory"

# 66 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Lass::
# 67 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_PeopleComingBackToSaffron, MSGBOX_NPC
# 68 "data//maps/SaffronCity/scripts.pory"
	end
# 69 "data//maps/SaffronCity/scripts.pory"

# 70 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Boy::
# 71 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FlewHereOnPidgeot, MSGBOX_NPC
# 72 "data//maps/SaffronCity/scripts.pory"
	end
# 73 "data//maps/SaffronCity/scripts.pory"

# 74 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Pidgeot::
# 75 "data//maps/SaffronCity/scripts.pory"
	lock
# 76 "data//maps/SaffronCity/scripts.pory"
	faceplayer
# 77 "data//maps/SaffronCity/scripts.pory"
	waitse
# 78 "data//maps/SaffronCity/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 79 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_Pidgeot
# 80 "data//maps/SaffronCity/scripts.pory"
	waitmoncry
# 81 "data//maps/SaffronCity/scripts.pory"
	release
# 82 "data//maps/SaffronCity/scripts.pory"
	end
# 83 "data//maps/SaffronCity/scripts.pory"

# 84 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_Man::
# 85 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SawRocketBossEscaping, MSGBOX_NPC
# 86 "data//maps/SaffronCity/scripts.pory"
	end
# 87 "data//maps/SaffronCity/scripts.pory"

# 88 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_CitySign::
# 89 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_CitySign, MSGBOX_SIGN
# 90 "data//maps/SaffronCity/scripts.pory"
	end
# 91 "data//maps/SaffronCity/scripts.pory"

# 92 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_DojoSign::
# 93 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FightingDojo, MSGBOX_SIGN
# 94 "data//maps/SaffronCity/scripts.pory"
	end
# 95 "data//maps/SaffronCity/scripts.pory"

# 96 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_GymSign::
# 97 "data//maps/SaffronCity/scripts.pory"
	lockall
# 98 "data//maps/SaffronCity/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 0
# 99 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_GymSign
# 100 "data//maps/SaffronCity/scripts.pory"
	releaseall
# 101 "data//maps/SaffronCity/scripts.pory"
	end
# 102 "data//maps/SaffronCity/scripts.pory"

# 103 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerTips1::
# 104 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_FullHealCuresStatus, MSGBOX_SIGN
# 105 "data//maps/SaffronCity/scripts.pory"
	end
# 106 "data//maps/SaffronCity/scripts.pory"

# 107 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerTips2::
# 108 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_GreatBallImprovedCatchRate, MSGBOX_SIGN
# 109 "data//maps/SaffronCity/scripts.pory"
	end
# 110 "data//maps/SaffronCity/scripts.pory"

# 111 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_SilphCoSign::
# 112 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
# 113 "data//maps/SaffronCity/scripts.pory"
	end
# 114 "data//maps/SaffronCity/scripts.pory"

# 115 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_MrPsychicsHouseSign::
# 116 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_MrPsychicsHouse, MSGBOX_SIGN
# 117 "data//maps/SaffronCity/scripts.pory"
	end
# 118 "data//maps/SaffronCity/scripts.pory"

# 119 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_SilphProductSign::
# 120 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_SilphsLatestProduct, MSGBOX_SIGN
# 121 "data//maps/SaffronCity/scripts.pory"
	end
# 122 "data//maps/SaffronCity/scripts.pory"

# 123 "data//maps/SaffronCity/scripts.pory"
SaffronCity_EventScript_TrainerFanClubSign::
# 124 "data//maps/SaffronCity/scripts.pory"
	msgbox SaffronCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 125 "data//maps/SaffronCity/scripts.pory"
	end
