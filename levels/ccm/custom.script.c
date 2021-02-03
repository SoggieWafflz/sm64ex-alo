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
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(88,0x0500c778),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
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
TERRAIN(col_ccm_1_0xe0dbf80),
SET_BACKGROUND_MUSIC(0,40),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ccm_1_),
JUMP_LINK(local_warps_ccm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ccm_1_[] = {
OBJECT_WITH_ACTS(0,17863,-746,1530,0,-90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,86,2056,-2871,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-1549,3625,15453,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,3265,3405,655,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-6316,-1092,6496,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(201,-6123,667,-680,0,180,0,0x880000, bhvCannonClosed,31),
OBJECT_WITH_ACTS(137,12719,977,4339,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,17129,-1155,662,0,0,0,0x10000, bhvExclamationBox,8),
OBJECT_WITH_ACTS(67,9328,-1246,6662,0,0,0,0x3000000, bhvHiddenRedCoinStar,8),
OBJECT_WITH_ACTS(215,-2520,-1680,5753,0,0,0,0x0, bhvRedCoin,8),
OBJECT_WITH_ACTS(215,10224,-1590,5732,0,0,0,0x0, bhvRedCoin,8),
OBJECT_WITH_ACTS(215,12351,-180,-4590,0,0,0,0x0, bhvRedCoin,8),
OBJECT_WITH_ACTS(215,7052,-195,-10814,0,0,0,0x0, bhvRedCoin,8),
OBJECT_WITH_ACTS(215,-1457,-1680,-2930,0,0,0,0x0, bhvRedCoin,8),
OBJECT_WITH_ACTS(215,-3475,-1680,-1721,0,0,0,0x0, bhvRedCoin,8),
OBJECT_WITH_ACTS(215,6843,-631,12823,0,0,0,0x0, bhvRedCoin,8),
OBJECT_WITH_ACTS(215,-78,-1680,13726,0,0,0,0x0, bhvRedCoin,8),
OBJECT_WITH_ACTS(65,2145,-524,12353,0,43,0,0x450000, bhvWarp,56),
OBJECT_WITH_ACTS(15,2661,-524,12290,0,180,0,0x940000, bhvBobombBuddy,7),
OBJECT_WITH_ACTS(68,17280,-1574,809,0,0,0,0x950000, bhvMessagePanel,8),
OBJECT_WITH_ACTS(0,4961,-1525,3568,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-5839,468,-3030,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-3468,-1724,13659,0,0,0,0x10000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,13535,-377,-2328,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,9452,1935,-6706,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,13320,1172,2716,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5466,-675,12768,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,18157,-1344,4962,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(104,16658,-1574,7502,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(104,-2576,-1724,-2412,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(104,11353,-224,-7624,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(104,-7330,-1724,6530,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(84,3119,-324,-4494,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,-1453,-1138,-10022,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,-1684,-1138,5769,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,8680,-1138,5767,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,3186,3471,669,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,7749,-839,-1151,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,45,1141,-7139,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,7901,2761,-5860,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(220,923,1891,-8339,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,5241,-178,-5338,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-1592,-1138,11526,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-7886,-677,-2021,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,14229,1046,1748,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-2704,-1138,2449,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,6691,344,-10749,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(140,15085,225,9964,0,192,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,15482,281,8905,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,15105,281,9363,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,14426,281,9472,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,13864,281,9189,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,15019,281,8626,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,14430,281,8501,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,13828,281,8672,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(122,-4531,74,-5456,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,1995,1574,-5010,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,9130,-224,-12184,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,15176,-1574,7443,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,11831,-1574,7528,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,677,-524,-6996,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(137,-2521,-1306,-2315,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,2184,-1145,657,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6308,-1595,7544,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,8207,-95,-12765,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,17682,2064,-8421,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3237,-1595,6921,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1580,-1595,11869,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,9288,-1445,2212,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-6123,804,-682,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,18447,-1445,692,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2261,-108,15467,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(152,-3029,-398,14993,0,0,0,0x0, bhvShrink_Platform_MOP,31),
OBJECT_WITH_ACTS(123,-3675,673,15053,0,0,0,0x3c0000, bhvNoteblock_MOP,31),
OBJECT_WITH_ACTS(202,7220,2162,-5899,0,0,0,0x10000, bhvPlatformOnTrack,31),
OBJECT_WITH_ACTS(180,13809,1107,-7575,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,7109,-543,-5813,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4799,-1592,5727,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-2947,2293,15444,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-7242,-797,-4851,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6197,2383,-5200,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6193,2564,-3450,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4948,2643,-2711,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5477,2832,-905,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4007,2839,-46,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,2588,-238,12725,0,81,0,0xf00000, bhvAirborneStarCollectWarp,31),
OBJECT_WITH_ACTS(0,2588,-238,12725,0,254,0,0xf10000, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,2588,-238,12725,0,81,0,0x450000, bhvSpinAirborneWarp,7),
OBJECT_WITH_ACTS(146,8124,-1549,-1139,-90,-66,0,0x418c0000, bhvSpring_MOP,55),
OBJECT_WITH_ACTS(146,-37,-1699,-1901,-90,45,0,0x50640000, bhvSpring_MOP,55),
OBJECT_WITH_ACTS(146,18474,-1141,7011,-90,-95,0,0xff0000, bhvSpring_MOP,55),
OBJECT_WITH_ACTS(146,3404,-1699,11458,-90,90,0,0x5a320000, bhvSpring_MOP,55),
OBJECT_WITH_ACTS(0,18782,-1274,1423,0,0,0,0x14140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,18779,-1274,1623,0,0,0,0x14140000, bhvWarp,31),
OBJECT_WITH_ACTS(0,18422,1935,-7152,0,0,0,0x14320000, bhvWarp,31),
OBJECT_WITH_ACTS(0,18422,1935,-6954,0,0,0,0x14320000, bhvWarp,31),
OBJECT_WITH_ACTS(124,18538,-1274,1857,0,-90,0,0x210000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,18147,1935,-6725,0,-90,0,0x2e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,17834,2446,-7056,0,-90,0,0x370000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,18282,1935,-7042,0,0,0,0x10000, bhvCheckpoint_Flag_MOP,31),
OBJECT_WITH_ACTS(0,341,4,36,0,0,0,&VB_ccm_1_0xe069640[14218], editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,341,5,36,0,0,0,&VB_ccm_1_0xe069640[17972], editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_ccm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(20,24,1,45,0),
WARP_NODE(55,5,1,55,0),
WARP_NODE(50,4,1,45,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,41,0),
WARP_NODE(241,6,1,42,0),
WARP_NODE(69,18,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
