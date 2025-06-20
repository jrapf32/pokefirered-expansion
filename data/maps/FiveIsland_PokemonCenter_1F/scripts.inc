# 1 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"

# 2 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
FiveIsland_PokemonCenter_1F_MapScripts::
# 3 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_PokemonCenter_1F_OnTransition
# 4 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"

# 7 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
FiveIsland_PokemonCenter_1F_OnTransition::
# 8 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FIVE_ISLAND
# 9 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	end
# 10 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"

# 11 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	release
# 16 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	end
# 17 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"

# 18 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_Chef::
# 19 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal, MSGBOX_NPC
# 20 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	end
# 21 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"

# 22 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 23 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon, MSGBOX_NPC
# 24 "data//maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	end
