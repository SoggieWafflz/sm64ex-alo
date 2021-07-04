#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/castle_courtyard/header.h"

const LevelScript level_castle_courtyard_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group16_mio0SegmentRomStart, _group16_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE, spiky_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_courtyard_geo_000200), 

	AREA(1, castle_courtyard_area_1),
		WARP_NODE(1, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE_COURTYARD, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, -605, 2856, 4356, 0, 60, 0, 0x0, bhvHiddenObject, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, -605, 2657, 4356, 0, 60, 0, 0x0, bhvHiddenObject, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, -705, 2657, 4529, 0, 60, 0, 0x0, bhvHiddenObject, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(212, -10971, 6740, 2605, 0, -109, 0, 0x0, bhv1Up),
		OBJECT_WITH_ACTS(188, 239, 2081, 5087, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(188, 2434, 2081, 3127, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(188, 1322, 3840, 5025, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(188, 1714, 2081, 4434, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(188, 3832, 4400, 3448, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(188, 190, 1094, -4392, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(188, -9124, 4015, 4227, 0, -109, 0, 0x0, bhvBobomb),
		OBJECT(188, -10157, 4015, 2571, 0, -109, 0, 0x0, bhvBobomb),
		OBJECT(188, -4816, 2081, 2699, 0, -109, 0, 0x0, bhvBobomb),
		OBJECT(223, -12715, 6718, -3922, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(0, -11204, 4130, 2432, 0, -109, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -8592, 1767, 2, 0, -88, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -11596, 8740, -6048, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -12621, 5387, -1230, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -1727, -932, -4768, 0, -11, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 1433, 1273, -249, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2097, 3980, 4718, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -2899, 2188, 4216, 0, 13, 0, 0x0, bhvCoinFormation),
		OBJECT_WITH_ACTS(137, 1457, 1251, -4644, 0, 0, 0, 0x50000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(137, -763, 2651, 5660, 0, -23, 0, 0x50000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(137, -6363, 4669, 1182, 0, -98, 0, 0x30000, bhvExclamationBox),
		OBJECT(180, -13685, 6543, -586, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -12809, 7038, -5429, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -14009, 6152, -2667, 0, 42, 0, 0x0, bhvFireSpitter),
		OBJECT_WITH_ACTS(207, -1373, 2289, 5265, 0, -36, 0, 0x0, bhvFloorSwitchHiddenObjects, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(192, -12615, 6185, 605, 0, 0, 0, 0x0, bhvGoomba),
		OBJECT_WITH_ACTS(0, -1887, 3006, 4388, 0, 0, 0, 0x0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -497, -932, -1021, 0, 0, 0, 0x0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(0, -11731, 6966, -6341, 0, 26, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -6958, 4320, 371, 0, -109, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -10401, 4015, 739, 0, -109, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(104, -6849, 4195, 4617, 0, -109, 0, 0x10000, bhvKoopa),
		OBJECT(104, -4434, 2081, 1163, 0, -109, 0, 0x10000, bhvKoopa),
		OBJECT_WITH_ACTS(24, -2049, 2289, 5200, 0, 0, 0, 0x0, bhvTree, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(24, -1410, 2081, 3134, 0, 0, 0, 0x0, bhvTree, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 53, -383, -121, 0, 0, 0, 0xa0000, bhvAirborneDeathWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(0, -11847, 7290, -6443, 0, 0, 0, 0x0, bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, -10082, 7089, -6305, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -12030, 6270, 1106, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -10100, 8623, 3980, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -10100, 4221, 3980, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -7403, 3171, 2404, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 56, -642, 1013, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6, 1226, -3960, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 3414, 4590, 2798, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT_WITH_ACTS(0, -86, -405, 131, 0, 0, 0, 0x00010000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(castle_courtyard_area_1_collision),
		MACRO_OBJECTS(castle_courtyard_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 36),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
