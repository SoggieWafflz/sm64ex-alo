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

#include "levels/castle_inside/header.h"
const LevelScript level_castle_inside_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group15_mio0SegmentRomStart,_group15_mio0SegmentRomEnd),
LOAD_RAW(13,_group15_geoSegmentRomStart,_group15_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_16),
JUMP_LINK(local_area_castle_inside_1_),
JUMP_LINK(local_area_castle_inside_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_inside_1_[] = {
AREA(1,Geo_castle_inside_1_0x19001700),
TERRAIN(col_castle_inside_1_0xe02c820),
SET_BACKGROUND_MUSIC(0,33),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_1_),
JUMP_LINK(local_warps_castle_inside_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_1_[] = {
OBJECT_WITH_ACTS(0,147,-1008,-3977,0,0,0,0x0, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,147,-1008,-3977,0,0,0,0x0a0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,31,-1223,2016,0,-154,0,0x700000, bhvInstantActiveWarp,31),
OBJECT_WITH_ACTS(22,1827,-1264,-4786,0,-153,0,0x50000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,19,-1424,3017,0,107,0,0x60000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(37,-46,-1055,-5499,92,-151,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(37,117,-1114,-5319,181,2,-21,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(22,-2946,-1194,-1620,0,0,0,0x0, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,1955,-938,-2885,0,0,0,0x10000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-5732,1507,-4809,0,0,0,0xd0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,5903,1752,6966,0,0,0,0x30000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,1385,688,2820,0,0,0,0x40000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,1159,688,4372,0,0,0,0xa0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-102,688,4426,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-1300,688,4375,0,0,0,0xc0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(124,1915,-1264,-4493,0,-64,0,0x7c0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,5598,219,-5303,0,-44,0,0x7d0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-4,1458,-6241,0,0,0,0x7e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-5445,1507,-5184,0,46,0,0x470000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,743,688,3046,0,-90,0,0x880000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,868,688,3950,0,186,0,0x890000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,156,688,3946,0,186,0,0x8a0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-976,688,3913,0,185,0,0x8b0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-776,688,3061,0,96,0,0x8c0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(137,-41,2500,3576,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-47,-52,4399,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,5450,417,-5234,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,5693,2135,6274,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(221,-129,-340,3869,0,0,0,0x53000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(212,-5866,-1411,5519,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-5521,-1411,5521,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-5885,-1411,5833,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-5521,-1411,5833,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(195,-1385,688,2619,0,90,0,0x1e0000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,802,-1411,-3141,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(130,-2189,688,2718,0,0,0,0x0, bhvBreakableBoxSmall,31),
OBJECT_WITH_ACTS(120,1732,-1307,-1196,0,92,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(188,-2019,-1251,-2587,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(124,-4309,-1411,-37,0,-134,0,0x7f0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-1304,688,3142,0,181,0,0x130000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-24,1042,3783,0,180,0,0x20000, bhvLaunchStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-24,1042,3783,0,0,0,0xe0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-27,-1250,1957,0,0,0,0x0, bhvAirborneDeathWarp,31),
OBJECT_WITH_ACTS(0,-31,-1250,2003,0,0,0,0x0, bhvHardAirKnockBackWarp,31),
OBJECT_WITH_ACTS(208,885,688,2913,0,90,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,885,688,2755,0,-90,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(209,1110,688,4023,0,0,0,0x55000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(209,1265,688,4023,0,180,0,0x55000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(209,-142,688,4056,0,0,0,0x5f000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(209,15,688,4056,0,180,0,0x5f000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(209,-1338,688,4049,0,0,0,0x6e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(209,-1180,688,4049,0,180,0,0x6e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(209,-942,688,2925,0,90,0,0x7d000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(209,-942,688,2772,0,-90,0,0x7d000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(124,-105,688,2186,0,180,0,0x400000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-2758,-938,-1608,0,-90,0,0x3c0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,1450,-1250,-2711,0,90,0,0x3e0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,5726,2135,7006,0,-270,0,0x400000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-5776,1719,-5054,0,0,0,0x420000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-2758,-938,-1608,0,-90,0,0x3d0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,1450,-1250,-2711,0,90,0,0x3f0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,5726,2135,7006,0,-270,0,0x410000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-5776,1719,-5054,0,0,0,0x430000, bhvPaintingDeathWarp,31),
RETURN()
};
const LevelScript local_warps_castle_inside_1_[] = {
WARP_NODE(60,0,0,0,0),
WARP_NODE(61,0,0,0,0),
WARP_NODE(62,0,0,0,0),
WARP_NODE(63,0,0,0,0),
WARP_NODE(64,0,0,0,0),
WARP_NODE(65,0,0,0,0),
WARP_NODE(66,0,0,0,0),
WARP_NODE(67,0,0,0,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(10,14,1,10,0),
WARP_NODE(0x70,14,1,10,0),
WARP_NODE(11,15,1,10,0),
WARP_NODE(12,21,1,10,0),
WARP_NODE(13,20,1,10,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,2,0),
WARP_NODE(241,6,1,14,0),
WARP_NODE(0,11,1,10,0),
WARP_NODE(1,10,1,10,0),
WARP_NODE(2,11,1,10,0),
WARP_NODE(3,36,1,10,0),
WARP_NODE(4,13,1,10,0),
WARP_NODE(5,31,1,0,0),
WARP_NODE(6,26,1,0,0),
RETURN()
};
const LevelScript local_area_castle_inside_2_[] = {
AREA(2,Geo_castle_inside_2_0x19001700),
TERRAIN(col_castle_inside_2_0xe02d558),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_inside_2_),
JUMP_LINK(local_warps_castle_inside_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_inside_2_[] = {
OBJECT_WITH_ACTS(0,-260,-1052,-4375,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(221,-648,1486,-5630,0,80,0,0x4c000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(221,-314,-1366,2511,0,-153,0,0x53000000, bhvToadMessage,31),
OBJECT_WITH_ACTS(137,1428,1688,4577,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(22,-130,-933,-5596,90,0,0,0x150000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,2774,-1147,-1622,0,0,0,0x160000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-2224,-912,-2695,0,0,0,0x170000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,1833,-104,545,0,0,0,0x180000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-1576,735,2973,0,0,0,0x190000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-1336,735,4541,0,0,0,0x1a0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-70,735,4516,0,0,0,0x1b0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,1127,735,4555,0,0,0,0x1c0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(217,1216,462,2986,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(212,-5648,390,-5004,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,5648,1727,-4781,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-50,1506,-5697,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(124,-939,735,3166,0,90,0,0x440000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-1044,735,4089,0,180,0,0x450000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-285,735,4090,0,180,0,0x460000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,878,735,4120,0,180,0,0x470000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1302,773,2994,0,-90,0,0x480000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1313,-1007,-6069,0,0,0,0x490000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-1932,-1217,-4558,0,54,0,0x4a0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-3468,-314,4632,0,180,0,0x4b0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-25,2135,2750,0,0,0,0x4e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,4731,1554,-5623,0,42,0,0x4d0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(120,-99,-240,694,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(208,-1042,735,2890,0,270,0,0x50000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,-1042,735,3047,0,90,0,0x50000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,-1388,735,4189,0,0,0,0x5f000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,-1236,735,4189,0,180,0,0x5f000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,-138,735,4195,0,0,0,0x6e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,15,735,4195,0,180,0,0x6e000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,1066,735,4190,0,0,0,0x7d000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,1218,735,4190,0,180,0,0x7d000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,2342,-843,-2061,0,0,0,0x10000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-1501,-1030,-2736,0,0,0,0x40000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,1145,0,593,0,0,0,0x60000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-72,937,3306,0,0,0,0x80000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,2342,-843,-2061,0,0,0,0x20000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-1499,-1030,-2740,0,0,0,0x50000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,1147,0,585,0,0,0,0x70000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-66,937,3297,0,0,0,0x90000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,187,-1218,-2716,0,0,0,0x30000, bhvPaintingDeathWarp,31),
RETURN()
};
const LevelScript local_warps_castle_inside_2_[] = {
WARP_NODE(1,6,2,10,0),
WARP_NODE(2,6,2,10,0),
WARP_NODE(3,6,2,10,0),
WARP_NODE(4,6,2,10,0),
WARP_NODE(5,6,2,10,0),
WARP_NODE(6,6,2,10,0),
WARP_NODE(7,6,2,10,0),
WARP_NODE(8,6,2,10,0),
WARP_NODE(9,6,2,10,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(21,31,2,11,0),
WARP_NODE(22,10,2,10,0),
WARP_NODE(23,11,2,10,0),
WARP_NODE(24,36,2,10,0),
WARP_NODE(25,13,2,10,0),
WARP_NODE(26,14,2,10,0),
WARP_NODE(27,15,2,10,0),
WARP_NODE(28,21,2,10,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(30,6,2,10,0),
WARP_NODE(31,6,2,10,0),
WARP_NODE(32,6,2,10,0),
WARP_NODE(33,6,2,10,0),
WARP_NODE(34,6,2,10,0),
WARP_NODE(35,6,2,10,0),
WARP_NODE(36,6,2,10,0),
WARP_NODE(37,6,2,10,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(0,0,1,0,0),
WARP_NODE(10,9,2,10,0),
WARP_NODE(11,9,2,12,0),
WARP_NODE(12,9,2,11,0),
WARP_NODE(13,9,2,14,0),
WARP_NODE(14,9,2,13,0),
WARP_NODE(240,6,2,50,0),
WARP_NODE(241,6,2,3,0),
WARP_NODE(0,9,2,10,0),
WARP_NODE(1,9,2,10,0),
WARP_NODE(2,9,2,10,0),
WARP_NODE(3,9,2,10,0),
WARP_NODE(4,9,2,10,0),
WARP_NODE(5,9,2,10,0),
WARP_NODE(6,9,2,10,0),
RETURN()
};
