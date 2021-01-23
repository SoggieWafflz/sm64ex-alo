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
#include "levels/castle_courtyard/header.h"
extern u8 _castle_courtyard_segment_ESegmentRomStart[]; 
extern u8 _castle_courtyard_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_castle_courtyard_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _castle_courtyard_segment_ESegmentRomStart, _castle_courtyard_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom51904192_skybox_mio0SegmentRomStart,_SkyboxCustom51904192_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group7_mio0SegmentRomStart,_group7_mio0SegmentRomEnd),
LOAD_RAW(12,_group7_geoSegmentRomStart,_group7_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
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
JUMP_LINK(script_func_global_8),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_courtyard_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-3782,-1826,-2770),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_courtyard_1_[] = {
AREA(1,Geo_castle_courtyard_1_0x3041700),
TERRAIN(col_castle_courtyard_1_0xe0bd540),
SET_BACKGROUND_MUSIC(0,36),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_courtyard_1_),
JUMP_LINK(local_warps_castle_courtyard_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_courtyard_1_[] = {
OBJECT_WITH_ACTS(0,-3782,-1826,-2770,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(34,4004,-2934,19,0,90,0,0x14000000, bhvDoor,31),
OBJECT_WITH_ACTS(34,4004,-2934,-132,0,-90,0,0x14000000, bhvDoor,31),
OBJECT_WITH_ACTS(22,3159,-3368,-10905,0,0,0,0x330000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,6872,-803,-684,0,0,0,0x340000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-4682,-2664,8716,0,0,0,0x5350000, bhvWarp,31),
OBJECT_WITH_ACTS(0,13667,114,-8296,0,0,0,0x5360000, bhvWarp,31),
OBJECT_WITH_ACTS(0,9816,828,7902,0,0,0,0x5370000, bhvWarp,31),
OBJECT_WITH_ACTS(22,4686,-2934,-64,0,0,0,0x390000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,14378,2969,-8372,0,-5,0,0x380000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,3157,-2987,-10342,0,0,0,0x6e0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,3157,-2987,-10342,0,0,0,0x6f0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,7586,-359,-212,0,56,0,0x780000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,7586,-359,-212,0,56,0,0x790000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-5419,-2163,8722,0,90,0,0x820000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-5419,-2163,8722,0,90,0,0x830000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,12772,788,-7673,0,-19,0,0x8c0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,12772,788,-7673,0,-19,0,0x8d0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,15716,3637,-7552,0,-118,0,0xa00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,15716,3637,-7552,0,-118,0,0xa10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,9821,1454,6871,0,0,0,0x960000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,9821,1454,6871,0,0,0,0x970000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,3012,-2456,-54,0,90,0,0xaa0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,3012,-2456,-54,0,90,0,0xab0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-3765,-1925,-2775,0,0,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-3765,-1925,-2775,0,0,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(34,-4966,-2664,8720,0,90,0,0x7070000, bhvDoor,31),
OBJECT_WITH_ACTS(34,13333,114,-8301,0,90,0,0xa0a0000, bhvDoor,31),
OBJECT_WITH_ACTS(34,9817,828,7577,0,0,0,0xf0f0000, bhvDoor,31),
OBJECT_WITH_ACTS(37,758,-3123,16378,0,90,0,0x15a0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,758,-3123,16227,0,-90,0,0x15b0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(215,1932,-1690,-1911,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6976,608,1213,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,7577,-3424,2320,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3892,-1382,11224,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,13304,549,-9816,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,975,-3041,17135,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,9844,1675,9000,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3155,-4630,-9552,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,-4417,-831,10813,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2310,-1731,9910,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(194,2261,-3027,-129,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(137,16837,18,-5783,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,-3363,-2537,-2928,0,-73,0,0x450000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(221,5606,752,-1935,0,42,0,0x53000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(124,7824,179,-1757,0,-62,0,0x2a0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,-2195,-4061,13668,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(20,6860,-1619,3082,0,90,0,0x5000000, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(31,-11572,-2537,6355,0,0,0,0x280000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-11564,-1946,5609,0,0,0,0x2d0000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-11564,-1946,5609,0,0,0,0x2e0000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(137,-12743,-2189,6808,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(220,-13101,-1975,6229,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-13158,-1975,5454,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-11345,-1975,8183,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-10590,-1975,6932,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,-182,-2904,5388,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1369,-3123,11697,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5123,-803,-231,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,12668,-803,4035,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4128,-2793,4130,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,15034,-318,-3706,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(180,-3210,-1877,9905,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(188,3142,-3368,-9283,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,5255,-3204,-6085,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2587,-3350,-6299,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2230,-3123,9180,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,10595,-803,-30,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,10170,-803,4898,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,10074,-803,2868,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,9458,-803,11197,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,13261,-803,8330,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(212,9795,963,10116,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(85,11002,-803,-2727,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,13189,-318,-6121,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,11685,0,-7623,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,16298,-269,-3452,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(85,15142,2969,-6945,0,0,0,0x0, bhvMrBlizzard,31),
OBJECT_WITH_ACTS(0,341,5,36,0,0,0,&VB_castle_courtyard_1_0xe052cb0[6],editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_castle_courtyard_1_[] = {
WARP_NODE(51,9,1,10,0),
WARP_NODE(52,24,1,10,0),
WARP_NODE(53,12,1,10,0),
WARP_NODE(54,5,1,10,0),
WARP_NODE(55,4,1,10,0),
WARP_NODE(56,27,1,10,0),
WARP_NODE(57,19,1,10,0),
WARP_NODE(60,16,1,10,0),
WARP_NODE(110,26,1,10,0),
WARP_NODE(111,26,1,10,0),
WARP_NODE(120,26,1,10,0),
WARP_NODE(121,26,1,10,0),
WARP_NODE(130,26,1,10,0),
WARP_NODE(131,26,1,10,0),
WARP_NODE(140,26,1,10,0),
WARP_NODE(141,26,1,10,0),
WARP_NODE(150,26,1,10,0),
WARP_NODE(151,26,1,10,0),
WARP_NODE(160,26,1,10,0),
WARP_NODE(161,26,1,10,0),
WARP_NODE(170,26,1,10,0),
WARP_NODE(171,26,1,10,0),
WARP_NODE(180,26,1,10,0),
WARP_NODE(181,26,1,10,0),
WARP_NODE(0,26,1,10,0),
WARP_NODE(0,26,1,10,0),
WARP_NODE(0,26,1,10,0),
WARP_NODE(77,6,1,10,0),
WARP_NODE(78,25,1,10,0),
WARP_NODE(79,14,1,10,0),
WARP_NODE(81,11,1,10,0),
WARP_NODE(90,16,1,90,0),
WARP_NODE(91,16,1,91,0),
WARP_NODE(40,31,1,10,0),
WARP_NODE(45,26,1,45,0),
WARP_NODE(46,26,1,46,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(10,9,1,10,0),
RETURN()
};
