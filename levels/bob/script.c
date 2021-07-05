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
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x1B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x1C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_BOB, 0x01, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, -1586, -43, 22, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -411, 137, 22, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 777, 137, 22, 0, 0, 0, 0xA0000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1091, 138, 21, 0, 0, 0, 0x00040000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x1B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x1C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_BOB, 0x02, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, -1586, -43, 22, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -411, 137, 22, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 777, 137, 22, 0, 0, 0, 0xA0000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1091, 138, 21, 0, 0, 0, 0x00050000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(3, bob_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x1B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x1C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_BOB, 0x03, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_BOB, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, -1586, -43, 22, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -411, 137, 22, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 777, 137, 22, 0, 0, 0, 0xA0000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1091, 138, 21, 0, 0, 0, 0x00060000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(bob_area_3_collision),
		MACRO_OBJECTS(bob_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(4, bob_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x1B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x1C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_BOB, 0x04, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_STAR, -1586, 92, 22, 0, 0, 0, 0, bhvStar, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -411, 137, 22, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 777, 137, 22, 0, 0, 0, 0xA0000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1091, 138, 21, 0, 0, 0, 0x00070000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(bob_area_4_collision),
		MACRO_OBJECTS(bob_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
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
