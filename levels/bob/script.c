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
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group3_mio0SegmentRomStart, _group3_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	AREA(1, bob_area_1),
		WARP_NODE(21, LEVEL_BOB, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_BOB, 1, 21, WARP_NO_CHECKPOINT),
		WARP_NODE(4, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(3, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE_COURTYARD, 1, 53, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE_COURTYARD, 1, 52, WARP_NO_CHECKPOINT),
		WARP_NODE(14, LEVEL_BOB, 1, 13, WARP_NO_CHECKPOINT),
		WARP_NODE(13, LEVEL_BOB, 1, 14, WARP_NO_CHECKPOINT),
		WARP_NODE(12, LEVEL_BOB, 1, 11, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_BOB, 1, 12, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, 1019, 2856, 4763, 0, 60, 0, 0x0, bhvHiddenObject, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, 1019, 2657, 4763, 0, 60, 0, 0x0, bhvHiddenObject, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, 919, 2657, 4937, 0, 60, 0, 0x0, bhvHiddenObject, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(212, -9346, 6740, 3013, 0, -109, 0, 0x0, bhv1Up),
		OBJECT_WITH_ACTS(188, 1864, 2081, 5495, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(188, 4059, 2081, 3535, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(188, 2947, 3840, 5433, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(188, 3339, 2081, 4842, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(188, 5457, 4400, 3855, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(188, 1815, 1094, -3984, 0, 0, 0, 0x0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(188, -7499, 4015, 4635, 0, -109, 0, 0x0, bhvBobomb),
		OBJECT(188, -8532, 4015, 2979, 0, -109, 0, 0x0, bhvBobomb),
		OBJECT(188, -3191, 2081, 3106, 0, -109, 0, 0x0, bhvBobomb),
		OBJECT(223, -11090, 6718, -3514, 0, -26, -180, 0x0, bhvChuckya),
		OBJECT(0, -9580, 4130, 2840, 0, -109, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -6967, 1767, 410, 0, -88, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -9972, 8740, -5640, 0, 64, 180, 0x0, bhvCoinFormation),
		OBJECT(0, -10996, 5387, -822, 0, -26, -180, 0x20000, bhvCoinFormation),
		OBJECT(0, -102, -932, -4360, 0, -11, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3058, 1273, 159, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3722, 3980, 5126, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -1274, 2188, 4624, 0, 13, 0, 0x0, bhvCoinFormation),
		OBJECT_WITH_ACTS(137, 3082, 1251, -4236, 0, 0, 0, 0x50000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(137, 862, 2651, 6068, 0, -23, 0, 0x50000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(137, -4739, 4669, 1590, 0, -98, 0, 0x60000, bhvExclamationBox),
		OBJECT(180, -12060, 6543, -178, 0, -26, -180, 0x0, bhvFireSpitter),
		OBJECT(180, -11184, 7038, -5021, 0, -26, -180, 0x0, bhvFireSpitter),
		OBJECT(180, -12384, 6152, -2259, 0, 16, 180, 0x0, bhvFireSpitter),
		OBJECT_WITH_ACTS(207, 252, 2289, 5673, 0, -36, 0, 0x0, bhvFloorSwitchHiddenObjects, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(192, -10990, 6185, 1013, 0, -26, -180, 0x0, bhvGoomba),
		OBJECT_WITH_ACTS(0, -262, 3006, 4796, 0, 0, 0, 0x0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1128, -932, -613, 0, 0, 0, 0x0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT(0, -9928, 6961, -5675, 0, -26, -180, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -5334, 4320, 779, 0, -109, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -8776, 4015, 1147, 0, -109, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(104, -5224, 4195, 5025, 0, -109, 0, 0x10000, bhvKoopa),
		OBJECT(104, -2809, 2081, 1570, 0, -109, 0, 0x10000, bhvKoopa),
		OBJECT_WITH_ACTS(0, 1627, -653, 405, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(24, -424, 2289, 5608, 0, 0, 0, 0x0, bhvTree, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(24, 215, 2081, 3542, 0, 0, 0, 0x0, bhvTree, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
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
