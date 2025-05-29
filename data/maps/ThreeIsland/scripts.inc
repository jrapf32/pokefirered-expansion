# 1 "data//maps/ThreeIsland/scripts.pory"

# 2 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_MapScripts::
# 3 "data//maps/ThreeIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_OnTransition
# 4 "data//maps/ThreeIsland/scripts.pory"
	.byte 0
# 5 "data//maps/ThreeIsland/scripts.pory"

# 6 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_OnTransition::
# 7 "data//maps/ThreeIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND
# 8 "data//maps/ThreeIsland/scripts.pory"
	call_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_EventScript_HideAntiBikers
# 9 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_SetAntiBikersMovementAfterBikers
# 10 "data//maps/ThreeIsland/scripts.pory"
	end
# 11 "data//maps/ThreeIsland/scripts.pory"

# 12 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_HideAntiBikers::
# 13 "data//maps/ThreeIsland/scripts.pory"
	setflag FLAG_HIDE_THREE_ISLAND_ANTIBIKERS
# 14 "data//maps/ThreeIsland/scripts.pory"
	return
# 15 "data//maps/ThreeIsland/scripts.pory"

# 16 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_SetAntiBikersMovementAfterBikers::
# 17 "data//maps/ThreeIsland/scripts.pory"
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER1, MOVEMENT_TYPE_LOOK_AROUND
# 18 "data//maps/ThreeIsland/scripts.pory"
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER2, MOVEMENT_TYPE_LOOK_AROUND
# 19 "data//maps/ThreeIsland/scripts.pory"
	return
# 20 "data//maps/ThreeIsland/scripts.pory"

# 21 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_Biker::
# 22 "data//maps/ThreeIsland/scripts.pory"
	lock
# 23 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 2
# 24 "data//maps/ThreeIsland/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 25 "data//maps/ThreeIsland/scripts.pory"
	release
# 26 "data//maps/ThreeIsland/scripts.pory"
	end
# 27 "data//maps/ThreeIsland/scripts.pory"

# 28 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_AntiBiker1::
# 29 "data//maps/ThreeIsland/scripts.pory"
	lock
# 30 "data//maps/ThreeIsland/scripts.pory"
	goto_if_set FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER, ThreeIsland_EventScript_AntiBiker1GotFullRestore
# 31 "data//maps/ThreeIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_GiveFullRestore
# 32 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 0
# 33 "data//maps/ThreeIsland/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 34 "data//maps/ThreeIsland/scripts.pory"
	release
# 35 "data//maps/ThreeIsland/scripts.pory"
	end
# 36 "data//maps/ThreeIsland/scripts.pory"

# 37 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_AntiBiker1GotFullRestore::
# 38 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
# 39 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 40 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
# 41 "data//maps/ThreeIsland/scripts.pory"
	release
# 42 "data//maps/ThreeIsland/scripts.pory"
	end
# 43 "data//maps/ThreeIsland/scripts.pory"

# 44 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_GiveFullRestore::
# 45 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
# 46 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 47 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_ThankYouOhYourMonGotHurt
# 48 "data//maps/ThreeIsland/scripts.pory"
	checkitemspace ITEM_FULL_RESTORE
# 49 "data//maps/ThreeIsland/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ThreeIsland_EventScript_NoRoomForFullRestore
# 50 "data//maps/ThreeIsland/scripts.pory"
	msgreceiveditem ThreeIsland_Text_GivenFullRestore, ITEM_FULL_RESTORE
# 51 "data//maps/ThreeIsland/scripts.pory"
	additem ITEM_FULL_RESTORE
# 52 "data//maps/ThreeIsland/scripts.pory"
	setflag FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER
# 53 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
# 54 "data//maps/ThreeIsland/scripts.pory"
	release
# 55 "data//maps/ThreeIsland/scripts.pory"
	end
# 56 "data//maps/ThreeIsland/scripts.pory"

# 57 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_NoRoomForFullRestore::
# 58 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_OhYourBagIsFull
# 59 "data//maps/ThreeIsland/scripts.pory"
	release
