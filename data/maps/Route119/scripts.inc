# 1 "data/maps/Route119/scripts.pory"

# 2 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL, 16
# 3 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 25
# 4 "data/maps/Route119/scripts.pory"
.set LOCALID_SCOTT, 43
# 5 "data/maps/Route119/scripts.pory"

# 6 "data/maps/Route119/scripts.pory"
Route119_MapScripts::
# 7 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 8 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
# 9 "data/maps/Route119/scripts.pory"
	.byte 0
# 10 "data/maps/Route119/scripts.pory"

# 11 "data/maps/Route119/scripts.pory"
Route119_OnResume:
# 12 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
# 13 "data/maps/Route119/scripts.pory"
	end
# 14 "data/maps/Route119/scripts.pory"

# 15 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon::
# 16 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/Route119/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 18 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 19 "data/maps/Route119/scripts.pory"
	return
# 20 "data/maps/Route119/scripts.pory"

# 21 "data/maps/Route119/scripts.pory"
Route119_OnTransition:
# 22 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 23 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 24 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_EventScript_MoveInstituteWorkersDownstairs
# 25 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 26 "data/maps/Route119/scripts.pory"
	end
# 27 "data/maps/Route119/scripts.pory"

# 28 "data/maps/Route119/scripts.pory"
Route119_EventScript_MoveInstituteWorkersDownstairs::
# 29 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 30 "data/maps/Route119/scripts.pory"
	setflag FLAG_SHOW_WEATHER_INSTITUTE_BOSSES
# 31 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 32 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 33 "data/maps/Route119/scripts.pory"
	return
# 34 "data/maps/Route119/scripts.pory"

# 35 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger1::
# 36 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 37 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 38 "data/maps/Route119/scripts.pory"
	end
# 39 "data/maps/Route119/scripts.pory"

# 40 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger2::
# 41 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 42 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 43 "data/maps/Route119/scripts.pory"
	end
# 44 "data/maps/Route119/scripts.pory"

# 45 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter::
# 46 "data/maps/Route119/scripts.pory"
	lockall
# 47 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 48 "data/maps/Route119/scripts.pory"
	checkplayergender
# 49 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route119_EventScript_PlayMayMusic
# 50 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route119_EventScript_PlayBrendanMusic
# 51 "data/maps/Route119/scripts.pory"
	delay 65
# 52 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalEnter1
# 53 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalEnter2
# 54 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 55 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route119/scripts.pory"
	delay 30
# 57 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 58 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 59 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 60 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL
# 61 "data/maps/Route119/scripts.pory"
	delay 30
# 62 "data/maps/Route119/scripts.pory"
	checkplayergender
# 63 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route119_EventScript_BattleMay
# 64 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route119_EventScript_BattleBrendan
# 65 "data/maps/Route119/scripts.pory"
	releaseall
# 66 "data/maps/Route119/scripts.pory"
	end
# 67 "data/maps/Route119/scripts.pory"

# 68 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayMayMusic::
# 69 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 70 "data/maps/Route119/scripts.pory"
	return
# 71 "data/maps/Route119/scripts.pory"

# 72 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayBrendanMusic::
# 73 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 74 "data/maps/Route119/scripts.pory"
	return
# 75 "data/maps/Route119/scripts.pory"

# 76 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay::
# 77 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 78 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 79 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleMayTreecko
# 80 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleMayTorchic
# 81 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleMayMudkip
# 82 "data/maps/Route119/scripts.pory"
	end
# 83 "data/maps/Route119/scripts.pory"

# 84 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTreecko::
# 85 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
# 86 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 87 "data/maps/Route119/scripts.pory"
	end
# 88 "data/maps/Route119/scripts.pory"

# 89 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTorchic::
# 90 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 91 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 92 "data/maps/Route119/scripts.pory"
	end
# 93 "data/maps/Route119/scripts.pory"

# 94 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayMudkip::
# 95 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
# 96 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 97 "data/maps/Route119/scripts.pory"
	end
# 98 "data/maps/Route119/scripts.pory"

# 99 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedMay::
# 100 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 101 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 102 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 103 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 104 "data/maps/Route119/scripts.pory"
	end
# 105 "data/maps/Route119/scripts.pory"

# 106 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan::
# 107 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 108 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 109 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleBrendanTreecko
# 110 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleBrendanTorchic
# 111 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleBrendanMudkip
# 112 "data/maps/Route119/scripts.pory"
	end
