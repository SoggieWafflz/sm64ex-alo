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

#include "levels/bob/header.h"
const LevelScript level_bob_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
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
AREA(1,Geo_bob_1_0x19001700),
TERRAIN(col_bob_1_0xe0207b8),
SET_BACKGROUND_MUSIC(0,3),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_1_),
JUMP_LINK(local_warps_bob_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_1_[] = {
OBJECT_WITH_ACTS(0,-3332,-800,-4465,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(122,3215,1979,2246,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,-332,2500,3469,0,0,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1159,2083,-1642,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2888,3437,-3166,0,0,0,0xd0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3656,833,85,0,0,0,0xe0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-402,-833,-3122,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-1243,-885,3859,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-847,260,4111,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2810,-938,1609,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3241,156,3455,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2585,-1563,-2781,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2379,365,448,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4646,-833,2843,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3325,1458,3394,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(129,-3000,-809,-188,0,-5,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(207,-3111,-829,3497,0,-10,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(137,-2240,2268,3711,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-569,-898,181,0,244,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(192,1291,-833,1405,-1,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(129,-2654,-417,-153,0,-9,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-2319,-52,-120,0,-7,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,-948,1823,-1319,90,0,90,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3206,-365,441,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3602,625,407,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(192,674,-833,1356,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,-1400,938,1666,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(188,-3709,-938,-1095,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-3322,-885,-653,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(223,3967,-885,-2570,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,-241,-833,-4549,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1321,417,2092,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(137,-3204,2083,3027,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,-4079,150,1144,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-3456,260,403,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-3070,260,46,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2678,260,73,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2140,469,152,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1787,729,259,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(129,368,-1014,-1976,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-376,-1014,-2579,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(0,3378,1771,2233,90,0,90,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(188,-2465,-729,2535,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(137,4162,1563,2773,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2238,1563,2889,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,2812,1250,3861,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,3914,-833,4019,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,2416,365,1020,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(124,-1855,-1014,-1834,0,-97,0,0x10000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,3514,-1014,164,0,-94,0,0x710000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-705,1742,-1840,0,-56,0,0x600000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,3125,-990,4844,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,3400,-990,4844,0,0,0,0x0, bhvPushableMetalBox,31),
RETURN()
};
const LevelScript local_warps_bob_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,40,0),
WARP_NODE(241,26,1,41,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
const LevelScript local_area_bob_2_[] = {
AREA(2,Geo_bob_2_0x19001700),
TERRAIN(col_bob_2_0xe02dd30),
SET_BACKGROUND_MUSIC(0,0x24),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bob_2_),
JUMP_LINK(local_warps_bob_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bob_2_[] = {
OBJECT_WITH_ACTS(0,3334,-962,-5304,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,-4417,2631,2478,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(137,-195,3211,3905,0,0,0,0x10a0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,680,2576,-2049,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-4871,-759,3079,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-5635,1146,2293,0,0,0,0x50e0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,3021,-313,3906,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,-4896,1198,-154,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3438,1094,2188,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3690,-1615,-3382,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,430,-885,1466,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1143,-52,3206,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2188,-990,-417,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2813,417,4271,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3856,1510,4376,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(120,3385,1161,1354,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(120,104,2701,3438,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(217,-156,3385,1302,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(24,1927,-962,-5677,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,0,-962,-3750,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-1198,-962,-5208,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(24,-5156,-962,-5625,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(137,-345,729,4125,0,-31,0,0x30000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(84,-4491,2604,2157,0,0,0,0x0, bhvEnemyLakitu,31),
OBJECT_WITH_ACTS(223,-5000,-962,-3438,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(107,-3437,559,260,0,0,0,0x0, bhvWoodenPost,31),
OBJECT_WITH_ACTS(0,208,-962,-5521,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-573,-962,-4583,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(130,-3594,-962,1976,0,0,0,0x0, bhvBreakableBoxSmall,31),
OBJECT_WITH_ACTS(130,-3939,-962,1626,0,0,0,0x0, bhvBreakableBoxSmall,31),
OBJECT_WITH_ACTS(192,-5521,-962,4531,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-3854,-962,4688,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-2191,-1511,-1839,0,0,45,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3966,-157,273,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4844,1823,-365,-45,0,1,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-990,4115,3958,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3225,-885,1397,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1788,-962,2223,90,0,90,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3954,-1667,-4789,90,0,90,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1719,677,2865,90,0,90,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,1406,156,-4844,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(129,-3944,-962,1930,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,-3074,1795,1094,0,0,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(140,-677,-962,573,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-1036,-156,1441,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-1979,-990,885,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-2708,-313,156,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(137,-5052,938,4009,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-5417,938,4010,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(180,-4844,591,260,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4271,496,-365,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3413,-858,665,0,0,0,0x0, bhvFireSpitter,31),
RETURN()
};
const LevelScript local_warps_bob_2_[] = {
WARP_NODE(10,9,2,10,0),
WARP_NODE(11,9,2,12,0),
WARP_NODE(12,9,2,11,0),
WARP_NODE(13,9,2,14,0),
WARP_NODE(14,9,2,13,0),
WARP_NODE(240,26,2,31,0),
WARP_NODE(241,26,2,41,0),
WARP_NODE(0,9,2,10,0),
WARP_NODE(1,9,2,10,0),
WARP_NODE(2,9,2,10,0),
WARP_NODE(3,9,2,10,0),
WARP_NODE(4,9,2,10,0),
WARP_NODE(5,9,2,10,0),
WARP_NODE(6,9,2,10,0),
RETURN()
};