# 60 "data//maps/ThreeIsland/scripts.pory"
	end
# 61 "data//maps/ThreeIsland/scripts.pory"

# 62 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_BikerArgumentScene::
# 63 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceLeft
# 64 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceLeft
# 65 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 66 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 67 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_GoBackToKanto
# 68 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceRight
# 69 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceRight
# 70 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceBiker
# 71 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_SpeakLeft
# 72 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 73 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_BossIsOnHisWay
# 74 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceUp
# 75 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceUp
# 76 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceAntiBiker
# 77 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, ThreeIsland_Movement_SpeakRight
# 78 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 79 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_GetOffIslandNow
# 80 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceRight
# 81 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceRight
# 82 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceBiker
# 83 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, ThreeIsland_Movement_SpeakLeft
# 84 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 85 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_WhosGonnaMakeMe
# 86 "data//maps/ThreeIsland/scripts.pory"
	return
# 87 "data//maps/ThreeIsland/scripts.pory"

# 88 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_PlayerFaceUp::
# 89 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 90 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 91 "data//maps/ThreeIsland/scripts.pory"
	return
# 92 "data//maps/ThreeIsland/scripts.pory"

# 93 "data//maps/ThreeIsland/scripts.pory"
@ Unused
# 94 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_PlayerFaceDown::
# 95 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 96 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 97 "data//maps/ThreeIsland/scripts.pory"
	return
# 98 "data//maps/ThreeIsland/scripts.pory"

# 99 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_PlayerFaceLeft::
# 100 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 101 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 102 "data//maps/ThreeIsland/scripts.pory"
	return
# 103 "data//maps/ThreeIsland/scripts.pory"

# 104 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_PlayerFaceRight::
# 105 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 106 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 107 "data//maps/ThreeIsland/scripts.pory"
	return
# 108 "data//maps/ThreeIsland/scripts.pory"

# 109 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_PlayerFaceBiker::
# 110 "data//maps/ThreeIsland/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 111 "data//maps/ThreeIsland/scripts.pory"
	goto_if_ge VAR_0x8004, 9, ThreeIsland_EventScript_PlayerFaceUp
# 112 "data//maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceRight
# 113 "data//maps/ThreeIsland/scripts.pory"
	end
# 114 "data//maps/ThreeIsland/scripts.pory"

# 115 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_PlayerFaceAntiBiker::
# 116 "data//maps/ThreeIsland/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 117 "data//maps/ThreeIsland/scripts.pory"
	goto_if_ge VAR_0x8004, 9, ThreeIsland_EventScript_PlayerFaceLeft
# 118 "data//maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_PlayerFaceUp
# 119 "data//maps/ThreeIsland/scripts.pory"
	end
# 120 "data//maps/ThreeIsland/scripts.pory"

# 121 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_AntiBiker2::
# 122 "data//maps/ThreeIsland/scripts.pory"
	lock
# 123 "data//maps/ThreeIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_AntiBiker2BikersGone
# 124 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 125 "data//maps/ThreeIsland/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
# 126 "data//maps/ThreeIsland/scripts.pory"
	release
# 127 "data//maps/ThreeIsland/scripts.pory"
	end
# 128 "data//maps/ThreeIsland/scripts.pory"

# 129 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_AntiBiker2BikersGone::
# 130 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, Common_Movement_FacePlayer
# 131 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 132 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_LostelleWentOffTowardsBondBridge
# 133 "data//maps/ThreeIsland/scripts.pory"
	release
# 134 "data//maps/ThreeIsland/scripts.pory"
	end
# 135 "data//maps/ThreeIsland/scripts.pory"

# 136 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_BikerBossIntroTrigger::
# 137 "data//maps/ThreeIsland/scripts.pory"
	lockall
# 138 "data//maps/ThreeIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 139 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 140 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 141 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_AreYouBossGoBackToKanto
# 142 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_SpeakLeft
# 143 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 144 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_JustGotHerePal
# 145 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 146 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 147 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_FollowersRaisingHavoc
# 148 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_SpeakLeft
# 149 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 150 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_OughtToBeThankingUs
# 151 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
# 152 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 153 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_YouCowardsToughInPack
# 154 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 3
# 155 "data//maps/ThreeIsland/scripts.pory"
	releaseall