# 113 "data/maps/Route119/scripts.pory"

# 114 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTreecko::
# 115 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 116 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 117 "data/maps/Route119/scripts.pory"
	end
# 118 "data/maps/Route119/scripts.pory"

# 119 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTorchic::
# 120 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
# 121 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 122 "data/maps/Route119/scripts.pory"
	end
# 123 "data/maps/Route119/scripts.pory"

# 124 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanMudkip::
# 125 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
# 126 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 127 "data/maps/Route119/scripts.pory"
	end
# 128 "data/maps/Route119/scripts.pory"

# 129 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedBrendan::
# 130 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 131 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 132 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 133 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 134 "data/maps/Route119/scripts.pory"
	end
# 135 "data/maps/Route119/scripts.pory"

# 136 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveFlyHM::
# 137 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 138 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 139 "data/maps/Route119/scripts.pory"
	return
# 140 "data/maps/Route119/scripts.pory"

# 141 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive::
# 142 "data/maps/Route119/scripts.pory"
	closemessage
# 143 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
# 144 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
# 145 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL
# 146 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 147 "data/maps/Route119/scripts.pory"
	delay 30
# 148 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalExit1
# 149 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalExit2
# 150 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 151 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 152 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 153 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 154 "data/maps/Route119/scripts.pory"
	delay 60
# 155 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetScottPos1
# 156 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetScottPos2
# 157 "data/maps/Route119/scripts.pory"
	addobject LOCALID_SCOTT
# 158 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottEnter
# 159 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 161 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 162 "data/maps/Route119/scripts.pory"
	closemessage
# 163 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_ScottExit1
# 164 "data/maps/Route119/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_ScottExit2
# 165 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_SCOTT
# 166 "data/maps/Route119/scripts.pory"
	releaseall
# 167 "data/maps/Route119/scripts.pory"
	end
# 168 "data/maps/Route119/scripts.pory"

# 169 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos1::
# 170 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 27, 25
# 171 "data/maps/Route119/scripts.pory"
	return
# 172 "data/maps/Route119/scripts.pory"

# 173 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos2::
# 174 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 28, 25
# 175 "data/maps/Route119/scripts.pory"
	return
# 176 "data/maps/Route119/scripts.pory"

# 177 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit1::
# 178 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit1
# 179 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 180 "data/maps/Route119/scripts.pory"
	return
# 181 "data/maps/Route119/scripts.pory"

# 182 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit2::
# 183 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit2
# 184 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route119/scripts.pory"
	return
# 186 "data/maps/Route119/scripts.pory"

# 187 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter1::
# 188 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 189 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route119/scripts.pory"
	return
# 191 "data/maps/Route119/scripts.pory"

# 192 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter2::
# 193 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 194 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route119/scripts.pory"
	return
# 196 "data/maps/Route119/scripts.pory"

# 197 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit1::
# 198 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 199 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 200 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route119/scripts.pory"
	return
# 202 "data/maps/Route119/scripts.pory"

# 203 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit2::
# 204 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 205 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 206 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route119/scripts.pory"
	return
# 208 "data/maps/Route119/scripts.pory"

# 209 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos1::
# 210 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 25, 32
# 211 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 25, 32
# 212 "data/maps/Route119/scripts.pory"
	return
# 213 "data/maps/Route119/scripts.pory"

# 214 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos2::
# 215 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 26, 32
# 216 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 26, 32
# 217 "data/maps/Route119/scripts.pory"
	return
# 218 "data/maps/Route119/scripts.pory"

# 219 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 220 "data/maps/Route119/scripts.pory"
	delay_16
# 221 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_right
# 222 "data/maps/Route119/scripts.pory"
	delay_8
# 223 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 224 "data/maps/Route119/scripts.pory"
	step_end
# 225 "data/maps/Route119/scripts.pory"

# 226 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 227 "data/maps/Route119/scripts.pory"
	delay_16
# 228 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_left
# 229 "data/maps/Route119/scripts.pory"
	delay_8
# 230 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 231 "data/maps/Route119/scripts.pory"
	step_end
# 232 "data/maps/Route119/scripts.pory"

# 233 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 234 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 235 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 236 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 237 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 238 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 239 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 240 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 241 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 242 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 243 "data/maps/Route119/scripts.pory"
	step_end
# 244 "data/maps/Route119/scripts.pory"

