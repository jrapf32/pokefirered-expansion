PlayersHouse_MapScripts::
	.byte 0


PlayersHouse_OnTransition::
# 6 "data//maps/PlayersHouse/scripts.pory"
	setrespawn HEAL_LOCATION_INMALD_TOWN
	end


PlayerHouse_GetRunningShoes::
# 11 "data//maps/PlayersHouse/scripts.pory"
	goto_if_set FLAG_SYS_B_DASH, PlayerHouse_GetRunningShoes_2
# 15 "data//maps/PlayersHouse/scripts.pory"
	lockall
# 16 "data//maps/PlayersHouse/scripts.pory"
	applymovement 1, PlayerHouse_DadMoveMentToPlayer
# 17 "data//maps/PlayersHouse/scripts.pory"
	waitmovement
# 18 "data//maps/PlayersHouse/scripts.pory"
	msgbox PlayerHouse_GetRunningShoes_Text_0
# 24 "data//maps/PlayersHouse/scripts.pory"
	release
# 25 "data//maps/PlayersHouse/scripts.pory"
	waitmessage
# 26 "data//maps/PlayersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 27 "data//maps/PlayersHouse/scripts.pory"
	msgbox PlayerHouse_GetRunningShoes_Text_1
# 28 "data//maps/PlayersHouse/scripts.pory"
	release
# 29 "data//maps/PlayersHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 30 "data//maps/PlayersHouse/scripts.pory"
	waitmessage
# 31 "data//maps/PlayersHouse/scripts.pory"
	applymovement 1, PlayerHouse_DadMoveBackFromPlayer
# 32 "data//maps/PlayersHouse/scripts.pory"
	waitmovement
# 33 "data//maps/PlayersHouse/scripts.pory"
	releaseall
	return

PlayerHouse_GetRunningShoes_2:
# 12 "data//maps/PlayersHouse/scripts.pory"
	release
	end


# 37 "data//maps/PlayersHouse/scripts.pory"
PlayerHouse_DadMoveMentToPlayer:
# 38 "data//maps/PlayersHouse/scripts.pory"
	face_down
# 39 "data//maps/PlayersHouse/scripts.pory"
	walk_down
# 40 "data//maps/PlayersHouse/scripts.pory"
	face_left
# 41 "data//maps/PlayersHouse/scripts.pory"
	walk_left
	step_end

# 44 "data//maps/PlayersHouse/scripts.pory"
PlayerHouse_DadMoveBackFromPlayer:
# 45 "data//maps/PlayersHouse/scripts.pory"
	face_right
# 46 "data//maps/PlayersHouse/scripts.pory"
	walk_right
# 47 "data//maps/PlayersHouse/scripts.pory"
	face_up
# 48 "data//maps/PlayersHouse/scripts.pory"
	walk_up
# 49 "data//maps/PlayersHouse/scripts.pory"
	face_right
	step_end

PlayerHouse_TalkToDad::
# 54 "data//maps/PlayersHouse/scripts.pory"
	lockall
# 55 "data//maps/PlayersHouse/scripts.pory"
	face_player
# 56 "data//maps/PlayersHouse/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, PlayerHouse_TalkToDad_2
# 70 "data//maps/PlayersHouse/scripts.pory"
	msgbox PlayerHouse_TalkToDad_Text_1
PlayerHouse_TalkToDad_1:
# 72 "data//maps/PlayersHouse/scripts.pory"
	releaseall
# 73 "data//maps/PlayersHouse/scripts.pory"
	face_left
	return

PlayerHouse_TalkToDad_2:
# 57 "data//maps/PlayersHouse/scripts.pory"
	msgbox PlayerHouse_TalkToDad_Text_0
# 58 "data//maps/PlayersHouse/scripts.pory"
	waitmessage
# 59 "data//maps/PlayersHouse/scripts.pory"
	fadescreen 1
# 60 "data//maps/PlayersHouse/scripts.pory"
	waitmessage
# 61 "data//maps/PlayersHouse/scripts.pory"
	playfanfare MUS_HEAL
# 62 "data//maps/PlayersHouse/scripts.pory"
	waitfanfare
# 63 "data//maps/PlayersHouse/scripts.pory"
	special HealPlayerParty
# 64 "data//maps/PlayersHouse/scripts.pory"
	fadescreen 0
# 65 "data//maps/PlayersHouse/scripts.pory"
	waitmessage
	goto PlayerHouse_TalkToDad_1


PlayerHouse_GetRunningShoes_Text_0:
# 18 "data//maps/PlayersHouse/scripts.pory"
	.string "I see you are done doing what ever\n"
	.string "you kids do the days!\p"
	.string "Professor Tamarind is waiting to give\n"
	.string "you your Pokémon!\p"
	.string "You should really see him!\p"
	.string "Your running shoes came today! The\n"
	.string "instructions say to Press B while\l"
	.string "walking to run in them.\p"
	.string "Here they are!$"

PlayerHouse_GetRunningShoes_Text_1:
# 27 "data//maps/PlayersHouse/scripts.pory"
	.string "Got the running shoes!$"

PlayerHouse_TalkToDad_Text_0:
# 57 "data//maps/PlayersHouse/scripts.pory"
	.string "That's a nice Pokémon! \p You look tired let \n me heal you up!$"

PlayerHouse_TalkToDad_Text_1:
# 70 "data//maps/PlayersHouse/scripts.pory"
	.string "What are you waiting for? \pGet a new Pokémon!$"
