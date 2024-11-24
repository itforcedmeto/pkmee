# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 4 "data/maps/Route101/scripts.pory"

# 5 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 6 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 7 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 8 "data/maps/Route101/scripts.pory"
	.byte 0
# 9 "data/maps/Route101/scripts.pory"

# 10 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 11 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route101/scripts.pory"
	end
# 13 "data/maps/Route101/scripts.pory"

# 14 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 15 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 16 "data/maps/Route101/scripts.pory"
	.2byte 0
# 17 "data/maps/Route101/scripts.pory"

# 18 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 19 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 20 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 21 "data/maps/Route101/scripts.pory"
	end
# 22 "data/maps/Route101/scripts.pory"

# 23 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 24 "data/maps/Route101/scripts.pory"
	lockall
# 25 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 26 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 27 "data/maps/Route101/scripts.pory"
	closemessage
# 28 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 29 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 30 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 31 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 32 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 33 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 35 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 36 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 38 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 40 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 41 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 43 "data/maps/Route101/scripts.pory"
	closemessage
# 44 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 45 "data/maps/Route101/scripts.pory"
	releaseall
# 46 "data/maps/Route101/scripts.pory"
	end
# 47 "data/maps/Route101/scripts.pory"

# 48 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 49 "data/maps/Route101/scripts.pory"
	lockall
# 50 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 51 "data/maps/Route101/scripts.pory"
	closemessage
# 52 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 53 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route101/scripts.pory"
	releaseall
# 55 "data/maps/Route101/scripts.pory"
	end
# 56 "data/maps/Route101/scripts.pory"

# 57 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 58 "data/maps/Route101/scripts.pory"
	lockall
# 59 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 60 "data/maps/Route101/scripts.pory"
	closemessage
# 61 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 62 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route101/scripts.pory"
	releaseall
# 64 "data/maps/Route101/scripts.pory"
	end
# 65 "data/maps/Route101/scripts.pory"

# 66 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 67 "data/maps/Route101/scripts.pory"
	lockall
# 68 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 69 "data/maps/Route101/scripts.pory"
	closemessage
# 70 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 71 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route101/scripts.pory"
	releaseall
# 73 "data/maps/Route101/scripts.pory"
	end
# 74 "data/maps/Route101/scripts.pory"

# 75 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 76 "data/maps/Route101/scripts.pory"
	walk_up
# 77 "data/maps/Route101/scripts.pory"
	step_end
# 78 "data/maps/Route101/scripts.pory"

# 79 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 80 "data/maps/Route101/scripts.pory"
	walk_right
# 81 "data/maps/Route101/scripts.pory"
	step_end
# 82 "data/maps/Route101/scripts.pory"

# 83 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 84 "data/maps/Route101/scripts.pory"
	walk_down
# 85 "data/maps/Route101/scripts.pory"
	step_end
# 86 "data/maps/Route101/scripts.pory"

# 87 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 118 "data/maps/Route101/scripts.pory"
	step_end
# 119 "data/maps/Route101/scripts.pory"

# 120 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 127 "data/maps/Route101/scripts.pory"
	step_end
# 128 "data/maps/Route101/scripts.pory"

# 129 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 130 "data/maps/Route101/scripts.pory"
	step_end
# 131 "data/maps/Route101/scripts.pory"

# 132 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 133 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 134 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 135 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 136 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 137 "data/maps/Route101/scripts.pory"
	step_end
# 138 "data/maps/Route101/scripts.pory"

# 139 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 144 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 145 "data/maps/Route101/scripts.pory"
	step_end
# 146 "data/maps/Route101/scripts.pory"

# 147 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route101/scripts.pory"
	step_end
# 179 "data/maps/Route101/scripts.pory"

# 180 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 187 "data/maps/Route101/scripts.pory"
	step_end
# 188 "data/maps/Route101/scripts.pory"

# 189 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 190 "data/maps/Route101/scripts.pory"
	step_end
# 191 "data/maps/Route101/scripts.pory"

# 192 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 193 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 194 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 195 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 196 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 197 "data/maps/Route101/scripts.pory"
	step_end
# 198 "data/maps/Route101/scripts.pory"

# 199 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 200 "data/maps/Route101/scripts.pory"
	walk_up
# 201 "data/maps/Route101/scripts.pory"
	walk_up
# 202 "data/maps/Route101/scripts.pory"
	step_end
# 203 "data/maps/Route101/scripts.pory"

# 204 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 205 "data/maps/Route101/scripts.pory"
	walk_up
# 206 "data/maps/Route101/scripts.pory"
	walk_left
# 207 "data/maps/Route101/scripts.pory"
	walk_up
# 208 "data/maps/Route101/scripts.pory"
	step_end
# 209 "data/maps/Route101/scripts.pory"

# 210 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 211 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 212 "data/maps/Route101/scripts.pory"
	end
# 213 "data/maps/Route101/scripts.pory"

# 214 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 215 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 216 "data/maps/Route101/scripts.pory"
	end
# 217 "data/maps/Route101/scripts.pory"

# 218 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 219 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 220 "data/maps/Route101/scripts.pory"
	end