# 245 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 246 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 247 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 248 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 250 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 251 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 252 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 253 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 255 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 256 "data/maps/Route119/scripts.pory"
	step_end
# 257 "data/maps/Route119/scripts.pory"

# 258 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 259 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 260 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 261 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 262 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 263 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 264 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 265 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 266 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 267 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 268 "data/maps/Route119/scripts.pory"
	step_end
# 269 "data/maps/Route119/scripts.pory"

# 270 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 271 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 272 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 273 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 274 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 275 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 276 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 277 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 278 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 279 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 280 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 281 "data/maps/Route119/scripts.pory"
	step_end
# 282 "data/maps/Route119/scripts.pory"

# 283 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 284 "data/maps/Route119/scripts.pory"
	walk_down
# 285 "data/maps/Route119/scripts.pory"
	walk_down
# 286 "data/maps/Route119/scripts.pory"
	walk_down
# 287 "data/maps/Route119/scripts.pory"
	walk_down
# 288 "data/maps/Route119/scripts.pory"
	walk_left
# 289 "data/maps/Route119/scripts.pory"
	walk_left
# 290 "data/maps/Route119/scripts.pory"
	walk_down
# 291 "data/maps/Route119/scripts.pory"
	step_end
# 292 "data/maps/Route119/scripts.pory"

# 293 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 294 "data/maps/Route119/scripts.pory"
	walk_up
# 295 "data/maps/Route119/scripts.pory"
	walk_right
# 296 "data/maps/Route119/scripts.pory"
	walk_right
# 297 "data/maps/Route119/scripts.pory"
	walk_up
# 298 "data/maps/Route119/scripts.pory"
	walk_up
# 299 "data/maps/Route119/scripts.pory"
	walk_up
# 300 "data/maps/Route119/scripts.pory"
	walk_up
# 301 "data/maps/Route119/scripts.pory"
	walk_up
# 302 "data/maps/Route119/scripts.pory"
	step_end
# 303 "data/maps/Route119/scripts.pory"

# 304 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 305 "data/maps/Route119/scripts.pory"
	walk_up
# 306 "data/maps/Route119/scripts.pory"
	walk_right
# 307 "data/maps/Route119/scripts.pory"
	walk_up
# 308 "data/maps/Route119/scripts.pory"
	walk_up
# 309 "data/maps/Route119/scripts.pory"
	walk_up
# 310 "data/maps/Route119/scripts.pory"
	walk_up
# 311 "data/maps/Route119/scripts.pory"
	walk_up
# 312 "data/maps/Route119/scripts.pory"
	step_end
# 313 "data/maps/Route119/scripts.pory"

# 314 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 315 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 316 "data/maps/Route119/scripts.pory"
	end
# 317 "data/maps/Route119/scripts.pory"

# 318 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 319 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 320 "data/maps/Route119/scripts.pory"
	end
# 321 "data/maps/Route119/scripts.pory"

# 322 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 323 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 324 "data/maps/Route119/scripts.pory"
	end
# 325 "data/maps/Route119/scripts.pory"

# 326 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 327 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_BRENT, 0, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 328 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route119/scripts.pory"
	end
# 330 "data/maps/Route119/scripts.pory"

# 331 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald::
# 332 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_DONALD, 0, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 333 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 334 "data/maps/Route119/scripts.pory"
	end
# 335 "data/maps/Route119/scripts.pory"

# 336 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 337 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_TAYLOR, 0, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 338 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 339 "data/maps/Route119/scripts.pory"
	end
# 340 "data/maps/Route119/scripts.pory"

# 341 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 342 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_DOUG, 0, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 343 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 344 "data/maps/Route119/scripts.pory"
	end
# 345 "data/maps/Route119/scripts.pory"

# 346 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 347 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_GREG, 0, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 348 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 349 "data/maps/Route119/scripts.pory"
	end
# 350 "data/maps/Route119/scripts.pory"

# 351 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 352 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_KENT, 0, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 353 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 354 "data/maps/Route119/scripts.pory"
	end
# 355 "data/maps/Route119/scripts.pory"

# 356 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 357 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_JACKSON_1, 0, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 358 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 359 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchJackson
# 360 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 361 "data/maps/Route119/scripts.pory"
	release
# 362 "data/maps/Route119/scripts.pory"
	end
# 363 "data/maps/Route119/scripts.pory"

# 364 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 365 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 366 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 367 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 368 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 369 "data/maps/Route119/scripts.pory"
	release
