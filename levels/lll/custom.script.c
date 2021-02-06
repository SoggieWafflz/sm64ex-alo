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
#include "levels/hmc/header.h"
const LevelScript level_lll_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _hmcSegmentRomStart, _hmcSegmentRomEnd),
LOAD_RAW(0x0E, _lll_segment_ESegmentRomStart, _lll_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR,          wooden_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR,           metal_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM,       hmc_geo_0005A0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM,    hmc_geo_0005D0),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK,         hmc_geo_000548),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE,           hmc_geo_000570),
LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE,     hmc_geo_000588),
LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS,           hmc_geo_000530),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(29, wooden_door_geo),
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
TERRAIN(col_lll_1_0xe086ee8),
SET_BACKGROUND_MUSIC(0,41),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_lll_1_),
JUMP_LINK(local_warps_lll_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_lll_1_[] = {
OBJECT_WITH_ACTS(0,-2774,-1808,2380,0,139,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,2364,-626,5545,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,1335,-2694,3965,0,180,0,0x1010000, bhvOpenableGrill,31),
OBJECT_WITH_ACTS(207,-7474,-4214,469,0,0,0,0x0, bhvFloorSwitchGrills,31),
OBJECT_WITH_ACTS(137,-7985,-1796,72,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,-6610,-1049,3076,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(215,-5578,-1325,3185,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4177,-3065,3000,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-419,354,5748,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1622,-2676,-7812,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-7300,-2645,-2362,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5608,-2645,-693,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-8790,-996,-4757,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2282,-2645,6205,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(137,1335,-2336,4354,0,180,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,8324,-740,6869,0,129,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,5697,1275,-9755,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-9580,-1340,7368,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,1333,807,5848,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-7343,-1886,257,0,0,0,0x5000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(34,-7770,-1784,6451,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-6871,-1784,7349,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-6869,-1784,10949,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-9570,-1784,8252,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-10469,-1784,9150,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-11369,-1784,8251,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-11370,-1784,10049,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-5969,-1784,10051,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-6871,-1784,9149,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-9569,-1784,11850,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-10469,-1784,10949,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-10469,-1784,12749,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-7769,-1784,11842,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-8669,-1784,12750,0,90,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-5969,-1784,11848,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(34,-7770,-1784,8252,0,0,0,0x0, bhvDoor,31),
OBJECT_WITH_ACTS(38,-8668,-1784,7351,0,90,0,0x460000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,-7767,-1784,10042,0,0,0,0x460000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,-9569,-1784,10046,0,0,0,0x460000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,-6873,-1784,12748,0,90,0,0x460000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,-11370,-1784,11843,0,0,0,0x460000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,-8668,-1784,10950,0,90,0,0x460000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,-8667,-1784,9148,0,90,0,0x460000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,-5969,-1784,8248,0,0,0,0x460000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(38,-10469,-1784,7349,0,90,0,0x460000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(124,-7903,-1784,6314,0,180,0,0x4a0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,-7775,-1993,5630,0,0,0,0x500000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(129,649,-1994,2679,0,90,0,0x0, bhvJumpingBox,31),
OBJECT_WITH_ACTS(103,-10654,-2684,48,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(122,-7398,-2684,-3984,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,-1192,-2474,-1168,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,3830,-2684,-1969,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,7224,-2684,740,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(122,762,-2474,368,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(223,-239,-884,-8199,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(0,6324,-2985,-8518,0,0,0,0x20000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7324,-2005,-1433,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-455,-3104,4395,0,-40,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-11715,-1363,-579,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5309,-3104,6519,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-7747,-1784,4782,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,2969,-1522,3318,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(140,3045,-2084,-4837,0,193,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,5507,-1784,-4598,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,4699,-1784,-4602,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3887,-1784,-4588,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3116,-1784,-4475,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(100,-3199,-2684,698,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-7843,-2684,3158,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,3153,-2684,5754,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,6260,-2684,2649,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,35,-1784,-4447,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-4889,-1664,-2149,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-9501,-2684,-2070,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-6969,-2234,244,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,4063,-375,5973,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,1517,-2548,-896,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,2466,-2204,2258,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-196,-2684,6757,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(0,3187,-2684,-466,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,6260,-2684,-2564,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,5377,-735,4788,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-5491,-2174,-3808,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-5574,-1364,2820,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-229,-158,8886,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-10505,-1035,-3397,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-1080,-2474,197,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(192,4535,-1184,-12468,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,8391,-1784,-9457,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,580,-884,-12556,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,18,-884,-11909,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,3728,424,-8911,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,8276,-1184,6787,0,0,0,0x10000, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2674,-485,-8839,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(220,-1952,315,6494,0,0,0,0x10000, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,-5832,-3597,150,0,0,0,0x0, bhvFish2,31),
OBJECT_WITH_ACTS(180,9349,-2565,8368,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,12090,-1605,6415,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,9817,-1335,5242,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2216,-2565,3757,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,2815,-1065,-11701,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-345,434,5320,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-11421,-1962,1764,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-4397,-1245,874,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,8860,-1552,2178,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,2344,-1982,5683,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(194,-7798,-1784,9166,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-9631,-1784,11045,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-5967,-1784,10996,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(0,16,5,15,0,0,0,28,editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_lll_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,170,0),
WARP_NODE(241,16,1,171,0),
WARP_NODE(70,22,1,80,0),
WARP_NODE(80,22,1,80,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
