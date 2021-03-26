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
	LOAD_MIO0(0x0A, _bitfs_skybox_mio0SegmentRomStart, _bitfs_skybox_mio0SegmentRomEnd), 
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
	LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, wf_geo_0007E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, wf_geo_000820), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, wf_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, wf_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, wf_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, wf_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, wf_geo_0008E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, wf_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, wf_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE, wf_geo_000AE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, wf_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, wf_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM, wf_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, wf_geo_0009D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, wf_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP, wf_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP, wf_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM, wf_geo_000A58), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM, wf_geo_000A98), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART, wf_geo_000AB0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE, wf_geo_000AC8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM, wf_geo_000AF8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM, wf_geo_000B10), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED, wf_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT, wf_geo_000B78), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT, wf_geo_000B90), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD, wf_geo_000BA8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR, wf_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED, wf_geo_000BC8), 

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(250, LEVEL_CASTLE_GROUNDS, 0x01, 2, WARP_NO_CHECKPOINT),
		WARP_NODE(251, LEVEL_CASTLE_GROUNDS, 0x01, 3, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_WF, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_WF, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(0, 193, 1742, -519, 0, -180, 0, 0x00110000, bhvCoinFormation),
		OBJECT(0, -410, 3151, 16, 0, -180, 0, 0x00110000, bhvCoinFormation),
		OBJECT(0, 397, 4314, 229, 0, -180, 0, 0x00110000, bhvCoinFormation),
		OBJECT(0, -6375, 3223, -10802, 0, -180, 0, 0x00110000, bhvCoinFormation),
		OBJECT(0, -4879, 1975, -8393, 0, 90, 0, 0x00100000, bhvCoinFormation),
		OBJECT(0, -7984, 2580, -6862, 0, 90, 0, 0x00100000, bhvCoinFormation),
		OBJECT(0, -2256, 1632, -6155, 0, -45, 0, 0x00100000, bhvCoinFormation),
		OBJECT(0, -2848, 1632, -6218, 0, 45, 0, 0x00100000, bhvCoinFormation),
		OBJECT(0, -417, 496, -2570, 0, 82, 0, 0x00000000, bhvCoinFormation),
		OBJECT(0, 5, 826, 799, 0, -180, 0, 0x00100000, bhvCoinFormation),
		OBJECT(0, -4, 1107, 1028, 0, -180, 0, 0x00000000, bhvCoinFormation),
		OBJECT(0, 8726, 1411, 10821, 0, -180, 0, 0x00110000, bhvCoinFormation),
		OBJECT(0, 8122, 2819, 11356, 0, -180, 0, 0x00110000, bhvCoinFormation),
		OBJECT(0, 8930, 3982, 11569, 0, -180, 0, 0x00110000, bhvCoinFormation),
		OBJECT(0, -47, 6317, 3794, 0, -180, 0, 0x00100000, bhvCoinFormation),
		OBJECT(0, 263, 6092, 8583, 0, -147, 0, 0x00100000, bhvCoinFormation),
		OBJECT(0, -1690, 6335, 724, 0, 0, 0, 0, bhvCoinFormation),
		OBJECT(0, 1488, 6335, 603, 0, 0, 0, 0, bhvCoinFormation),
		OBJECT(0, -11918, 2294, -3870, 0, 0, 0, 0, bhvCoinFormation),
		OBJECT(0, -9954, 3474, -6894, 0, 90, 0, 0, bhvCoinFormation),
		OBJECT(0, -5540, 6682, -5435, 0, 90, 0, 0x00110000, bhvCoinFormation),
		OBJECT(0, -11043, 1768, 5630, 0, -180, 0, 0x00110000, bhvCoinFormation),
		OBJECT(0, -10976, 3474, 8252, 0, -180, 0, 0x00110000, bhvCoinFormation),
		OBJECT(0, -10739, 1603, 10714, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(0, -12780, 1603, 10714, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(0, -10564, 2562, 6732, 0, -180, 0, 0x00110000, bhvCoinFormation),
		OBJECT(0, -13047, 3450, 8877, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(0, -14254, 1603, 8245, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(255, -9627, 6349, -6381, 0, 0, 0, 0, WaterCube_Circular),
		OBJECT(255, -942, 521, 92, 0, 0, 0, 0, WaterCube_Circular),
		OBJECT(255, -4407, 6349, -6381, 0, -180, 0, 0, WaterCube_Circular),
		OBJECT(MODEL_BOWLING_BALL, -12019, 1905, 10686, 0, 0, 0, 0, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -13034, 3507, 8219, 0, 0, 0, 0, bhvFireSpitter),
		OBJECT(MODEL_WF_LARGE_BOMP, -13007, 1516, 6927, 0, -180, 0, 0, bhvLargeBomp),
		OBJECT(MODEL_WF_LARGE_BOMP, -13007, 1516, 9428, 0, -180, 0, 0, bhvLargeBomp),
		OBJECT(MODEL_WF_LARGE_BOMP, -10993, 1516, 8371, 0, 0, 0, 0, bhvLargeBomp),
		OBJECT(MODEL_WF_SMALL_BOMP, -11995, 3319, 7997, 0, 90, 0, 0, bhvSmallBomp),
		OBJECT(MODEL_WF_SMALL_BOMP, -12429, 3319, 8441, 0, -90, 0, 0, bhvSmallBomp),
		OBJECT(MODEL_STAR, 9720, 7652, 2215, 0, 0, 0, 0, bhvStar),
		OBJECT(MODEL_STAR, -12053, 4965, 8173, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_STAR, -7019, 8353, -6391, 0, 0, 0, 0x04000000, bhvStar),
		OBJECT(MODEL_STAR, 8542, 281, 11281, 0, 0, 0, 0x05000000, bhvStar),
		OBJECT(MODEL_NONE, -12001, 1930, 3288, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_THWOMP, -14049, 1565, 5746, 0, 90, 0, 0, bhvThwomp),
		OBJECT(MODEL_THWOMP, -14129, 1565, 10686, 0, 0, 0, 0, bhvThwomp),
		OBJECT(MODEL_THWOMP, -9921, 1565, 10723, 0, 90, 0, 0, bhvThwomp),
		OBJECT(MODEL_NONE, -12647, 1444, 8190, 0, 0, 0, 0x000B0000, bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 13829, 4763, -7284, 0, 0, 0, 0x300C0000, bhvInstantActiveWarp),
		OBJECT(255, 2452, 2292, -7228, 0, 0, 0, 0, WaterCube_UPDown),
		OBJECT(MODEL_WHOMP, -12991, 3352, 7043, 0, -180, 0, 0, bhvSmallWhomp),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 6),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	AREA(2, wf_area_2),
		OBJECT(MODEL_STAR, 0, 0, 0, 0, 0, 0, 0x02000000, bhvStar),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 7),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	AREA(3, wf_area_3),
		OBJECT(MODEL_STAR, 690, 2186, -2719, 0, 0, 0, 0x03000000, bhvStar),
		TERRAIN(wf_area_3_collision),
		MACRO_OBJECTS(wf_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 8),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