# 370 "data/maps/Route119/scripts.pory"
	end
# 371 "data/maps/Route119/scripts.pory"

# 372 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 373 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 374 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 375 "data/maps/Route119/scripts.pory"
	end
# 376 "data/maps/Route119/scripts.pory"

# 377 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 378 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_CATHERINE_1, 0, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 379 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 380 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchCatherine
# 381 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 382 "data/maps/Route119/scripts.pory"
	release
# 383 "data/maps/Route119/scripts.pory"
	end
# 384 "data/maps/Route119/scripts.pory"

# 385 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 386 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 387 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 389 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 390 "data/maps/Route119/scripts.pory"
	release
# 391 "data/maps/Route119/scripts.pory"
	end
# 392 "data/maps/Route119/scripts.pory"

# 393 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 394 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 395 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 396 "data/maps/Route119/scripts.pory"
	end
# 397 "data/maps/Route119/scripts.pory"

# 398 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 399 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_HUGH, 0, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 400 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 401 "data/maps/Route119/scripts.pory"
	end
# 402 "data/maps/Route119/scripts.pory"

# 403 "data/maps/Route119/scripts.pory"
Route119_EventScript_Phil::
# 404 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_PHIL, 0, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 405 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 406 "data/maps/Route119/scripts.pory"
	end
# 407 "data/maps/Route119/scripts.pory"

# 408 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 409 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_YASU, 0, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 410 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 411 "data/maps/Route119/scripts.pory"
	end
# 412 "data/maps/Route119/scripts.pory"

# 413 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 414 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_TAKASHI, 0, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 415 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 416 "data/maps/Route119/scripts.pory"
	end
# 417 "data/maps/Route119/scripts.pory"

# 418 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 419 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_HIDEO, 0, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 420 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 421 "data/maps/Route119/scripts.pory"
	end
# 422 "data/maps/Route119/scripts.pory"

# 423 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 424 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_CHRIS, 0, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 425 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 426 "data/maps/Route119/scripts.pory"
	end
# 427 "data/maps/Route119/scripts.pory"

# 428 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 429 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_FABIAN, 0, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 430 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 431 "data/maps/Route119/scripts.pory"
	end
# 432 "data/maps/Route119/scripts.pory"

# 433 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 434 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_DAYTON, 0, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 435 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 436 "data/maps/Route119/scripts.pory"
	end
# 437 "data/maps/Route119/scripts.pory"

# 438 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 439 "data/maps/Route119/scripts.pory"
	trainerbattle TRAINER_BATTLE_DETECT, TRAINER_RACHEL, 0, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 440 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 441 "data/maps/Route119/scripts.pory"
	end
# 442 "data/maps/Route119/scripts.pory"

# 443 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 444 "data/maps/Route119/scripts.pory"
	lock
# 445 "data/maps/Route119/scripts.pory"
	faceplayer
# 446 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 447 "data/maps/Route119/scripts.pory"
	closemessage
# 448 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 449 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 450 "data/maps/Route119/scripts.pory"
	release
# 451 "data/maps/Route119/scripts.pory"
	end
# 452 "data/maps/Route119/scripts.pory"

# 453 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 454 "data/maps/Route119/scripts.pory"
	lock
# 455 "data/maps/Route119/scripts.pory"
	faceplayer
# 456 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 457 "data/maps/Route119/scripts.pory"
	closemessage
# 458 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 459 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 460 "data/maps/Route119/scripts.pory"
	release
# 461 "data/maps/Route119/scripts.pory"
	end
# 462 "data/maps/Route119/scripts.pory"

# 463 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 464 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 465 "data/maps/Route119/scripts.pory"
	end
# 466 "data/maps/Route119/scripts.pory"

# 467 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 468 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 469 "data/maps/Route119/scripts.pory"
	end
# 470 "data/maps/Route119/scripts.pory"

# 471 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 472 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 473 "data/maps/Route119/scripts.pory"
	end
# 474 "data/maps/Route119/scripts.pory"

# 475 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 476 "data/maps/Route119/scripts.pory"
	lockall
# 477 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 478 "data/maps/Route119/scripts.pory"
	waitmessage
# 479 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 480 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 481 "data/maps/Route119/scripts.pory"
	releaseall
# 482 "data/maps/Route119/scripts.pory"
	end
# 483 "data/maps/Route119/scripts.pory"

