# 1 "data//maps/ViridianCity/scripts.pory"

# 2 "data//maps/ViridianCity/scripts.pory"
\
# 3 "data//maps/ViridianCity/scripts.pory"
ViridianCity_MapScripts::
# 4 "data//maps/ViridianCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
# 5 "data//maps/ViridianCity/scripts.pory"
	.byte 0
# 6 "data//maps/ViridianCity/scripts.pory"

# 7 "data//maps/ViridianCity/scripts.pory"
ViridianCity_OnTransition::
# 8 "data//maps/ViridianCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 9 "data//maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_SetOldManBlockingRoad
# 10 "data//maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_SetOldManStandingByRoad
# 11 "data//maps/ViridianCity/scripts.pory"
	call_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_SetOldManNormal
# 12 "data//maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0, ViridianCity_EventScript_TryUnlockGym
# 13 "data//maps/ViridianCity/scripts.pory"
	end
# 14 "data//maps/ViridianCity/scripts.pory"

# 15 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_SetOldManNormal::
# 16 "data//maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 17 "data//maps/ViridianCity/scripts.pory"
	return
# 18 "data//maps/ViridianCity/scripts.pory"

# 19 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_SetOldManStandingByRoad::
# 20 "data//maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 21 "data//maps/ViridianCity/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 8
# 22 "data//maps/ViridianCity/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_LOOK_AROUND
# 23 "data//maps/ViridianCity/scripts.pory"
	return
# 24 "data//maps/ViridianCity/scripts.pory"

# 25 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_SetOldManBlockingRoad::
# 26 "data//maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_LYING_DOWN
# 27 "data//maps/ViridianCity/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 11
# 28 "data//maps/ViridianCity/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_FACE_DOWN
# 29 "data//maps/ViridianCity/scripts.pory"
	return
# 30 "data//maps/ViridianCity/scripts.pory"

# 31 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TryUnlockGym::
# 32 "data//maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, EventScript_Return
# 33 "data//maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, EventScript_Return
# 34 "data//maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, EventScript_Return
# 35 "data//maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, EventScript_Return
# 36 "data//maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EventScript_Return
# 37 "data//maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, EventScript_Return
# 38 "data//maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
# 39 "data//maps/ViridianCity/scripts.pory"
	return
# 40 "data//maps/ViridianCity/scripts.pory"

# 41 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_GymDoorLocked::
# 42 "data//maps/ViridianCity/scripts.pory"
	lockall
# 43 "data//maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 44 "data//maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 45 "data//maps/ViridianCity/scripts.pory"
	waitmovement 0
# 46 "data//maps/ViridianCity/scripts.pory"
	delay 20
# 47 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked
# 48 "data//maps/ViridianCity/scripts.pory"
	closemessage
# 49 "data//maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_JumpDownLedge
# 50 "data//maps/ViridianCity/scripts.pory"
	waitmovement 0
# 51 "data//maps/ViridianCity/scripts.pory"
	releaseall
# 52 "data//maps/ViridianCity/scripts.pory"
	end
# 53 "data//maps/ViridianCity/scripts.pory"

# 54 "data//maps/ViridianCity/scripts.pory"
ViridianCity_Movement_JumpDownLedge::
# 55 "data//maps/ViridianCity/scripts.pory"
	jump_2_down
# 56 "data//maps/ViridianCity/scripts.pory"
	step_end
# 57 "data//maps/ViridianCity/scripts.pory"

# 58 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_CitySign::
# 59 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
# 60 "data//maps/ViridianCity/scripts.pory"
	end
# 61 "data//maps/ViridianCity/scripts.pory"

# 62 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TrainerTips1::
# 63 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
# 64 "data//maps/ViridianCity/scripts.pory"
	end
# 65 "data//maps/ViridianCity/scripts.pory"

# 66 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TrainerTips2::
# 67 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
# 68 "data//maps/ViridianCity/scripts.pory"
	end
# 69 "data//maps/ViridianCity/scripts.pory"

# 70 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_GymSign::
# 71 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
# 72 "data//maps/ViridianCity/scripts.pory"
	end
# 73 "data//maps/ViridianCity/scripts.pory"

# 74 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_GymDoor::
# 75 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
# 76 "data//maps/ViridianCity/scripts.pory"
	end
# 77 "data//maps/ViridianCity/scripts.pory"

# 78 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Boy::
# 79 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
# 80 "data//maps/ViridianCity/scripts.pory"
	end
# 81 "data//maps/ViridianCity/scripts.pory"

# 82 "data//maps/ViridianCity/scripts.pory"
@ Other old man, not the tutorial old man
# 83 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_OldMan::
# 84 "data//maps/ViridianCity/scripts.pory"
	lock
