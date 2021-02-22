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
#include "levels/ccm/header.h"
extern u8 _ccm_segment_ESegmentRomStart[]; 
extern u8 _ccm_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_ccm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _ccm_segment_ESegmentRomStart, _ccm_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_ccm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ccm_1_[] = {
AREA(1,Geo_ccm_1_0x1361700),
TERRAIN(col_ccm_1_0xe04bfc0),
SET_BACKGROUND_MUSIC(0,43),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_1_),
JUMP_LINK(local_warps_ccm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_1_[] = {
OBJECT_WITH_ACTS(0,40,740,150,0,180,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,-5979,3718,5362,0,14,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,3510,996,-8431,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-3918,5469,210,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-9985,1570,-12653,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(67,-3041,-354,-10579,0,0,0,0x5000000, bhvHiddenStar,31),
OBJECT_WITH_ACTS(122,-1374,-5425,-3909,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-1374,-5399,-3909,0,180,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(137,-2318,-2504,-6230,0,-20,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-9994,3786,-6740,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6334,-267,-8139,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(22,-160,-3419,-11152,0,0,0,0x1e0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-3051,-750,-11683,0,0,0,0x140000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-4241,600,-7834,0,0,0,0x450000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(201,-9540,3441,-6746,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(137,-9542,1570,-12653,0,0,0,0x120000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-9092,1570,-12653,0,0,0,0x250000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-9092,1570,-12208,0,0,0,0x1f0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-9542,1570,-12208,0,0,0,0x2e0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-9092,1570,-11752,0,0,0,0x130000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-9985,1570,-12208,0,0,0,0x110000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-9985,1570,-11752,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-9542,1570,-11752,0,0,0,0x200000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,-1550,-906,-5415,0,-50,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(66,-327,-2183,-9781,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(66,1973,-2183,-9929,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(66,2028,-2183,-12237,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(66,89,-2183,-13028,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(66,-1631,-2183,-11970,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,417,0,-878,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-8540,779,2157,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-6755,779,1605,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2732,150,-7856,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1895,-911,-9520,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,5114,-1949,-9507,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-8333,3449,-6744,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-3480,3300,-4812,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(88,4788,900,-8826,0,17,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(137,-2318,-3218,-6230,0,-19,0,0x2e0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,807,517,-2286,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(101,3464,750,-4381,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,1530,150,-8683,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-2230,0,406,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-1547,-900,-8590,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-6477,420,-1006,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-630,2550,-962,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(89,2599,-2219,-7255,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(101,-1994,3300,-3520,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(101,-4857,3300,-7835,0,0,0,0x0, bhvScuttlebug,31),
OBJECT_WITH_ACTS(89,954,150,-2335,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,-4075,0,-1485,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,-1514,-900,-7027,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,-7412,3300,-7018,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(89,-6986,-559,-7979,0,0,0,0x0, bhvHeaveHo,31),
OBJECT_WITH_ACTS(180,192,3203,-3199,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4065,1373,-595,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1870,-298,-7004,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4567,-1006,-11636,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-5998,-765,-10583,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6203,260,-10306,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5260,-298,-9753,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4144,-1498,-8480,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1986,153,-753,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3685,3453,-6611,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,3363,159,-6839,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,-2263,-3504,-5019,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,-3506,45,152,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4195,2595,-842,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,2664,943,-4345,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1536,-855,-4463,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-5628,975,2905,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-910,3260,-3369,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1535,-4461,-5841,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4048,-1113,-9556,0,13,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-171,-2847,-11156,0,0,0,0x120000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3175,195,-8270,0,45,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1148,-4755,-6208,0,-72,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7317,3194,-5489,0,0,0,0x40000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1581,-5195,-7243,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(0,-1475,-4810,-4191,0,0,0,0x0, bhvLargeFishGroup,31),
OBJECT_WITH_ACTS(137,-9703,1151,3206,0,40,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1764,1421,-4407,0,0,0,0x130000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1766,1421,-4713,0,0,0,0x2f0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(180,-2097,2173,-427,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4691,1461,5219,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6456,2170,7620,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-8680,2768,5907,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6598,3453,4453,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-4236,893,-8265,0,180,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-4236,893,-8265,0,0,0,0xf10000, bhvAirborneDeathWarp,31),
// OBJECT_WITH_ACTS(0,64,5,84,3,0,0,4, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,64,5,174,12,0,0,5, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,4,5,6,6,0,0,6, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,8,5,9,6,0,0,7, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,8,5,123,9,0,0,8, editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,16,5,162,3,0,0,9, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_ccm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,140,0),
WARP_NODE(241,6,1,141,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(20,5,1,30,0),
WARP_NODE(30,5,1,20,0),
WARP_NODE(69,28,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