# 484 "data/maps/Route119/scripts.pory"
Route119_Text_MayIntro:
# 485 "data/maps/Route119/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 486 "data/maps/Route119/scripts.pory"
	.string "Where were you? I was looking for you!\p"
# 487 "data/maps/Route119/scripts.pory"
	.string "How much stronger have you gotten?\n"
# 488 "data/maps/Route119/scripts.pory"
	.string "Let me check for you!\p"
# 489 "data/maps/Route119/scripts.pory"
	.string "Ready with your POKéMON?\n"
# 490 "data/maps/Route119/scripts.pory"
	.string "Of course you are! Go!$"
# 491 "data/maps/Route119/scripts.pory"

# 492 "data/maps/Route119/scripts.pory"
Route119_Text_MayDefeat:
# 493 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
# 494 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}, you're strong!\p"
# 495 "data/maps/Route119/scripts.pory"
	.string "I was worried that you might be\n"
# 496 "data/maps/Route119/scripts.pory"
	.string "struggling with your training.$"
# 497 "data/maps/Route119/scripts.pory"

# 498 "data/maps/Route119/scripts.pory"
Route119_Text_MayPresentForYou:
# 499 "data/maps/Route119/scripts.pory"
	.string "MAY: But I had absolutely nothing to\n"
# 500 "data/maps/Route119/scripts.pory"
	.string "worry about! Keep it up!\p"
# 501 "data/maps/Route119/scripts.pory"
	.string "And, here! I have a present for you.$"
# 502 "data/maps/Route119/scripts.pory"

# 503 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainFly:
# 504 "data/maps/Route119/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\n"
# 505 "data/maps/Route119/scripts.pory"
	.string "instantly carry you to any town you've\l"
# 506 "data/maps/Route119/scripts.pory"
	.string "already visited.\p"
# 507 "data/maps/Route119/scripts.pory"
	.string "But, to use FLY, you have to get\n"
# 508 "data/maps/Route119/scripts.pory"
	.string "the GYM BADGE from FORTREE CITY.\l"
# 509 "data/maps/Route119/scripts.pory"
	.string "That's important, so don't forget.\p"
# 510 "data/maps/Route119/scripts.pory"
	.string "You should FLY home and visit\n"
# 511 "data/maps/Route119/scripts.pory"
	.string "LITTLEROOT for a change.\p"
# 512 "data/maps/Route119/scripts.pory"
	.string "I bet your mom's worried about you,\n"
# 513 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 514 "data/maps/Route119/scripts.pory"
	.string "Well, let's meet again somewhere!$"
# 515 "data/maps/Route119/scripts.pory"

# 516 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIntro:
# 517 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\n"
# 518 "data/maps/Route119/scripts.pory"
	.string "you've been looking for POKéMON?\p"
# 519 "data/maps/Route119/scripts.pory"
	.string "Let me see how good you got.\n"
# 520 "data/maps/Route119/scripts.pory"
	.string "I'll test you!\p"
# 521 "data/maps/Route119/scripts.pory"
	.string "Now!\n"
# 522 "data/maps/Route119/scripts.pory"
	.string "It's a battle, so battle!$"
# 523 "data/maps/Route119/scripts.pory"

# 524 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanDefeat:
# 525 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
# 526 "data/maps/Route119/scripts.pory"
	.string "You've gotten pretty darn decent.$"
# 527 "data/maps/Route119/scripts.pory"

# 528 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIllGiveYouThis:
# 529 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: I'd say you're good enough\n"
# 530 "data/maps/Route119/scripts.pory"
	.string "to search for POKéMON anywhere.\p"
# 531 "data/maps/Route119/scripts.pory"
	.string "Here, I'll give you this.\n"
# 532 "data/maps/Route119/scripts.pory"
	.string "Try it out.$"
# 533 "data/maps/Route119/scripts.pory"

# 534 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainFly:
# 535 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\n"
# 536 "data/maps/Route119/scripts.pory"
	.string "instantly carries you to any town\l"
# 537 "data/maps/Route119/scripts.pory"
	.string "you've already visited.\p"
# 538 "data/maps/Route119/scripts.pory"
	.string "But you need the FORTREE GYM BADGE \n"
# 539 "data/maps/Route119/scripts.pory"
	.string "to do that.\p"
# 540 "data/maps/Route119/scripts.pory"
	.string "Anyway, I have to move along.$"
# 541 "data/maps/Route119/scripts.pory"

