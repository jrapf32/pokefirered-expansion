# 1 "data//maps/CeruleanCave_B1F/scripts.pory"

# 2 "data//maps/CeruleanCave_B1F/scripts.pory"
CeruleanCave_B1F_MapScripts::
# 3 "data//maps/CeruleanCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CeruleanCave_B1F_OnResume
# 4 "data//maps/CeruleanCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCave_B1F_OnTransition
# 5 "data//maps/CeruleanCave_B1F/scripts.pory"
	.byte 0
# 6 "data//maps/CeruleanCave_B1F/scripts.pory"

# 7 "data//maps/CeruleanCave_B1F/scripts.pory"
CeruleanCave_B1F_OnResume::
# 8 "data//maps/CeruleanCave_B1F/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, CeruleanCave_B1F_EventScript_TryRemoveMewtwo
# 9 "data//maps/CeruleanCave_B1F/scripts.pory"
	end
# 10 "data//maps/CeruleanCave_B1F/scripts.pory"

# 11 "data//maps/CeruleanCave_B1F/scripts.pory"
CeruleanCave_B1F_EventScript_TryRemoveMewtwo::
# 12 "data//maps/CeruleanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data//maps/CeruleanCave_B1F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 14 "data//maps/CeruleanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data//maps/CeruleanCave_B1F/scripts.pory"
	return
# 16 "data//maps/CeruleanCave_B1F/scripts.pory"

# 17 "data//maps/CeruleanCave_B1F/scripts.pory"
CeruleanCave_B1F_OnTransition::
# 18 "data//maps/CeruleanCave_B1F/scripts.pory"
	call_if_unset FLAG_FOUGHT_MEWTWO, CeruleanCave_B1F_EventScript_ShowMewtwo
# 19 "data//maps/CeruleanCave_B1F/scripts.pory"
	end
# 20 "data//maps/CeruleanCave_B1F/scripts.pory"

# 21 "data//maps/CeruleanCave_B1F/scripts.pory"
CeruleanCave_B1F_EventScript_ShowMewtwo::
# 22 "data//maps/CeruleanCave_B1F/scripts.pory"
	clearflag FLAG_HIDE_MEWTWO
# 23 "data//maps/CeruleanCave_B1F/scripts.pory"
	return
# 24 "data//maps/CeruleanCave_B1F/scripts.pory"

# 25 "data//maps/CeruleanCave_B1F/scripts.pory"
CeruleanCave_B1F_EventScript_Mewtwo::
# 26 "data//maps/CeruleanCave_B1F/scripts.pory"
	
# 27 "data//maps/CeruleanCave_B1F/scripts.pory"
	lock
# 28 "data//maps/CeruleanCave_B1F/scripts.pory"
	faceplayer
# 29 "data//maps/CeruleanCave_B1F/scripts.pory"
	waitse
# 30 "data//maps/CeruleanCave_B1F/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 31 "data//maps/CeruleanCave_B1F/scripts.pory"
	message CeruleanCave_B1F_Text_Mew
# 32 "data//maps/CeruleanCave_B1F/scripts.pory"
	waitmessage
# 33 "data//maps/CeruleanCave_B1F/scripts.pory"
	waitmoncry
# 34 "data//maps/CeruleanCave_B1F/scripts.pory"
	delay 20
# 35 "data//maps/CeruleanCave_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 36 "data//maps/CeruleanCave_B1F/scripts.pory"
	waitbuttonpress
# 37 "data//maps/CeruleanCave_B1F/scripts.pory"
	setwildbattle SPECIES_MEWTWO, 70
# 38 "data//maps/CeruleanCave_B1F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 39 "data//maps/CeruleanCave_B1F/scripts.pory"
	special StartLegendaryBattle
# 40 "data//maps/CeruleanCave_B1F/scripts.pory"
	waitstate
# 41 "data//maps/CeruleanCave_B1F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 42 "data//maps/CeruleanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 43 "data//maps/CeruleanCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CeruleanCave_B1F_EventScript_DefeatedMewtwo
# 44 "data//maps/CeruleanCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CeruleanCave_B1F_EventScript_RanFromMewtwo
# 45 "data//maps/CeruleanCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CeruleanCave_B1F_EventScript_RanFromMewtwo
# 46 "data//maps/CeruleanCave_B1F/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
# 47 "data//maps/CeruleanCave_B1F/scripts.pory"
	release
# 48 "data//maps/CeruleanCave_B1F/scripts.pory"
	end
# 49 "data//maps/CeruleanCave_B1F/scripts.pory"

# 50 "data//maps/CeruleanCave_B1F/scripts.pory"
CeruleanCave_B1F_EventScript_DefeatedMewtwo::
# 51 "data//maps/CeruleanCave_B1F/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
# 52 "data//maps/CeruleanCave_B1F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 53 "data//maps/CeruleanCave_B1F/scripts.pory"
	end
# 54 "data//maps/CeruleanCave_B1F/scripts.pory"

# 55 "data//maps/CeruleanCave_B1F/scripts.pory"
CeruleanCave_B1F_EventScript_RanFromMewtwo::
# 56 "data//maps/CeruleanCave_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEWTWO
# 57 "data//maps/CeruleanCave_B1F/scripts.pory"
	goto EventScript_MonFlewAway
# 58 "data//maps/CeruleanCave_B1F/scripts.pory"
	end