# 221 "data/maps/Route101/scripts.pory"

# 222 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 223 "data/maps/Route101/scripts.pory"
@ jd: i changed the ledge location to ensure player always approaches bag from the same square. this is probably fine but not 100% ideal.
# 224 "data/maps/Route101/scripts.pory"
	lock
# 225 "data/maps/Route101/scripts.pory"
	faceplayer
# 226 "data/maps/Route101/scripts.pory"
	callnative StartNewPokeballCaseUI
# 227 "data/maps/Route101/scripts.pory"
	waitstate
# 228 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 229 "data/maps/Route101/scripts.pory"
	special EnableNationalPokedex
# 230 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 231 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DistractIt, MSGBOX_DEFAULT
# 233 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonApproach
# 234 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_ZIGZAGOON_GALAR, 3
# 236 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON_GALAR, CRY_MODE_ENCOUNTER
# 237 "data/maps/Route101/scripts.pory"
	delay 40
# 238 "data/maps/Route101/scripts.pory"
	waitmoncry
# 239 "data/maps/Route101/scripts.pory"
	dowildbattle
# 240 "data/maps/Route101/scripts.pory"
	playbgm MUS_ROUTE101, TRUE
# 241 "data/maps/Route101/scripts.pory"
	delay 10
# 242 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFlee
# 243 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 245 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 246 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 247 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproach
# 248 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 250 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 251 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 252 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 253 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 254 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 255 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 256 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 257 "data/maps/Route101/scripts.pory"
	checkplayergender
# 258 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 259 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 260 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 261 "data/maps/Route101/scripts.pory"
	waitstate
# 262 "data/maps/Route101/scripts.pory"
	release
# 263 "data/maps/Route101/scripts.pory"
	end
# 264 "data/maps/Route101/scripts.pory"

# 265 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonApproach:
# 266 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 267 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 268 "data/maps/Route101/scripts.pory"
	walk_right
# 269 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 270 "data/maps/Route101/scripts.pory"
	step_end
# 271 "data/maps/Route101/scripts.pory"
	
# 272 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFlee:
# 273 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 274 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 275 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 276 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 277 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 278 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 279 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 280 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 281 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 282 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 283 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 284 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 285 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 286 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 287 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 288 "data/maps/Route101/scripts.pory"
	step_end
# 289 "data/maps/Route101/scripts.pory"

# 290 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproach:
# 291 "data/maps/Route101/scripts.pory"
	walk_right
# 292 "data/maps/Route101/scripts.pory"
	walk_right
# 293 "data/maps/Route101/scripts.pory"
	walk_down
# 294 "data/maps/Route101/scripts.pory"
	walk_down
# 295 "data/maps/Route101/scripts.pory"
	face_right
# 296 "data/maps/Route101/scripts.pory"
	step_end
# 297 "data/maps/Route101/scripts.pory"

# 298 "data/maps/Route101/scripts.pory"
Route101_ORIGINAL_EventScript_BirchsBag::
# 299 "data/maps/Route101/scripts.pory"
	lock
# 300 "data/maps/Route101/scripts.pory"
	faceplayer
# 301 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 302 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 303 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 304 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 305 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 306 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 307 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 308 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 309 "data/maps/Route101/scripts.pory"
	waitstate
# 310 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 311 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 313 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 314 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 315 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 316 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 317 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 318 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 319 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 320 "data/maps/Route101/scripts.pory"
	checkplayergender
# 321 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 322 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 323 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 324 "data/maps/Route101/scripts.pory"
	waitstate
# 325 "data/maps/Route101/scripts.pory"
	release
# 326 "data/maps/Route101/scripts.pory"
	end
# 327 "data/maps/Route101/scripts.pory"

# 328 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 329 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 330 "data/maps/Route101/scripts.pory"
	return
# 331 "data/maps/Route101/scripts.pory"

# 332 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 333 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 334 "data/maps/Route101/scripts.pory"
	return
# 335 "data/maps/Route101/scripts.pory"

# 336 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 337 "data/maps/Route101/scripts.pory"
	walk_right
# 338 "data/maps/Route101/scripts.pory"
	step_end
# 339 "data/maps/Route101/scripts.pory"

# 340 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 341 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 342 "data/maps/Route101/scripts.pory"

# 343 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 344 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 345 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 346 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 347 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 348 "data/maps/Route101/scripts.pory"

# 349 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 350 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 351 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 352 "data/maps/Route101/scripts.pory"

# 353 "data/maps/Route101/scripts.pory"
Route101_Text_DistractIt:
# 354 "data/maps/Route101/scripts.pory"
	.string "Quick, distract it!$"
# 355 "data/maps/Route101/scripts.pory"

# 356 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 357 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 358 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 359 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 360 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 361 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 362 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 363 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 364 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 365 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 366 "data/maps/Route101/scripts.pory"

# 367 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 368 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 369 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 370 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 371 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 372 "data/maps/Route101/scripts.pory"

# 373 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 374 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 375 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 376 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 377 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 378 "data/maps/Route101/scripts.pory"

# 379 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 380 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 381 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"
