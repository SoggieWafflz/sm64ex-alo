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

#include "areas/1/custom.model.inc.h"
#include "levels/lll/header.h"
extern u8 _lll_segment_ESegmentRomStart[]; 
extern u8 _lll_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_lll_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _lll_segment_ESegmentRomStart, _lll_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom46497472_skybox_mio0SegmentRomStart,_SkyboxCustom46497472_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_lll_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_lll_1_[] = {
AREA(1,Geo_lll_1_0x2ac1700),
TERRAIN(col_lll_1_0xe00c098),
SET_BACKGROUND_MUSIC(0,45),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_lll_1_),
JUMP_LINK(local_warps_lll_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_1_[] = {
OBJECT_WITH_ACTS(0,-623,-1658,0,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(86,-14370,-10834,13006,0,0,0,0x0, bhvKingBobomb,1),
OBJECT_WITH_ACTS(122,-13988,1150,-14696,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,13741,2300,-4624,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-7438,-1300,-15132,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-12330,-599,-10053,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-12535,-1658,15158,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-13260,-290,12998,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,15325,-1000,15196,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,12063,1987,-6298,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,15388,-1658,4230,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,15363,-1000,-15250,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-15010,-1658,-6138,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,-14650,-1300,-6123,0,0,0,0x20000, bhvExclamationBox,16),
OBJECT_WITH_ACTS(140,-14208,-1658,-6155,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-13395,-1658,-6160,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-12650,-1658,-6185,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-11938,-1658,-6135,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-11220,-1658,-6188,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-8165,-1498,-6800,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-7950,-1498,-6893,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(122,-12745,-1408,-9988,0,0,0,0x4000000, bhvStar,16),
OBJECT_WITH_ACTS(0,15630,2077,-7473,0,0,0,0xb0000, bhvFadingWarp,32),
OBJECT_WITH_ACTS(137,195,11150,16123,0,0,0,0x5080000, bhvExclamationBox,32),
OBJECT_WITH_ACTS(137,-15058,0,12343,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-6853,-1658,-8613,0,-90,0,0x40000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-8548,-1658,-8573,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-9323,-1358,-8673,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-10890,-850,-8803,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-11108,-707,-9995,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,15290,2300,-3013,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-12020,174,-12405,0,-90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-13700,324,-12413,0,-90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,183,10800,16218,0,0,0,0xc0000, bhvFadingWarp,32),
OBJECT_WITH_ACTS(23,-10410,-1658,-2548,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-8223,-1658,-673,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-12373,-1658,0,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-9773,-1658,2123,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-8200,-1658,4023,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-6573,-1658,2073,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-13173,-1658,3673,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-5595,-1658,0,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-4973,-1658,4173,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-7123,-1658,-3995,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-5548,-1658,-2100,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-2773,-1658,-6773,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(23,-3210,-1658,-973,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2923,-1658,2200,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-3395,-1658,-3023,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-13173,-1658,-3228,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-850,-1658,-2393,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-298,-1658,1745,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,1073,-1658,-873,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,2673,-1658,928,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,3023,-1658,-1765,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,1123,-1658,-3673,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,0,-1658,3678,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2255,-1658,4120,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-11223,-1658,5150,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5423,-1658,0,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,2148,-1658,2623,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,4523,-1658,2300,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1973,-1658,-5073,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5273,-1658,-2673,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,3650,-1658,-3673,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,7548,-1658,-1623,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,7873,-1658,1323,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,8838,-1658,-3328,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,573,-1658,-5323,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-5745,-1658,-5723,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,2173,-1658,-6755,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,0,-1658,-7523,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2973,-1658,-8548,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,0,-1658,-9673,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2573,-1658,-11373,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-523,-1658,5693,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-10695,-1658,-4723,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-12123,-1658,7523,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-8145,-1658,6625,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-5073,-1658,6698,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,0,-1658,-12123,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-6000,-1658,-10673,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-4500,-1658,-12625,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2900,-1658,8123,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-7023,-1658,8200,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-10745,-1658,9395,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,0,-1658,7928,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,3423,-1658,4895,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,2150,-1658,7000,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,9073,-1658,0,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-8723,-1658,11523,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-5423,-1658,10523,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-3123,-1658,11295,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-773,-1658,10278,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5623,-1658,6043,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,2923,-1658,-9045,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,4873,-1658,-5450,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,7073,-1658,-4405,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,2773,-1658,-11028,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,3373,-1658,-13273,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,7600,-1658,4200,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,5673,-1658,-7555,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,7823,-1658,-6295,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,6300,-1658,-10023,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,7223,-1658,-12423,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,10195,-1658,-5123,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,9645,-1658,-8100,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,8600,-1658,7528,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,11173,-1658,-11250,0,0,0,0x0, bhvTree,31),
RETURN()
};
const LevelScript local_warps_lll_1_[] = {
WARP_NODE(10,22,1,10,0),
WARP_NODE(11,22,1,12,0),
WARP_NODE(12,22,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,7,0),
WARP_NODE(241,6,1,77,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