# 156 "data//maps/ThreeIsland/scripts.pory"
	end
# 157 "data//maps/ThreeIsland/scripts.pory"

# 158 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_SpeakLeft::
# 159 "data//maps/ThreeIsland/scripts.pory"
	walk_in_place_left
# 160 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 161 "data//maps/ThreeIsland/scripts.pory"

# 162 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_SpeakRight::
# 163 "data//maps/ThreeIsland/scripts.pory"
	walk_in_place_right
# 164 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 165 "data//maps/ThreeIsland/scripts.pory"

# 166 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerLeft::
# 167 "data//maps/ThreeIsland/scripts.pory"
	lockall
# 168 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 0
# 169 "data//maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 170 "data//maps/ThreeIsland/scripts.pory"
	end
# 171 "data//maps/ThreeIsland/scripts.pory"

# 172 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerMidLeft::
# 173 "data//maps/ThreeIsland/scripts.pory"
	lockall
# 174 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 175 "data//maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 176 "data//maps/ThreeIsland/scripts.pory"
	end
# 177 "data//maps/ThreeIsland/scripts.pory"

# 178 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerMid::
# 179 "data//maps/ThreeIsland/scripts.pory"
	lockall
# 180 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 2
# 181 "data//maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 182 "data//maps/ThreeIsland/scripts.pory"
	end
# 183 "data//maps/ThreeIsland/scripts.pory"

# 184 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerMidRight::
# 185 "data//maps/ThreeIsland/scripts.pory"
	lockall
# 186 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 3
# 187 "data//maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 188 "data//maps/ThreeIsland/scripts.pory"
	end
# 189 "data//maps/ThreeIsland/scripts.pory"

# 190 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_BattleBikersTriggerRight::
# 191 "data//maps/ThreeIsland/scripts.pory"
	lockall
# 192 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_TEMP_1, 4
# 193 "data//maps/ThreeIsland/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
# 194 "data//maps/ThreeIsland/scripts.pory"
	end
# 195 "data//maps/ThreeIsland/scripts.pory"

# 196 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene::
# 197 "data//maps/ThreeIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 198 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_WalkInPlaceFasterDown
# 199 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 200 "data//maps/ThreeIsland/scripts.pory"
	playse SE_PIN
# 201 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_ExclamationMark
# 202 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 203 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_Delay48
# 204 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 205 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_BikerApproach
# 206 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 207 "data//maps/ThreeIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_BOY, 0
# 208 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_WannaMakeSomethingOfYourStaring, MSGBOX_YESNO
# 209 "data//maps/ThreeIsland/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_EventScript_LeaveBikersAlone
# 210 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker1Intro
# 211 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER1
# 212 "data//maps/ThreeIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON, ThreeIsland_Text_Biker1Defeat
# 213 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_BikerSpeak
# 214 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 215 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker1PostBattle
# 216 "data//maps/ThreeIsland/scripts.pory"
	closemessage
# 217 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER2, ThreeIsland_Movement_BikerApproach
# 218 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 219 "data//maps/ThreeIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_BOY, 0
# 220 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker2Intro
# 221 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER2
# 222 "data//maps/ThreeIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON_2, ThreeIsland_Text_Biker2Defeat
# 223 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER2, ThreeIsland_Movement_BikerSpeak
# 224 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 225 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker2PostBattle
# 226 "data//maps/ThreeIsland/scripts.pory"
	closemessage
# 227 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, ThreeIsland_Movement_BikerApproach
# 228 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 229 "data//maps/ThreeIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_BOY, 0
# 230 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker3Intro
# 231 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER3
# 232 "data//maps/ThreeIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON_3, ThreeIsland_Text_Biker3Defeat
# 233 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterLeft
# 234 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 235 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER4, Common_Movement_WalkInPlaceFasterDown
# 236 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER5, Common_Movement_WalkInPlaceFasterDown
# 237 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 238 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Biker3PostBattle
# 239 "data//maps/ThreeIsland/scripts.pory"
	closemessage
