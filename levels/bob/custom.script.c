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
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_clouds_skybox_mio0SegmentRomStart,_clouds_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           rr_geo_000660),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           rr_geo_000678),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           rr_geo_000690),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           rr_geo_0006A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           rr_geo_0006C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           rr_geo_0006D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           rr_geo_0006F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           rr_geo_000708),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           rr_geo_000720),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           rr_geo_000738),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           rr_geo_000758),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           rr_geo_000770),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           rr_geo_000788),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           rr_geo_0007A0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           rr_geo_0007B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           rr_geo_0007D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           rr_geo_0007E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           rr_geo_000800),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,           rr_geo_000818),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,           rr_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM,         rr_geo_0008C0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET,            rr_geo_000848),
    LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM,       rr_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM,        rr_geo_0008D8),
    LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING,             rr_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM,          rr_geo_000908),
    LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM,        rr_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM,        rr_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM,           rr_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM,        rr_geo_0008F0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES,         rr_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1,  rr_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2,  rr_geo_000988),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3,  rr_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4,  rr_geo_0009B8),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
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
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bob_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bob_1_[] = {
AREA(1,Geo_bob_1_0x18e1700),
TERRAIN(col_bob_1_0xe04fbe8),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,-1170,-3967,3938,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(180,2612,4343,-398,0,-154,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(122,-5702,-83,-4766,0,-153,0,0x1000000, bhvStar,62),
OBJECT_WITH_ACTS(122,6149,3185,2202,0,107,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-3269,2700,2015,0,19,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(20,5182,-846,-651,0,-15,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(20,1904,-2831,-4205,0,-81,0,0x5000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(137,1968,5033,-7943,0,-11,0,0x0, bhvExclamationBox,48),
OBJECT_WITH_ACTS(195,1892,4631,-8190,0,-65,0,0x10000, bhvBobombBuddy,15),
OBJECT_WITH_ACTS(215,1726,-3881,4972,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6015,-3431,-6823,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1270,-7225,-1592,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6124,-1497,2353,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4199,678,4788,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-916,1540,5112,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4290,1902,7833,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4944,4170,-3615,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(22,-3277,1412,8536,0,148,0,0xc0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,4005,4094,-3388,0,-68,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(86,2110,4174,285,0,-33,0,0x0, bhvKingBobomb,31),
OBJECT_WITH_ACTS(223,-1479,2278,1715,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-3279,2278,2003,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(140,-5103,-3500,-4804,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-352,-3139,-6823,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1149,-3139,-6084,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1966,-3139,-5445,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2837,-3139,-5114,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-3627,-3139,-4804,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-4348,-3139,-4557,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(212,5147,1159,3593,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(207,-2079,-3500,-8591,0,90,0,0x0, bhvFloorSwitchHiddenObjects,62),
OBJECT_WITH_ACTS(129,-207,-3056,-7724,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-406,-2856,-7724,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-606,-2656,-7724,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-806,-2456,-7724,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-1006,-2256,-7724,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(137,2311,-912,-307,0,11,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(104,1669,-3500,-2127,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,-4776,-3352,-7199,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,-2981,1412,7855,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,5719,-1386,-958,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,4178,-1026,5894,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(188,-3031,-4121,-3792,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,375,-3204,-8438,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2526,-3500,-4894,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3246,-3500,-2262,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-2129,-5124,1312,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-2026,-5124,2786,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4852,-1566,2834,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-1704,1417,8678,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4226,1412,7283,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,6085,-1566,1321,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-6319,-519,-5661,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3667,4130,-4391,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4675,4130,-2420,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,1915,-3814,2183,0,21,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,48,-6735,2727,0,22,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3210,-4538,-1203,0,7,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5059,-1451,3870,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1953,-326,6267,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1491,1418,2243,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3933,449,6854,0,-15,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4445,1452,6075,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4847,4164,-1925,0,-29,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(3,588,841,2587,0,-16,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,588,607,2587,0,-16,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(3,-2823,-285,4476,0,52,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-2823,-519,4476,0,52,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(3,2546,2029,-325,0,53,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,2546,1796,-325,0,53,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(3,-3558,173,-7322,0,23,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,-3558,-60,-7322,0,23,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(3,1015,-1186,-2854,0,27,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,1015,-1420,-2854,0,27,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(220,-4038,-542,-6528,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,-36,-3635,-4720,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3197,-1566,3657,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2510,0,6991,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2022,-4592,4913,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-3254,-3352,-7064,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1736,-1261,518,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1085,-7087,-2193,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-339,-6567,567,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,890,-6382,4388,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-2069,-5714,6321,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-1792,-5900,-946,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(195,-5517,-519,-4583,0,120,0,0x40000, bhvBobombBuddy,1),
OBJECT_WITH_ACTS(0,341,5,36,0,0,0,&VB_bob_1_0xe0166f0[8],editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,110,0),
WARP_NODE(241,26,1,111,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
