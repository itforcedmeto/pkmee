# 1 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
.set LOCALID_WOMAN, 7
# 3 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 4 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_MapScripts::
# 5 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LilycoveCity_DepartmentStore_5F_OnWarp
# 6 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.byte 0
# 7 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 8 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
@ During the abnormal weather from Kyogre/Groudon awakening the dept store rooftop is inaccessible
# 9 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
@ Likely done to avoid dealing with showing the weather. Technically the rooftop is indoors
# 10 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_OnWarp:
# 11 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 12 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 2, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 13 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 14 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte 0
# 15 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 16 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs::
# 17 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setobjectxy LOCALID_WOMAN, 16, 2
# 18 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	turnobject LOCALID_WOMAN, DIR_NORTH
# 19 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 20 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 21 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarLeft::
# 22 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 23 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 24 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 25 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 26 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Dolls
# 27 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 28 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 29 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 30 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 31 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 32 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Dolls:
# 33 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PICHU_DOLL
# 34 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKACHU_DOLL
# 35 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 36 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_JIGGLYPUFF_DOLL
# 37 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_DUSKULL_DOLL
# 38 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_WYNAUT_DOLL
# 39 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALTOY_DOLL
# 40 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_KECLEON_DOLL
# 41 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 42 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 43 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SWABLU_DOLL
# 44 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GULPIN_DOLL
# 45 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 46 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 47 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 48 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 49 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidLeft::
# 50 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 51 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 52 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 53 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 54 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Cushions
# 55 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 56 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 57 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 58 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 59 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 60 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Cushions:
# 61 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKA_CUSHION
# 62 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ROUND_CUSHION
# 63 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ZIGZAG_CUSHION
# 64 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIN_CUSHION
# 65 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_DIAMOND_CUSHION
# 66 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALL_CUSHION
# 67 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GRASS_CUSHION
# 68 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FIRE_CUSHION
# 69 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_WATER_CUSHION
# 70 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 71 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 72 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 73 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 74 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidRight::
# 75 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 76 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 77 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 78 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 79 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Posters
# 80 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 81 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 82 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 83 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 84 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 85 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Posters:
# 86 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALL_POSTER
# 87 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GREEN_POSTER
# 88 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_RED_POSTER
# 89 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BLUE_POSTER
# 90 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_CUTE_POSTER
# 91 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKA_POSTER
# 92 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_LONG_POSTER
# 93 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SEA_POSTER
# 94 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SKY_POSTER
# 95 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 96 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 97 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 98 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 99 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarRight::
# 100 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 101 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 102 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 103 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 104 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Mats
# 105 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 106 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 107 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 108 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 109 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 110 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Mats:
# 111 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SURF_MAT
# 112 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_THUNDER_MAT
# 113 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FIRE_BLAST_MAT
# 114 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_POWDER_SNOW_MAT
# 115 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ATTRACT_MAT
# 116 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FISSURE_MAT
# 117 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIKES_MAT
# 118 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 119 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_JUMP_MAT
# 120 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIN_MAT
# 121 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 122 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 123 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 124 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 125 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_PokefanF::
# 126 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls, MSGBOX_NPC
# 127 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 128 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 129 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_Woman::
# 130 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lockall
# 131 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_WOMAN, Common_Movement_FacePlayer
# 132 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 133 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
# 134 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
# 135 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather
# 136 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 137 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 138 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal::
# 139 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere, MSGBOX_DEFAULT
# 140 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 141 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
# 142 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 143 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 144 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather::
# 145 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather, MSGBOX_DEFAULT
# 146 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 147 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_WOMAN, Common_Movement_WalkInPlaceFasterUp
# 148 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 149 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
# 150 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 151 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 152 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_LittleGirl::
# 153 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon, MSGBOX_NPC
# 154 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 155 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 156 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls:
# 157 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "This place is full of cute DOLLS.\p"
# 158 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I should buy some for me, instead of\n"
# 159 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "just for my children.$"
# 160 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 161 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon:
# 162 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I'm not big enough to raise POKéMON,\n"
# 163 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "so I'm getting a cute DOLL instead.$"
# 164 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 165 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere:
# 166 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "They sell many cute MATS here.\p"
# 167 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I wonder which one I should get?\n"
# 168 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Maybe I'll buy them all…$"
# 169 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 170 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather:
# 171 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I think they closed the rooftop\n"
# 172 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "because the weather is wild today.$"

LilycoveCity_DepartmentStore_5F_Evo1::
# 175 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 176 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Evo1_Text_0
# 177 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 178 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_5F_Evo1_Mart
# 179 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Evo1_Text_1
# 180 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	return


	.align 2
# 183 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Evo1_Mart:
# 184 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 185 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_WATER_STONE
# 186 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 187 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 188 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_ICE_STONE
# 189 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_SUN_STONE
# 190 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_MOON_STONE
# 191 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 192 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 193 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_5F_Evo2::
# 197 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 198 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Evo2_Text_0
# 199 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 200 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_5F_Evo2_Mart
# 201 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Evo1_Text_1
# 202 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	return


	.align 2
# 205 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Evo2_Mart:
# 206 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 207 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_TART_APPLE
# 208 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 209 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 210 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 211 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 212 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 213 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 214 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 215 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 216 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_METAL_COAT
# 217 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_5F_Other::
# 221 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 222 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Other_Text_0
# 223 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 224 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_5F_Other_Mart
# 225 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Evo1_Text_1
# 226 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	return


	.align 2
# 229 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Other_Mart:
# 230 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 231 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 232 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_BOTTLE_CAP
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_5F_Mints::
# 236 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 237 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Mints_Text_0
# 238 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 239 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_5F_Mints_Mart
# 240 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Evo1_Text_1
# 241 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	return


	.align 2
# 244 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Mints_Mart:
# 245 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 246 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 247 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 248 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 249 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 250 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 251 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_LAX_MINT
# 252 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 253 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 254 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_MILD_MINT
# 255 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_RASH_MINT
# 256 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 257 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_CALM_MINT
# 258 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 259 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 260 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 261 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 262 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 263 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 264 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 265 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_5F_Evo1_Text_0:
# 176 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Would you like to buy evolution stones?$"

LilycoveCity_DepartmentStore_5F_Evo1_Text_1:
# 179 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Farewell.$"

LilycoveCity_DepartmentStore_5F_Evo2_Text_0:
# 198 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Would you like to buy\n"
	.string "evolution-inducing items?$"

LilycoveCity_DepartmentStore_5F_Other_Text_0:
# 222 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Would you like to buy useful items to\n"
	.string "enhance your POKéMON?$"

LilycoveCity_DepartmentStore_5F_Mints_Text_0:
# 237 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Would you like to buy mints to give to\n"
	.string "your POKéMON?$"