# 240 "data//maps/ThreeIsland/scripts.pory"
	delay 45
# 241 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PaxtonApproachLeft
# 242 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PaxtonApproachMidLeft
# 243 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PaxtonApproachMid
# 244 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, ThreeIsland_EventScript_PaxtonApproachMidRight
# 245 "data//maps/ThreeIsland/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, ThreeIsland_EventScript_PaxtonApproachRight
# 246 "data//maps/ThreeIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_BOY, 0
# 247 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_PaxtonIntro
# 248 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PAXTON
# 249 "data//maps/ThreeIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_CUE_BALL_PAXTON, ThreeIsland_Text_PaxtonDefeat
# 250 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_PaxtonPostBattle
# 251 "data//maps/ThreeIsland/scripts.pory"
	closemessage
# 252 "data//maps/ThreeIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 253 "data//maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_PAXTON
# 254 "data//maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER1
# 255 "data//maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER2
# 256 "data//maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER3
# 257 "data//maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER4
# 258 "data//maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER5
# 259 "data//maps/ThreeIsland/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER6
# 260 "data//maps/ThreeIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 261 "data//maps/ThreeIsland/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 4
# 262 "data//maps/ThreeIsland/scripts.pory"
	releaseall
# 263 "data//maps/ThreeIsland/scripts.pory"
	end
# 264 "data//maps/ThreeIsland/scripts.pory"

# 265 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachLeft::
# 266 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 267 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachLeft
# 268 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 269 "data//maps/ThreeIsland/scripts.pory"
	return
# 270 "data//maps/ThreeIsland/scripts.pory"

# 271 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachMidLeft::
# 272 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 273 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMidLeft
# 274 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 275 "data//maps/ThreeIsland/scripts.pory"
	return
# 276 "data//maps/ThreeIsland/scripts.pory"

# 277 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachMid::
# 278 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 279 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMid
# 280 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 281 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 282 "data//maps/ThreeIsland/scripts.pory"
	return
# 283 "data//maps/ThreeIsland/scripts.pory"

# 284 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachMidRight::
# 285 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 286 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 287 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMidRight
# 288 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 289 "data//maps/ThreeIsland/scripts.pory"
	return
# 290 "data//maps/ThreeIsland/scripts.pory"

# 291 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_PaxtonApproachRight::
# 292 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
# 293 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
# 294 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachRight
# 295 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 296 "data//maps/ThreeIsland/scripts.pory"
	return
# 297 "data//maps/ThreeIsland/scripts.pory"

# 298 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_LeaveBikersAlone::
# 299 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_ThatsSmart
# 300 "data//maps/ThreeIsland/scripts.pory"
	closemessage
# 301 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerLeaveBikers
# 302 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 303 "data//maps/ThreeIsland/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_Biker1ReturnToPack
# 304 "data//maps/ThreeIsland/scripts.pory"
	waitmovement 0
# 305 "data//maps/ThreeIsland/scripts.pory"
	fadedefaultbgm
# 306 "data//maps/ThreeIsland/scripts.pory"
	releaseall
# 307 "data//maps/ThreeIsland/scripts.pory"
	end
# 308 "data//maps/ThreeIsland/scripts.pory"

# 309 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PlayerLeaveBikers::
# 310 "data//maps/ThreeIsland/scripts.pory"
	walk_down
# 311 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 312 "data//maps/ThreeIsland/scripts.pory"

# 313 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_BikerApproach::
# 314 "data//maps/ThreeIsland/scripts.pory"
	walk_down
# 315 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 316 "data//maps/ThreeIsland/scripts.pory"

# 317 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_Biker1ReturnToPack::
# 318 "data//maps/ThreeIsland/scripts.pory"
	walk_up
# 319 "data//maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_left
# 320 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 321 "data//maps/ThreeIsland/scripts.pory"