# 542 "data/maps/Route119/scripts.pory"
Route119_Text_ScottWayToGoBeSeeingYou:
# 543 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hahahah!\n"
# 544 "data/maps/Route119/scripts.pory"
	.string "Way to go, {PLAYER}{KUN}!\p"
# 545 "data/maps/Route119/scripts.pory"
	.string "I just passed by a TRAINER riding\n"
# 546 "data/maps/Route119/scripts.pory"
	.string "a BIKE.\p"
# 547 "data/maps/Route119/scripts.pory"
	.string "You just beat that TRAINER, didn't you?\n"
# 548 "data/maps/Route119/scripts.pory"
	.string "It was pretty obvious that you did.\p"
# 549 "data/maps/Route119/scripts.pory"
	.string "The kid looked really upset with\n"
# 550 "data/maps/Route119/scripts.pory"
	.string "a face all red from anger.\p"
# 551 "data/maps/Route119/scripts.pory"
	.string "I sure seem to run into you often.\n"
# 552 "data/maps/Route119/scripts.pory"
	.string "Are you off to FORTREE GYM next?\p"
# 553 "data/maps/Route119/scripts.pory"
	.string "I expect that you'll do well at the GYM.\n"
# 554 "data/maps/Route119/scripts.pory"
	.string "Well, I'll be seeing you!$"
# 555 "data/maps/Route119/scripts.pory"

# 556 "data/maps/Route119/scripts.pory"

# 557 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym:
# 558 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 559 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 560 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hiya, {PLAYER}{KUN}, it's me!\p"
# 561 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 562 "data/maps/Route119/scripts.pory"
	.string "the FORTREE GYM.\p"
# 563 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 564 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the TRAINER\l"
# 565 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 566 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 567 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 568 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 569 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 570 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 571 "data/maps/Route119/scripts.pory"

# 572 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute:
# 573 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
# 574 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Stay away from the WEATHER\n"
# 575 "data/maps/Route119/scripts.pory"
	.string "INSTITUTE. It's not safe.$"
# 576 "data/maps/Route119/scripts.pory"

# 577 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute:
# 578 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
# 579 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Please don't go near the\n"
# 580 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE.$"
# 581 "data/maps/Route119/scripts.pory"

# 582 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons:
# 583 "data/maps/Route119/scripts.pory"
	.string "I thought you FLY by catching a whole\n"
# 584 "data/maps/Route119/scripts.pory"
	.string "flock of BIRD POKéMON, and then\l"
# 585 "data/maps/Route119/scripts.pory"
	.string "hanging on to them somehow.\p"
# 586 "data/maps/Route119/scripts.pory"
	.string "But it turns out there's an HM move\n"
# 587 "data/maps/Route119/scripts.pory"
	.string "called FLY!\p"
# 588 "data/maps/Route119/scripts.pory"
	.string "I wish I'd known about that a long\n"
# 589 "data/maps/Route119/scripts.pory"
	.string "time ago…$"
# 590 "data/maps/Route119/scripts.pory"

# 591 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires:
# 592 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 593 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 594 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares BIKE tires.\n"
# 595 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 596 "data/maps/Route119/scripts.pory"

# 597 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase:
# 598 "data/maps/Route119/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\n"
# 599 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 600 "data/maps/Route119/scripts.pory"
	.string "SECRET BASE?$"
# 601 "data/maps/Route119/scripts.pory"

# 602 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree:
# 603 "data/maps/Route119/scripts.pory"
	.string "ROUTE 119\n"
# 604 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} FORTREE CITY$"
# 605 "data/maps/Route119/scripts.pory"

# 606 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute:
# 607 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE$"
# 608 "data/maps/Route119/scripts.pory"

# 609 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration:
# 610 "data/maps/Route119/scripts.pory"
	.string "TRAINER TIPS\p"
# 611 "data/maps/Route119/scripts.pory"
	.string "Up to sixteen decorations and\n"
# 612 "data/maps/Route119/scripts.pory"
	.string "furniture items can be placed in\l"
# 613 "data/maps/Route119/scripts.pory"
	.string "a SECRET BASE.\p"
# 614 "data/maps/Route119/scripts.pory"
	.string "Pick your favorite items and create\n"
# 615 "data/maps/Route119/scripts.pory"
	.string "your very own SECRET BASE exactly the\l"
# 616 "data/maps/Route119/scripts.pory"
	.string "way you want.$"