# 85 "data//maps/ViridianCity/scripts.pory"
	faceplayer
# 86 "data//maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1, ViridianCity_EventScript_OldManGymLeaderReturned
# 87 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 88 "data//maps/ViridianCity/scripts.pory"
	closemessage
# 89 "data//maps/ViridianCity/scripts.pory"
	applymovement LOCALID_VIRIDIAN_OLD_MAN, Common_Movement_FaceOriginalDirection
# 90 "data//maps/ViridianCity/scripts.pory"
	waitmovement 0
# 91 "data//maps/ViridianCity/scripts.pory"
	release
# 92 "data//maps/ViridianCity/scripts.pory"
	end
# 93 "data//maps/ViridianCity/scripts.pory"

# 94 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_OldManGymLeaderReturned::
# 95 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
# 96 "data//maps/ViridianCity/scripts.pory"
	release
# 97 "data//maps/ViridianCity/scripts.pory"
	end
# 98 "data//maps/ViridianCity/scripts.pory"

# 99 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialOldMan::
# 100 "data//maps/ViridianCity/scripts.pory"
	lock
# 101 "data//maps/ViridianCity/scripts.pory"
	faceplayer
# 102 "data//maps/ViridianCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ViridianCity_EventScript_AskIfTeachyTVHelpful
# 103 "data//maps/ViridianCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_TutorialCompleted
# 104 "data//maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_TutorialStart
# 105 "data//maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_TutorialNotReady
# 106 "data//maps/ViridianCity/scripts.pory"
	end
# 107 "data//maps/ViridianCity/scripts.pory"

# 108 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_AskIfTeachyTVHelpful::
# 109 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
# 110 "data//maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_TeachyTVNotHelpful
# 111 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
# 112 "data//maps/ViridianCity/scripts.pory"
	release
# 113 "data//maps/ViridianCity/scripts.pory"
	end
# 114 "data//maps/ViridianCity/scripts.pory"

# 115 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TeachyTVNotHelpful::
# 116 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_TooBusyForTeachyTV
# 117 "data//maps/ViridianCity/scripts.pory"
	release
# 118 "data//maps/ViridianCity/scripts.pory"
	end
# 119 "data//maps/ViridianCity/scripts.pory"

# 120 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialCompleted::
# 121 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
# 122 "data//maps/ViridianCity/scripts.pory"
	release
# 123 "data//maps/ViridianCity/scripts.pory"
	end
# 124 "data//maps/ViridianCity/scripts.pory"

# 125 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialStart::
# 126 "data//maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 127 "data//maps/ViridianCity/scripts.pory"
	release
# 128 "data//maps/ViridianCity/scripts.pory"
	end
# 129 "data//maps/ViridianCity/scripts.pory"

# 130 "data//maps/ViridianCity/scripts.pory"
@ Unused
# 131 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_WatchToLearnBasics::
# 132 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 133 "data//maps/ViridianCity/scripts.pory"
	release
# 134 "data//maps/ViridianCity/scripts.pory"
	end
# 135 "data//maps/ViridianCity/scripts.pory"

# 136 "data//maps/ViridianCity/scripts.pory"
@ Unused. Starts battle after the post battle text, which is odd.
# 137 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialUnused::
# 138 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 139 "data//maps/ViridianCity/scripts.pory"
	special StartOldManTutorialBattle
# 140 "data//maps/ViridianCity/scripts.pory"
	waitstate
# 141 "data//maps/ViridianCity/scripts.pory"
	release
# 142 "data//maps/ViridianCity/scripts.pory"
	end
# 143 "data//maps/ViridianCity/scripts.pory"

# 144 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialNotReady::
# 145 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 146 "data//maps/ViridianCity/scripts.pory"
	closemessage
# 147 "data//maps/ViridianCity/scripts.pory"
	release
# 148 "data//maps/ViridianCity/scripts.pory"
	end
# 149 "data//maps/ViridianCity/scripts.pory"

# 150 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Youngster::
# 151 "data//maps/ViridianCity/scripts.pory"
	lock
# 152 "data//maps/ViridianCity/scripts.pory"
	faceplayer
# 153 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 154 "data//maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, ViridianCity_EventScript_YoungsterExplainCaterpillars
# 155 "data//maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_YoungsterDeclineExplanation
# 156 "data//maps/ViridianCity/scripts.pory"
	end
# 157 "data//maps/ViridianCity/scripts.pory"

# 158 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_YoungsterExplainCaterpillars::
# 159 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
# 160 "data//maps/ViridianCity/scripts.pory"
	release
