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
#include "areas/2/custom.model.inc.h"
#include "levels/bob/header.h"
extern u8 _bob_segment_ESegmentRomStart[]; 
extern u8 _bob_segment_ESegmentRomEnd[];
#include "levels/rr/header.h"
const LevelScript level_bob_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _rrSegmentRomStart, _rrSegmentRomEnd),
LOAD_RAW(0x0E, _bob_segment_ESegmentRomStart, _bob_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom27393728_skybox_mio0SegmentRomStart,_SkyboxCustom27393728_skybox_mio0SegmentRomEnd),
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
JUMP_LINK(local_area_bob_1_),
JUMP_LINK(local_area_bob_2_),
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
TERRAIN(col_bob_1_0xe06c5b8),
SET_BACKGROUND_MUSIC(0,37),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,0,392,0,0,-98,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(201,4332,1505,-2045,0,0,0,0x0, bhvCannonClosed,31),
OBJECT_WITH_ACTS(67,2857,2454,5893,0,0,0,0x0, bhvHiddenStar,31),
OBJECT_WITH_ACTS(137,-1418,2596,-7868,0,0,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,535,3715,-6920,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(67,-441,284,320,0,-38,0,0x4000000, bhvHiddenRedCoinStar,48),
OBJECT_WITH_ACTS(122,1323,3484,3146,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(137,609,2040,-1169,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,1760,323,6096,0,0,0,0x0, bhvRedCoin,48),
OBJECT_WITH_ACTS(215,-1181,323,4687,0,0,0,0x0, bhvRedCoin,48),
OBJECT_WITH_ACTS(215,668,323,1578,0,0,0,0x0, bhvRedCoin,48),
OBJECT_WITH_ACTS(215,-599,323,-3280,0,0,0,0x0, bhvRedCoin,48),
OBJECT_WITH_ACTS(215,-4194,323,-6444,0,0,0,0x0, bhvRedCoin,48),
OBJECT_WITH_ACTS(215,-730,323,-6076,0,0,0,0x0, bhvRedCoin,48),
OBJECT_WITH_ACTS(215,3727,323,1265,0,0,0,0x0, bhvRedCoin,48),
OBJECT_WITH_ACTS(215,6715,323,1624,0,0,0,0x0, bhvRedCoin,48),
OBJECT_WITH_ACTS(137,2300,304,5000,0,0,0,0x30000, bhvExclamationBox,48),
OBJECT_WITH_ACTS(124,2297,0,5011,0,192,0,0x930000, bhvMessagePanel,15),
OBJECT_WITH_ACTS(0,2940,2105,7527,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,2321,2105,8132,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,1913,2105,7520,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,1030,2105,8216,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(0,884,2105,7505,0,0,0,0x0, bhvHiddenStarTrigger,31),
OBJECT_WITH_ACTS(242,4822,1,-5529,0,0,0,0x0, bhvSwitchblock_Switch_MOP,31),
OBJECT_WITH_ACTS(242,4645,2205,-4795,0,0,0,0x10000, bhvSwitchblock_Switch_MOP,31),
OBJECT_WITH_ACTS(241,974,2886,-6911,0,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,1296,2549,-6911,0,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,1650,2225,-6911,0,0,0,0x2020000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,3412,1083,-2474,0,54,0,0x2000000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(241,3611,627,-2756,0,54,0,0x2000000, bhvSwitchblock_MOP,31),
OBJECT_WITH_ACTS(22,7639,1196,810,0,-90,0,0x140000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(140,1001,863,4754,0,-90,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(84,5354,2464,-5354,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(84,2495,1829,3852,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(118,1478,1236,3803,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,969,1236,3813,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,498,1075,3681,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-28,921,3554,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-623,921,3552,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(188,2742,-62,-102,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,4929,251,-2977,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2275,1511,-3873,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2105,1826,-6784,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-2692,-52,-155,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-2578,567,3700,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,3255,1475,5308,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,2611,1511,-1855,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(0,5413,976,3385,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5485,-62,-5285,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-4174,599,-842,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2573,2105,7526,0,0,0,0x20000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1187,2105,7917,0,0,0,0x20000, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,4304,-62,-594,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1542,1596,-2358,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,9,0,13,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2012,-62,4393,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,5690,1953,-7380,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(180,406,1049,4762,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6568,1382,1297,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4481,1632,-5481,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3834,2131,-7657,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(100,-2509,-62,-1327,0,-76,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,3963,1790,5249,0,118,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,2585,-62,5494,0,104,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,2839,1826,-7919,0,240,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,3449,1511,-1666,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,3908,-62,100,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,3282,-62,2228,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,3538,1752,-5681,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,5354,251,-3591,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,830,1115,3132,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,3860,1790,4089,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,1435,2105,7156,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,6839,1196,2671,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(100,-3320,838,-2375,0,0,0,0x0, bhvSmallBomp,31),
OBJECT_WITH_ACTS(137,-1311,2403,6707,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,4705,423,5280,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,6176,513,-1216,0,0,0,0x130000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,5515,76,4000,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3134,1691,-5169,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4264,42,-984,0,116,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3696,541,1790,0,-3,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1973,-112,-6733,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3238,2142,6245,0,-2,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1198,-357,-305,0,-7,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(194,596,1750,-1181,0,0,0,0x0, bhvCirclingAmp,31),
OBJECT_WITH_ACTS(15,52,0,-249,0,0,0,0x200000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,16,5,78,3,0,0,16, editor_Scroll_Texture,31),
OBJECT_WITH_ACTS(0,8,5,144,3,0,0,17, editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(20,9,2,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(240,26,1,110,0),
WARP_NODE(241,26,1,111,0),
RETURN()
};
const LevelScript local_area_bob_2_[] = {
AREA(2,Geo_bob_2_0x18e18f0),
TERRAIN(col_bob_2_0xe08a148),
SET_BACKGROUND_MUSIC(0,38),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_bob_2_),
JUMP_LINK(local_warps_bob_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_2_[] = {
OBJECT_WITH_ACTS(22,-1499,-3014,0,0,90,0,0xa0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(137,1652,1824,0,0,0,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(195,818,-3464,-1715,0,-112,0,0x0, bhvBobombBuddyOpensCannon,31),
OBJECT_WITH_ACTS(223,-74,-3464,1052,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-253,-3464,-1094,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(180,1649,-1550,-455,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1644,-1550,445,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1035,-2450,-1657,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,1028,-2450,1662,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,104,-1250,1945,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,100,-1250,-1958,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1672,-50,-1960,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-1666,-50,1950,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,151,-3464,0,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1363,-314,0,0,90,0,0x0, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_bob_2_[] = {
WARP_NODE(10,9,1,20,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(240,26,1,110,0),
WARP_NODE(241,26,1,111,0),
RETURN()
};
