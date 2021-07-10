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
#include "levels/ccm/header.h"

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _snow_mio0SegmentRomStart, _snow_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group7_mio0SegmentRomStart, _group7_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group16_mio0SegmentRomStart, _group16_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE, warp_pipe_geo), 

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x3B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x3C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_CCM, 0x01, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_CCM, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, 1919, -136, -4951, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 5953, 1073, -1342, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -3873, -7542, 294, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -3559, -7360, 293, 0, 0, 0, 0x000C0000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(2, ccm_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x3B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x3C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_CCM, 0x02, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_CCM, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, -11899, 434, 3841, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -1876, -1018, 1150, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -3830, -7542, 2092, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -3516, -7360, 2092, 0, 0, 0, 0x000D0000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(ccm_area_2_collision),
		MACRO_OBJECTS(ccm_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(3, ccm_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x3B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x3C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_CCM, 0x03, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_CCM, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, -6164, -713, -6301, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 9015, 1685, -1687, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_METAL_BOX, 4654, -411, 11222, 0, 0, 0, 0x120000, bhvPushableMetalBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_METAL_BOX, -107, 1330, 10014, 0, -11, 0, 0x120000, bhvPushableMetalBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1499, -7542, 2147, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1813, -7360, 2146, 0, 0, 0, 0x000E0000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(ccm_area_3_collision),
		MACRO_OBJECTS(ccm_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(4, ccm_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x3B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x3C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_CCM, 0x04, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_STAR, -4203, 5827, -6792, 0, 0, 0, 0, bhvStar, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, 7049, 2528, 4896, 0, 0, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, 7557, 2673, 4896, 0, 0, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, 572, 3994, 2709, 0, -42, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, 272, 4145, 3043, 0, -42, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, -14, 4285, 3355, 0, -42, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, -2454, 4914, 1502, 0, -58, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, -2371, 5041, 1128, 0, -58, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, -2288, 5160, 749, 0, -58, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 2836, 1080, 3049, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1533, -7542, -579, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1847, -7360, -580, 0, 0, 0, 0x000F0000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(ccm_area_4_collision),
		MACRO_OBJECTS(ccm_area_4_macro_objs),
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
