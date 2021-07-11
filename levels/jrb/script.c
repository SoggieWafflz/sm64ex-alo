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
#include "levels/jrb/header.h"

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _water_mio0SegmentRomStart, _water_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART, jrb_geo_000978), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART, jrb_geo_0009B0), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP, jrb_geo_000990), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK, jrb_geo_0009C8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK, jrb_geo_000930), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX, jrb_geo_000960), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR, jrb_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE, jrb_geo_000918), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM, jrb_geo_000948), 

	AREA(1, jrb_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x3B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x3C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_JRB, 0x01, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_JRB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, 1919, -136, -4951, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, -186, 2091, 3270, 0, 0, 0, 0x00040000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, 453, 2091, 2792, 0, 0, 0, 0x00040000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, 52, 2091, 2900, 0, 0, 0, 0x000C0000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 2218, 1433, 5619, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 1103, 2269, -1316, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 4986, 332, 2435, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 2120, 547, -5961, 0, 0, 0, 0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 3539, 1002, 5507, 0, 0, 0, 0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 5142, 669, -770, 0, 0, 0, 0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 5913, 768, -1332, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -3873, -7542, 294, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -3559, -7360, 293, 0, 0, 0, 0x000C0000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(2, jrb_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x3B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x3C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_JRB, 0x02, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_JRB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, -11899, 434, 3841, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_CHUCKYA, -10094, 916, 9039, 0, 0, 0, 0, bhvChuckya, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_CHUCKYA, -10980, 48, 4603, 0, 0, 0, 0, bhvChuckya, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, -153, 1128, 4694, 0, 0, 0, 0x00040000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, -2875, 1903, -3452, 0, 0, 0, 0x00050000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, -2450, 2111, -6751, 0, 0, 0, 0x000C0000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 1633, -834, -919, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -265, 1326, -3408, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -1323, 1801, 7586, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -4835, 1801, 7901, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -5678, 1801, 10705, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -9273, 916, 10569, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -1290, 2175, 499, 0, 0, 0, 0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -975, -1057, 27, 0, 0, 0, 0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -711, 302, -5360, 0, 0, 0, 0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -1876, -1018, 1150, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_SKEETER, 2082, 1411, 5271, 0, 0, 0, 0, bhvSkeeter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_SKEETER, -2824, 1653, 7606, 0, 0, 0, 0, bhvSkeeter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_SKEETER, -5423, 1653, 8503, 0, 0, 0, 0, bhvSkeeter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_SKEETER, -8457, 918, 11745, 0, 0, 0, 0, bhvSkeeter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_SKEETER, 2056, -1377, -4676, 0, 0, 0, 0, bhvSkeeter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_SKEETER, -1390, -2359, -1946, 0, 0, 0, 0, bhvSkeeter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_SKEETER, -657, -902, -2411, 0, 0, 0, 0, bhvSkeeter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -3830, -7542, 2092, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, -3516, -7360, 2092, 0, 0, 0, 0x000D0000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(jrb_area_2_collision),
		MACRO_OBJECTS(jrb_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(3, jrb_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x3B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x3C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_JRB, 0x03, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_JRB, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, -7620, 2363, -8253, 0, 0, 0, 0x00040000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, -4878, 966, 7878, 0, 0, 0, 0x00040000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, 7629, 725, -538, 0, 0, 0, 0x00040000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, 6346, 725, 5626, 0, 0, 0, 0x00060000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, 6346, -942, 5626, 0, 0, 0, 0x000E0000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, 7799, -215, 13675, 0, 0, 0, 0x000F0000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, -9331, 700, 1090, 0, 0, 0, 0x000D0000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BITDW_WARP_PIPE, -6164, -713, -6301, 0, 0, 0, 0x130000, bhvWarpPipe, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 8006, 1387, -408, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 8006, -1331, -408, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 6614, -1530, 6776, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 7235, -1027, 8969, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 3440, 712, 10407, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 6241, -1886, 5121, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 5126, -713, 12125, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -8662, 562, 6638, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -8088, 562, -4469, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, 7460, 379, 11043, 0, 0, 0, 0, bhvFlyGuy, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, -6006, 2642, 9039, 0, 0, 0, 0, bhvFlyGuy, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, -8778, 661, 1675, 0, 0, 0, 0, bhvFlyGuy, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 9015, 1685, -1687, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_METAL_BOX, 4654, -411, 11222, 0, 0, 0, 0x120000, bhvPushableMetalBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_METAL_BOX, -107, 1330, 10014, 0, -11, 0, 0x120000, bhvPushableMetalBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1499, -7542, 2147, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1813, -7360, 2146, 0, 0, 0, 0x000E0000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 6494, -1485, 1488, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(jrb_area_3_collision),
		MACRO_OBJECTS(jrb_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(4, jrb_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 0x01, 0x3B, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 0x3C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11, LEVEL_JRB, 0x04, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_STAR, -4203, 5827, -6792, 0, 0, 0, 0, bhvStar, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 11980, 3070, 4791, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 12486, 3070, 4253, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 4626, 2161, 5695, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, -187, 4680, 4317, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, -4825, 5878, -3060, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, -7310, 5731, -1660, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, -6727, 5259, -6837, 0, 0, 0, 0, bhvBobomb, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, 7049, 2528, 4896, 0, 0, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, 7557, 2673, 4896, 0, 0, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, 572, 3994, 2709, 0, -42, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, 272, 4145, 3043, 0, -42, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, -14, 4285, 3355, 0, -42, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, -2454, 4914, 1502, 0, -58, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, -2371, 5041, 1128, 0, -58, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BREAKABLE_BOX, -2288, 5160, 749, 0, -58, 0, 0x120000, bhvBreakableBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, 8773, 4201, -2695, 0, 0, 0, 0x00040000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, -207, 4357, -632, 0, 0, 0, 0x00040000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, -2507, 5190, 1952, 0, 0, 0, 0x00040000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, 9013, 3249, 4009, 0, 0, 0, 0x00100000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, 13036, 3470, 4136, 0, 0, 0, 0x00120000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, 1369, 2123, 6268, 0, 0, 0, 0x00080000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, 2506, 4248, -2040, 0, 0, 0, 0x000B0000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_EXCLAMATION_BOX, -2598, 8632, -735, 0, 0, 0, 0x000A0000, bhvExclamationBox, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 6221, 2776, 4905, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 9742, 4078, -822, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 7350, 4078, -2609, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 4389, 4078, -1899, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, 2751, 4078, 935, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -3186, 4740, 3081, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -2281, 6157, -800, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -6139, 5460, -2961, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -6201, 5653, -5640, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_BOWLING_BALL, -6007, 5653, -1034, 0, 0, 0, 0, bhvFireSpitter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_NONE, 9094, 3070, 3973, 0, 0, 0, 0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_NONE, 12324, 3634, 2132, 0, 0, 0, 0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_NONE, 1568, 1729, 4899, 0, 0, 0, 0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_NONE, -2437, 4916, 2465, 0, 0, 0, 0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_NONE, -3202, 8630, -130, 0, 0, 0, 0, bhvGoombaTripletSpawner, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 2836, 1080, 3049, 0, 0, 0, 0x120000, bhvAirborneWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_SKEETER, -4144, 4495, 4492, 0, 0, 0, 0, bhvSkeeter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_SKEETER, -480, 4495, 4171, 0, 0, 0, 0, bhvSkeeter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_SKEETER, 2803, 1570, 7139, 0, 0, 0, 0, bhvSkeeter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(MODEL_SKEETER, 3704, 3906, -1260, 0, 0, 0, 0, bhvSkeeter, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1533, -7542, -579, 0, 0, 0, 0xA0000, bhvInstantActiveWarp, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(0, 1847, -7360, -580, 0, 0, 0, 0x000F0000, bhvSpawnTE, ACT_1 | ACT_2 | ACT_3 | ACT_4 | ACT_5),
		TERRAIN(jrb_area_4_collision),
		MACRO_OBJECTS(jrb_area_4_macro_objs),
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