# 322 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_BikerSpeak::
# 323 "data//maps/ThreeIsland/scripts.pory"
	walk_in_place_down
# 324 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 325 "data//maps/ThreeIsland/scripts.pory"

# 326 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PaxtonApproachLeft::
# 327 "data//maps/ThreeIsland/scripts.pory"
	walk_down
# 328 "data//maps/ThreeIsland/scripts.pory"
	walk_left
# 329 "data//maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_down
# 330 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 331 "data//maps/ThreeIsland/scripts.pory"

# 332 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMidLeft::
# 333 "data//maps/ThreeIsland/scripts.pory"
	walk_down
# 334 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 335 "data//maps/ThreeIsland/scripts.pory"

# 336 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMid::
# 337 "data//maps/ThreeIsland/scripts.pory"
	walk_down
# 338 "data//maps/ThreeIsland/scripts.pory"
	walk_down
# 339 "data//maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_right
# 340 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 341 "data//maps/ThreeIsland/scripts.pory"

# 342 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PlayerFacePaxton::
# 343 "data//maps/ThreeIsland/scripts.pory"
	delay_16
# 344 "data//maps/ThreeIsland/scripts.pory"
	delay_16
# 345 "data//maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_left
# 346 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 347 "data//maps/ThreeIsland/scripts.pory"

# 348 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PaxtonApproachMidRight::
# 349 "data//maps/ThreeIsland/scripts.pory"
	walk_down
# 350 "data//maps/ThreeIsland/scripts.pory"
	walk_down
# 351 "data//maps/ThreeIsland/scripts.pory"
	walk_right
# 352 "data//maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_right
# 353 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 354 "data//maps/ThreeIsland/scripts.pory"

# 355 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_Movement_PaxtonApproachRight::
# 356 "data//maps/ThreeIsland/scripts.pory"
	walk_down
# 357 "data//maps/ThreeIsland/scripts.pory"
	walk_down
# 358 "data//maps/ThreeIsland/scripts.pory"
	walk_right
# 359 "data//maps/ThreeIsland/scripts.pory"
	walk_right
# 360 "data//maps/ThreeIsland/scripts.pory"
	walk_in_place_faster_right
# 361 "data//maps/ThreeIsland/scripts.pory"
	step_end
# 362 "data//maps/ThreeIsland/scripts.pory"

# 363 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_Woman::
# 364 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_WouldntWantToSeeBikersHereAgain, MSGBOX_NPC
# 365 "data//maps/ThreeIsland/scripts.pory"
	end
# 366 "data//maps/ThreeIsland/scripts.pory"

# 367 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_LittleBoy::
# 368 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame, MSGBOX_NPC
# 369 "data//maps/ThreeIsland/scripts.pory"
	end
# 370 "data//maps/ThreeIsland/scripts.pory"

# 371 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_Doduo::
# 372 "data//maps/ThreeIsland/scripts.pory"
	lock
# 373 "data//maps/ThreeIsland/scripts.pory"
	faceplayer
# 374 "data//maps/ThreeIsland/scripts.pory"
	waitse
# 375 "data//maps/ThreeIsland/scripts.pory"
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
# 376 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_Doduo
# 377 "data//maps/ThreeIsland/scripts.pory"
	waitmoncry
# 378 "data//maps/ThreeIsland/scripts.pory"
	release
# 379 "data//maps/ThreeIsland/scripts.pory"
	end
# 380 "data//maps/ThreeIsland/scripts.pory"

# 381 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_IslandSign::
# 382 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_IslandSign, MSGBOX_SIGN
# 383 "data//maps/ThreeIsland/scripts.pory"
	end
# 384 "data//maps/ThreeIsland/scripts.pory"

# 385 "data//maps/ThreeIsland/scripts.pory"
ThreeIsland_EventScript_Biker6::
# 386 "data//maps/ThreeIsland/scripts.pory"
	msgbox ThreeIsland_Text_IslandBelongsToUs, MSGBOX_NPC
# 387 "data//maps/ThreeIsland/scripts.pory"
	end
