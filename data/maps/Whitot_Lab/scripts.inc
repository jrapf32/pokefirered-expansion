Whitot_Lab_MapScripts::
	.byte 0


AlreayHasPokemon::
# 5 "data//maps/Whitot_Lab/scripts.pory"
	msgbox AlreayHasPokemon_Text_0
# 6 "data//maps/Whitot_Lab/scripts.pory"
	releaseall
	end


Whitot_Lab_BALL4::
# 12 "data//maps/Whitot_Lab/scripts.pory"
	lockall
# 13 "data//maps/Whitot_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Whitot_Lab_BALL4_2
Whitot_Lab_BALL4_1:
# 16 "data//maps/Whitot_Lab/scripts.pory"
	showmonpic SPECIES_HOPPIP, 10, 3
# 17 "data//maps/Whitot_Lab/scripts.pory"
	msgbox Whitot_Lab_BALL4_Text_0, MSGBOX_YESNO
# 18 "data//maps/Whitot_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Whitot_Lab_BALL4_5
# 33 "data//maps/Whitot_Lab/scripts.pory"
	msgbox Whitot_Lab_BALL4_Text_2
Whitot_Lab_BALL4_4:
# 35 "data//maps/Whitot_Lab/scripts.pory"
	releaseall
	end

Whitot_Lab_BALL4_2:
# 14 "data//maps/Whitot_Lab/scripts.pory"
	goto AlreayHasPokemon
	goto Whitot_Lab_BALL4_1

Whitot_Lab_BALL4_5:
# 19 "data//maps/Whitot_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 20 "data//maps/Whitot_Lab/scripts.pory"
	givemon SPECIES_HOPPIP, 5
# 21 "data//maps/Whitot_Lab/scripts.pory"
	msgbox Whitot_Lab_BALL4_Text_1, MSGBOX_YESNO
# 22 "data//maps/Whitot_Lab/scripts.pory"
	waitmessage
# 23 "data//maps/Whitot_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 24 "data//maps/Whitot_Lab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Whitot_Lab_BALL4_8
	goto Whitot_Lab_BALL4_4

Whitot_Lab_BALL4_8:
# 25 "data//maps/Whitot_Lab/scripts.pory"
	releaseall
# 26 "data//maps/Whitot_Lab/scripts.pory"
	setvar VAR_0x8004, 0
# 28 "data//maps/Whitot_Lab/scripts.pory"
	call EventScript_ChangePokemonNickname
	goto Whitot_Lab_BALL4_4


Whitot_Lab_BALL3::
# 40 "data//maps/Whitot_Lab/scripts.pory"
	lockall
# 41 "data//maps/Whitot_Lab/scripts.pory"
	msgbox Whitot_Lab_BALL3_Text_0, MSGBOX_YESNO
# 42 "data//maps/Whitot_Lab/scripts.pory"
	waitmessage
# 43 "data//maps/Whitot_Lab/scripts.pory"
	releaseall
	end


Whitot_Lab_BALL2::
# 48 "data//maps/Whitot_Lab/scripts.pory"
	lockall
# 49 "data//maps/Whitot_Lab/scripts.pory"
	msgbox Whitot_Lab_BALL2_Text_0, MSGBOX_YESNO
# 50 "data//maps/Whitot_Lab/scripts.pory"
	waitmessage
# 51 "data//maps/Whitot_Lab/scripts.pory"
	releaseall
	end


Whitot_Lab_BALL1::
# 57 "data//maps/Whitot_Lab/scripts.pory"
	lockall
# 58 "data//maps/Whitot_Lab/scripts.pory"
	msgbox Whitot_Lab_BALL1_Text_0, MSGBOX_YESNO
# 59 "data//maps/Whitot_Lab/scripts.pory"
	waitmessage
# 60 "data//maps/Whitot_Lab/scripts.pory"
	releaseall
	end


AlreayHasPokemon_Text_0:
# 5 "data//maps/Whitot_Lab/scripts.pory"
	.string "I already have a Pokémon!\p"
	.string "What am I thinking?$"

Whitot_Lab_BALL4_Text_0:
# 17 "data//maps/Whitot_Lab/scripts.pory"
	.string "This is the Pokémon Hoppip!\n"
	.string "Would you like it?$"

Whitot_Lab_BALL4_Text_1:
# 21 "data//maps/Whitot_Lab/scripts.pory"
	.string "Got the Pokémon Hoppip!\n"
	.string "Would you like to name it?$"

Whitot_Lab_BALL4_Text_2:
# 33 "data//maps/Whitot_Lab/scripts.pory"
	.string "You should look at different choices!$"

Whitot_Lab_BALL3_Text_0:
# 41 "data//maps/Whitot_Lab/scripts.pory"
	.string "This is the Pokémon Hoothoot!\n"
	.string "Would you like it?$"

Whitot_Lab_BALL2_Text_0:
# 49 "data//maps/Whitot_Lab/scripts.pory"
	.string "This is the Pokémon Wingull!\n"
	.string "Would you like it?$"

Whitot_Lab_BALL1_Text_0:
# 58 "data//maps/Whitot_Lab/scripts.pory"
	.string "This is the Pokémon Spheal\n"
	.string "Would you like it?$"
