Inmald_Town_MapScripts::
# 2 "data//maps/Inmald_Town/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PlayersHouse_OnTransition
# 3 "data//maps/Inmald_Town/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnResume
	.byte 0


Whitot_Town_TechGuy::
# 12 "data//maps/Inmald_Town/scripts.pory"
	lockall
# 13 "data//maps/Inmald_Town/scripts.pory"
	faceplayer
# 14 "data//maps/Inmald_Town/scripts.pory"
	msgbox Whitot_Town_TechGuyText
# 15 "data//maps/Inmald_Town/scripts.pory"
	releaseall
	end


Whitot_Town_Has_No_Pokemon_Blocker_Tile_1::
# 24 "data//maps/Inmald_Town/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Whitot_Town_Has_No_Pokemon_Blocker_Tile_1_2
# 38 "data//maps/Inmald_Town/scripts.pory"
	releaseall
Whitot_Town_Has_No_Pokemon_Blocker_Tile_1_1:
	end

Whitot_Town_Has_No_Pokemon_Blocker_Tile_1_2:
# 25 "data//maps/Inmald_Town/scripts.pory"
	lockall
# 26 "data//maps/Inmald_Town/scripts.pory"
	applymovement 4, Woman_first_tile
# 27 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 28 "data//maps/Inmald_Town/scripts.pory"
	msgbox Whitot_Town_cant_go_out_text
# 29 "data//maps/Inmald_Town/scripts.pory"
	releaseall
# 30 "data//maps/Inmald_Town/scripts.pory"
	lockall
# 31 "data//maps/Inmald_Town/scripts.pory"
	applymovement 4, Woman_first_tile_back
# 32 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 33 "data//maps/Inmald_Town/scripts.pory"
	applymovement 255, Whitot_Town_Player_walk_up
# 34 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 35 "data//maps/Inmald_Town/scripts.pory"
	releaseall
	goto Whitot_Town_Has_No_Pokemon_Blocker_Tile_1_1


Whitot_Town_Has_No_Pokemon_Blocker_Tile_2::
# 44 "data//maps/Inmald_Town/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Whitot_Town_Has_No_Pokemon_Blocker_Tile_2_2
# 60 "data//maps/Inmald_Town/scripts.pory"
	releaseall
Whitot_Town_Has_No_Pokemon_Blocker_Tile_2_1:
	end

Whitot_Town_Has_No_Pokemon_Blocker_Tile_2_2:
# 45 "data//maps/Inmald_Town/scripts.pory"
	lockall
# 46 "data//maps/Inmald_Town/scripts.pory"
	applymovement 4, Woman_second_tile
# 47 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 48 "data//maps/Inmald_Town/scripts.pory"
	msgbox Whitot_Town_cant_go_out_text
# 49 "data//maps/Inmald_Town/scripts.pory"
	releaseall
# 50 "data//maps/Inmald_Town/scripts.pory"
	lockall
# 51 "data//maps/Inmald_Town/scripts.pory"
	applymovement 4, Woman_second_tile_back
# 53 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 55 "data//maps/Inmald_Town/scripts.pory"
	applymovement 255, Whitot_Town_Player_walk_up
# 56 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 57 "data//maps/Inmald_Town/scripts.pory"
	releaseall
	goto Whitot_Town_Has_No_Pokemon_Blocker_Tile_2_1


Whitot_Town_Has_No_Pokemon_Blocker_Tile_3::
# 66 "data//maps/Inmald_Town/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Whitot_Town_Has_No_Pokemon_Blocker_Tile_3_2
# 81 "data//maps/Inmald_Town/scripts.pory"
	releaseall
Whitot_Town_Has_No_Pokemon_Blocker_Tile_3_1:
	end

Whitot_Town_Has_No_Pokemon_Blocker_Tile_3_2:
# 67 "data//maps/Inmald_Town/scripts.pory"
	lockall
# 68 "data//maps/Inmald_Town/scripts.pory"
	applymovement 4, Woman_third_tile
# 69 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 70 "data//maps/Inmald_Town/scripts.pory"
	msgbox Whitot_Town_cant_go_out_text
# 71 "data//maps/Inmald_Town/scripts.pory"
	releaseall
# 72 "data//maps/Inmald_Town/scripts.pory"
	lockall
# 73 "data//maps/Inmald_Town/scripts.pory"
	applymovement 4, Woman_third_tile_back
# 74 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 76 "data//maps/Inmald_Town/scripts.pory"
	applymovement 255, Whitot_Town_Player_walk_up
# 77 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 78 "data//maps/Inmald_Town/scripts.pory"
	releaseall
	goto Whitot_Town_Has_No_Pokemon_Blocker_Tile_3_1


Whitot_Town_Has_No_Pokemon_Blocker_Tile_4::
# 87 "data//maps/Inmald_Town/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Whitot_Town_Has_No_Pokemon_Blocker_Tile_4_2
# 103 "data//maps/Inmald_Town/scripts.pory"
	releaseall
Whitot_Town_Has_No_Pokemon_Blocker_Tile_4_1:
	end

Whitot_Town_Has_No_Pokemon_Blocker_Tile_4_2:
# 88 "data//maps/Inmald_Town/scripts.pory"
	lockall
# 89 "data//maps/Inmald_Town/scripts.pory"
	applymovement 4, Woman_fourth_tile
# 90 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 91 "data//maps/Inmald_Town/scripts.pory"
	msgbox Whitot_Town_cant_go_out_text
# 92 "data//maps/Inmald_Town/scripts.pory"
	releaseall
# 93 "data//maps/Inmald_Town/scripts.pory"
	lockall
# 94 "data//maps/Inmald_Town/scripts.pory"
	applymovement 4, Woman_fourth_tile_back
