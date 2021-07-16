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
#include "levels/castle_grounds/header.h"

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group10_mio0SegmentRomStart, _group10_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 

	AREA(1, castle_grounds_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 1, 0xC, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 0xB, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 0, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(253, 1303, -690, -1706, 42, -44, 8, 0x000A0000, bhvDiamondRot),
		OBJECT(253, -816, -690, -2153, 48, -7, 23, 0x000A0000, bhvDiamondRot),
		OBJECT(MODEL_NONE, 0, -490, 0, 0, 0, 0, 0x000C0000, bhvAirborneDeathWarp),
		OBJECT(255, 278, -690, -1807, 0, 0, 0, 0x000A0000, bhvGlowRot),
		OBJECT(MODEL_NONE, 0, -387, 0, 0, 0, 0, 0x000A0000, bhvAirborneWarp),
		OBJECT(MODEL_NONE, 0, -503, 0, 0, 0, 0, 0x000B0000, bhvAirborneStarCollectWarp),
		OBJECT(254, 278, -690, -1807, 9, 49, 34, 0x000A0000, bhvTorusRot),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 5),
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
