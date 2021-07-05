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
#include "levels/wf/header.h"

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _grass_mio0SegmentRomStart, _grass_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group1_mio0SegmentRomStart, _group1_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE,         warp_pipe_geo),

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x2B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x2C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_WF, 0x01, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_WF, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, -1586, -43, 22, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -411, 137, 22, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 777, -43, 22, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1091, 138, 21, 0, 0, 0, 0x00080000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(2, wf_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x2B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x2C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_WF, 0x02, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_WF, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, -1586, -43, 22, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -411, 137, 22, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 777, -43, 22, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1091, 138, 21, 0, 0, 0, 0x00090000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(3, wf_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x2B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x2C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_WF, 0x03, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_WF, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, -1586, -43, 22, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -411, 137, 22, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 777, -43, 22, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1091, 138, 21, 0, 0, 0, 0x000A0000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(wf_area_3_collision),
		MACRO_OBJECTS(wf_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(4, wf_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x2B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x2C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_WF, 0x04, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_STAR, -1586, 92, 22, 0, 0, 0, 0, bhvStar, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -411, 137, 22, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 777, -43, 22, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1091, 138, 21, 0, 0, 0, 0x000B0000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(wf_area_4_collision),
		MACRO_OBJECTS(wf_area_4_macro_objs),
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
