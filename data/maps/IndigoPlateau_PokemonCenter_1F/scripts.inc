# 1 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 2 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_MapScripts::
# 3 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
# 4 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 7 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_OnTransition::
# 8 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU
# 9 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 10 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor
# 11 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 12 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 13 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor::
# 14 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, EventScript_Return
# 15 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_DOOR_GUARD, 4, 2
# 16 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	return
# 17 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 18 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
# 19 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 22 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete
# 23 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 24 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 25 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 26 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 27 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete::
# 28 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete
# 29 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing
# 30 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 31 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 32 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 33 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete::
# 34 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 35 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 36 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 37 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 38 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
# 39 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
# 40 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 41 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 42 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
# 43 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 44 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 45 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	message Text_MayIHelpYou
# 46 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	waitmessage
# 47 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	pokemart IndigoPlateau_PokemonCenter_1F_Items
# 48 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 49 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 50 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 51 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 52 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.align 2
# 53 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Items::
# 54 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 55 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 56 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 57 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 58 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 59 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 60 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 61 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_NONE
# 62 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 63 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 64 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 65 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
# 66 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 67 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 68 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 69 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 70 "data//maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