# 161 "data//maps/ViridianCity/scripts.pory"
	end
# 162 "data//maps/ViridianCity/scripts.pory"

# 163 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_YoungsterDeclineExplanation::
# 164 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
# 165 "data//maps/ViridianCity/scripts.pory"
	release
# 166 "data//maps/ViridianCity/scripts.pory"
	end
# 167 "data//maps/ViridianCity/scripts.pory"

# 168 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Woman::
# 169 "data//maps/ViridianCity/scripts.pory"
	lock
# 170 "data//maps/ViridianCity/scripts.pory"
	faceplayer
# 171 "data//maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_WomanRoadBlocked
# 172 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
# 173 "data//maps/ViridianCity/scripts.pory"
	release
# 174 "data//maps/ViridianCity/scripts.pory"
	end
# 175 "data//maps/ViridianCity/scripts.pory"

# 176 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_WomanRoadBlocked::
# 177 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
# 178 "data//maps/ViridianCity/scripts.pory"
	closemessage
# 179 "data//maps/ViridianCity/scripts.pory"
	applymovement LOCALID_VIRIDIAN_WOMAN, Common_Movement_FaceOriginalDirection
# 180 "data//maps/ViridianCity/scripts.pory"
	waitmovement 0
# 181 "data//maps/ViridianCity/scripts.pory"
	release
# 182 "data//maps/ViridianCity/scripts.pory"
	end
# 183 "data//maps/ViridianCity/scripts.pory"

# 184 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_DreamEaterTutor::
# 185 "data//maps/ViridianCity/scripts.pory"
	goto EventScript_DreamEaterTutor
# 186 "data//maps/ViridianCity/scripts.pory"
	end
# 187 "data//maps/ViridianCity/scripts.pory"

# 188 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_RoadBlocked::
# 189 "data//maps/ViridianCity/scripts.pory"
	lockall
# 190 "data//maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 191 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 192 "data//maps/ViridianCity/scripts.pory"
	closemessage
# 193 "data//maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_WalkDown
# 194 "data//maps/ViridianCity/scripts.pory"
	waitmovement 0
# 195 "data//maps/ViridianCity/scripts.pory"
	releaseall
# 196 "data//maps/ViridianCity/scripts.pory"
	end
# 197 "data//maps/ViridianCity/scripts.pory"

# 198 "data//maps/ViridianCity/scripts.pory"
ViridianCity_Movement_WalkDown::
# 199 "data//maps/ViridianCity/scripts.pory"
	walk_down
# 200 "data//maps/ViridianCity/scripts.pory"
	step_end
# 201 "data//maps/ViridianCity/scripts.pory"

# 202 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialTriggerLeft::
# 203 "data//maps/ViridianCity/scripts.pory"
	lockall
# 204 "data//maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 205 "data//maps/ViridianCity/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterLeft
# 206 "data//maps/ViridianCity/scripts.pory"
	waitmovement 0
# 207 "data//maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 208 "data//maps/ViridianCity/scripts.pory"
	waitmovement 0
# 209 "data//maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 210 "data//maps/ViridianCity/scripts.pory"
	release
# 211 "data//maps/ViridianCity/scripts.pory"
	end
# 212 "data//maps/ViridianCity/scripts.pory"

# 213 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialTriggerRight::
# 214 "data//maps/ViridianCity/scripts.pory"
	lockall
# 215 "data//maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 216 "data//maps/ViridianCity/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 217 "data//maps/ViridianCity/scripts.pory"
	waitmovement 0
# 218 "data//maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 219 "data//maps/ViridianCity/scripts.pory"
	waitmovement 0
# 220 "data//maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 221 "data//maps/ViridianCity/scripts.pory"
	release
# 222 "data//maps/ViridianCity/scripts.pory"
	end
# 223 "data//maps/ViridianCity/scripts.pory"

# 224 "data//maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_DoTutorialBattle::
# 225 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
# 226 "data//maps/ViridianCity/scripts.pory"
	closemessage
# 227 "data//maps/ViridianCity/scripts.pory"
	
# 228 "data//maps/ViridianCity/scripts.pory"
	
# 229 "data//maps/ViridianCity/scripts.pory"
	special StartOldManTutorialBattle
# 230 "data//maps/ViridianCity/scripts.pory"
	waitstate
# 231 "data//maps/ViridianCity/scripts.pory"
	lock
# 232 "data//maps/ViridianCity/scripts.pory"
	faceplayer
# 233 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 234 "data//maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 235 "data//maps/ViridianCity/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 236 "data//maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 237 "data//maps/ViridianCity/scripts.pory"
	return
