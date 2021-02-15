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
#include "levels/wdw/header.h"
extern u8 _wdw_segment_ESegmentRomStart[]; 
extern u8 _wdw_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_wdw_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _wdw_segment_ESegmentRomStart, _wdw_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_wdw_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wdw_1_[] = {
AREA(1,Geo_wdw_1_0x1ba1700),
TERRAIN(col_wdw_1_0xe04b480),
SET_BACKGROUND_MUSIC(0,49),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wdw_1_),
JUMP_LINK(local_warps_wdw_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wdw_1_[] = {
OBJECT_WITH_ACTS(0,367,-10224,-14790,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,14906,-5100,-14605,0,0,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,7208,2600,1495,0,0,0,0x1080000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-15827,10750,-2636,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-9623,10989,-10322,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(139,8905,-4336,3817,90,0,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,4550,-10193,14595,0,0,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(122,320,-10053,-16523,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(215,335,-9013,-15813,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,425,-7115,-13668,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7248,2678,1280,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1848,-3239,-9100,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2420,2100,5412,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4263,-5640,-10630,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,0,-9496,-11640,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4885,-5527,-9965,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4730,-5562,-4073,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,-10720,3711,-10300,0,-90,0,0x0, bhvCoinFormation,105),
OBJECT_WITH_ACTS(215,-7038,-2085,-4833,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7120,-2042,-9020,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-980,-236,868,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-16938,3324,-9660,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7205,2100,3690,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,1645,-8300,-15785,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,1858,-5642,-7895,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3873,-5640,-7965,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5620,-5105,-8923,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(206,8755,-4845,-7928,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(144,7875,-4163,-7435,0,90,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(206,7373,-3500,-8138,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,7473,-3500,-7170,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,6998,-3500,-7405,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,7870,-3500,-7998,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(215,6845,6456,-4773,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,6975,2750,1258,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13093,7300,-2508,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,6573,-3321,-9310,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5223,-2334,-600,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4473,-2334,-1448,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-13303,4,-11440,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-13400,4,-10465,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(206,-13775,294,-11013,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(206,-12930,294,-11015,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(140,13145,-2618,-7680,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,10223,-2618,-7070,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,9073,-2618,-7070,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(122,-4098,7078,3502,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(124,353,-10224,-15313,0,0,0,0x80000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,7845,139,-3988,0,-180,0,0x100000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,8923,-4648,3838,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,4550,-11090,14595,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,4550,-11145,14895,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(124,4550,-10838,14895,0,-180,0,0x120000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,4983,-11155,14603,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(139,4984,-10846,14591,90,0,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,2385,-4770,-9845,0,0,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(223,5573,-5105,-7158,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-1300,2117,-40,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,-7323,2450,5810,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-4820,-2387,-6750,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,-4773,-2387,-5135,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-4923,-2387,-8523,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(217,14100,-6496,-13400,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,14373,-6033,-13610,0,0,0,0x0, bhvPushableMetalBox,31),
RETURN()
};
const LevelScript local_warps_wdw_1_[] = {
WARP_NODE(10,11,1,10,0),
WARP_NODE(11,11,1,12,0),
WARP_NODE(12,11,1,11,0),
WARP_NODE(13,11,1,14,0),
WARP_NODE(14,11,1,13,0),
WARP_NODE(240,6,1,110,0),
WARP_NODE(241,6,1,111,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