# 95 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 97 "data//maps/Inmald_Town/scripts.pory"
	applymovement 255, Whitot_Town_Player_walk_up
# 98 "data//maps/Inmald_Town/scripts.pory"
	waitmovement
# 99 "data//maps/Inmald_Town/scripts.pory"
	releaseall
# 100 "data//maps/Inmald_Town/scripts.pory"
	lockall
	goto Whitot_Town_Has_No_Pokemon_Blocker_Tile_4_1


# 110 "data//maps/Inmald_Town/scripts.pory"
Whitot_Town_Player_walk_up:
# 111 "data//maps/Inmald_Town/scripts.pory"
	face_up
# 112 "data//maps/Inmald_Town/scripts.pory"
	walk_up
	step_end

# 115 "data//maps/Inmald_Town/scripts.pory"
Woman_first_tile:
# 116 "data//maps/Inmald_Town/scripts.pory"
	face_left
# 117 "data//maps/Inmald_Town/scripts.pory"
	walk_left
# 118 "data//maps/Inmald_Town/scripts.pory"
	face_down
	step_end

# 121 "data//maps/Inmald_Town/scripts.pory"
Woman_second_tile:
# 122 "data//maps/Inmald_Town/scripts.pory"
	face_left
# 123 "data//maps/Inmald_Town/scripts.pory"
	walk_left
# 123 "data//maps/Inmald_Town/scripts.pory"
	walk_left
# 124 "data//maps/Inmald_Town/scripts.pory"
	face_down
	step_end

# 127 "data//maps/Inmald_Town/scripts.pory"
Woman_third_tile:
# 128 "data//maps/Inmald_Town/scripts.pory"
	face_left
# 129 "data//maps/Inmald_Town/scripts.pory"
	walk_left
# 129 "data//maps/Inmald_Town/scripts.pory"
	walk_left
# 129 "data//maps/Inmald_Town/scripts.pory"
	walk_left
# 130 "data//maps/Inmald_Town/scripts.pory"
	face_down
	step_end

# 133 "data//maps/Inmald_Town/scripts.pory"
Woman_fourth_tile:
# 134 "data//maps/Inmald_Town/scripts.pory"
	face_left
# 135 "data//maps/Inmald_Town/scripts.pory"
	walk_left
# 135 "data//maps/Inmald_Town/scripts.pory"
	walk_left
# 135 "data//maps/Inmald_Town/scripts.pory"
	walk_left
# 135 "data//maps/Inmald_Town/scripts.pory"
	walk_left
# 136 "data//maps/Inmald_Town/scripts.pory"
	face_down
	step_end

# 139 "data//maps/Inmald_Town/scripts.pory"
Woman_first_tile_back:
# 140 "data//maps/Inmald_Town/scripts.pory"
	face_right
# 141 "data//maps/Inmald_Town/scripts.pory"
	walk_right
# 142 "data//maps/Inmald_Town/scripts.pory"
	face_down
	step_end

# 145 "data//maps/Inmald_Town/scripts.pory"
Woman_second_tile_back:
# 146 "data//maps/Inmald_Town/scripts.pory"
	face_right
# 147 "data//maps/Inmald_Town/scripts.pory"
	walk_right
# 147 "data//maps/Inmald_Town/scripts.pory"
	walk_right
# 148 "data//maps/Inmald_Town/scripts.pory"
	face_down
	step_end

# 151 "data//maps/Inmald_Town/scripts.pory"
Woman_third_tile_back:
# 152 "data//maps/Inmald_Town/scripts.pory"
	face_right
# 153 "data//maps/Inmald_Town/scripts.pory"
	walk_right
# 153 "data//maps/Inmald_Town/scripts.pory"
	walk_right
# 153 "data//maps/Inmald_Town/scripts.pory"
	walk_right
# 154 "data//maps/Inmald_Town/scripts.pory"
	face_down
	step_end

# 157 "data//maps/Inmald_Town/scripts.pory"
Woman_fourth_tile_back:
# 158 "data//maps/Inmald_Town/scripts.pory"
	face_right
# 159 "data//maps/Inmald_Town/scripts.pory"
	walk_right
# 159 "data//maps/Inmald_Town/scripts.pory"
	walk_right
# 159 "data//maps/Inmald_Town/scripts.pory"
	walk_right
# 159 "data//maps/Inmald_Town/scripts.pory"
	walk_right
# 160 "data//maps/Inmald_Town/scripts.pory"
	face_down
	step_end

Whitot_Town_Karen::
# 165 "data//maps/Inmald_Town/scripts.pory"
	faceplayer
# 166 "data//maps/Inmald_Town/scripts.pory"
	lock
# 168 "data//maps/Inmald_Town/scripts.pory"
	msgbox Whitot_Town_Karen_Text_0
# 169 "data//maps/Inmald_Town/scripts.pory"
	msgbox Whitot_Town_Karen_Text_1
# 170 "data//maps/Inmald_Town/scripts.pory"
	release
# 171 "data//maps/Inmald_Town/scripts.pory"
	face_left
	end


Whitot_Town_Karen_Text_0:
# 168 "data//maps/Inmald_Town/scripts.pory"
	.string "I like to protect little kids!\n"
	.string "Why don't you meet with the Professor$"

Whitot_Town_Karen_Text_1:
# 169 "data//maps/Inmald_Town/scripts.pory"
	.string "in his lab?$"

Whitot_Town_TechGuyText::
# 6 "data//maps/Inmald_Town/scripts.pory"
	.string "Technology is Amazing! \n"
	.string "Anyone can create a game now!$"

Whitot_Town_cant_go_out_text::
# 19 "data//maps/Inmald_Town/scripts.pory"
	.string "Please don't go out. You have no\n"
	.string "Pokémon.$"
