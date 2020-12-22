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

#include "levels/wmotr/header.h"
const LevelScript level_wmotr_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_wmotr_1_),
JUMP_LINK(local_area_wmotr_2_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wmotr_1_[] = {
AREA(1,Geo_wmotr_1_0x19001700),
TERRAIN(col_wmotr_1_0xe028ae8),
SET_BACKGROUND_MUSIC(0,33),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,-612,-1526,3739,0,-180,0,0x0, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-612,-1526,3739,0,-180,0,0x000A0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(37,-733,-1584,4331,0,0,0,0x0, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-582,-1584,4331,0,180,0,0x0, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-4634,-1584,-2254,0,270,0,0x1040000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,-4634,-1584,-2102,0,90,0,0x1040000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,-388,-1250,-32,0,0,0,0x20000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-578,-1406,1336,0,0,0,0x30000, bhvLaunchStarCollectWarp,31),
OBJECT_WITH_ACTS(122,2223,833,4552,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,5880,5260,4014,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,4147,-1146,1178,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-3300,-1302,2967,0,0,0,0x3000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,5186,2344,147,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-303,365,-2384,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,-5681,-1582,5048,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2891,2187,4763,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2292,417,4752,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,5094,-1563,631,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(215,3063,-1510,-4469,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1459,-416,-1615,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2188,0,-5208,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3423,885,170,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(124,-1519,-1582,-295,0,0,0,0x5b0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,-4035,-1582,1460,0,0,0,0xc0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,4161,781,-2147,0,0,0,0x50000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,4500,-1582,187,0,0,0,0xd0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,5729,3499,4010,0,0,0,0xe0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-313,1093,-2448,0,0,0,0x60000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-2184,-1145,-5052,0,0,0,0xf700000, bhvWarp,31),
OBJECT_WITH_ACTS(215,-5292,-1165,-1167,0,90,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(124,-5662,631,-2164,0,86,0,0x610000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-4594,-1582,-3892,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,906,-1582,2897,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(208,3641,-1582,94,0,-90,0,0x32000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,3641,-1582,249,0,90,0,0x32000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(22,4802,-1582,-5604,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(84,5105,-1458,-5148,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,4492,-1458,-6095,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(124,-4389,-1578,-1853,0,99,0,0x30000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-2283,-1146,-4714,0,-180,0,0x3c0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,4673,-1198,-5625,0,-270,0,0x3e0000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-287,1406,-2488,0,-270,0,0x400000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,4112,1198,-2145,0,-270,0,0x420000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,5480,3646,4254,0,-270,0,0x440000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-3876,-1250,1463,0,-90,0,0x460000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,3384,-1354,111,0,-270,0,0x480000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,-2283,-1146,-4714,0,-180,0,0x3d0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,4673,-1198,-5625,0,-270,0,0x3f0000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-287,1406,-2488,0,-270,0,0x410000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,4112,1198,-2145,0,-270,0,0x430000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,5480,3646,4254,0,-270,0,0x450000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,-3876,-1250,1463,0,-90,0,0x470000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,3384,-1354,111,0,-270,0,0x490000, bhvPaintingDeathWarp,31),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(60,0,0,0,0),
WARP_NODE(61,0,0,0,0),
WARP_NODE(62,0,0,0,0),
WARP_NODE(63,0,0,0,0),
WARP_NODE(64,0,0,0,0),
WARP_NODE(65,0,0,0,0),
WARP_NODE(66,0,0,0,0),
WARP_NODE(67,0,0,0,0),
WARP_NODE(68,0,0,0,0),
WARP_NODE(69,0,0,0,0),
WARP_NODE(70,0,0,0,0),
WARP_NODE(71,0,0,0,0),
WARP_NODE(72,0,0,0,0),
WARP_NODE(73,0,0,0,0),
WARP_NODE(0x70,5,1,10,0),
WARP_NODE(0,0,0,0,0),
WARP_NODE(10,5,1,10,0),
WARP_NODE(11,4,1,10,0),
WARP_NODE(12,23,1,10,0),
WARP_NODE(13,19,1,10,0),
WARP_NODE(14,27,1,10,0),
WARP_NODE(240,31,1,3,0),
WARP_NODE(241,31,1,2,0),
WARP_NODE(0,26,1,0,0),
WARP_NODE(1,6,1,0,0),
WARP_NODE(2,31,1,2,0),
WARP_NODE(3,31,1,3,0),
WARP_NODE(4,6,1,0,0),
WARP_NODE(5,18,1,10,0),
WARP_NODE(6,29,1,10,0),
RETURN()
};
const LevelScript local_area_wmotr_2_[] = {
AREA(2,Geo_wmotr_2_0x19001700),
TERRAIN(col_wmotr_2_0xe024698),
SET_BACKGROUND_MUSIC(0,0x33),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_2_),
JUMP_LINK(local_warps_wmotr_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_2_[] = {
OBJECT_WITH_ACTS(0,1094,-600,-5521,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,948,-494,5238,0,0,0,0xb0000, bhvInstantActiveWarp,31),
OBJECT_WITH_ACTS(22,-3424,-878,-3544,0,0,0,0x40000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,5107,-815,817,0,0,0,0x80000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,1079,-878,2922,0,0,0,0xa0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(137,-4948,818,5365,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(22,-4665,-932,4604,0,0,0,0x90000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,5770,-582,-4879,0,0,0,0xa030000, bhvWarp,31),
OBJECT_WITH_ACTS(208,1162,-878,2461,0,180,0,0x32000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(208,1004,-878,2461,0,0,0,0x32000000, bhvStarDoor,31),
OBJECT_WITH_ACTS(37,976,-878,-6485,0,0,0,0xc0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,1128,-878,-6485,0,180,0,0xc0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,863,-878,6185,0,0,0,0x10d0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(37,1015,-878,6185,0,180,0,0x10d0000, bhvDoorWarp,31),
OBJECT_WITH_ACTS(0,1099,-707,-236,0,0,0,0x10000, bhvPaintingStarCollectWarp,31),
OBJECT_WITH_ACTS(0,1094,-707,-235,0,0,0,0x20000, bhvPaintingDeathWarp,31),
OBJECT_WITH_ACTS(0,5914,-471,-2486,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,314,680,6725,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,314,680,6280,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1491,680,6259,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1491,680,6704,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-131,445,-6856,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2198,445,-6856,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6123,1989,6751,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1704,3428,-3010,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(122,927,942,6516,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1793,3716,-5502,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,288,3428,-3035,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-4160,2617,3715,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-4412,-19,3313,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-4344,2218,-4082,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(0,-2957,3317,-4082,0,0,0,0x0, bhvMrI,31),
OBJECT_WITH_ACTS(23,5189,-815,1166,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(0,-628,-878,-5338,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,2591,-878,-5338,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,523,-878,1518,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,1099,-878,-1099,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,3925,-878,4265,0,-93,0,0x100000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(23,3742,-878,2721,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(212,1805,1675,3480,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(23,523,-787,-3035,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(124,-1781,-878,-6053,0,22,0,0x120000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(137,-2793,3393,-5583,0,-44,0,0xf0000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_wmotr_2_[] = {
WARP_NODE(1,31,2,10,0),
WARP_NODE(2,31,2,10,0),
WARP_NODE(3,5,2,10,0),
WARP_NODE(4,4,2,10,0),
WARP_NODE(5,28,2,10,0),
WARP_NODE(240,31,2,1,0),
WARP_NODE(241,31,2,2,0),
WARP_NODE(8,18,2,10,0),
WARP_NODE(9,27,2,10,0),
WARP_NODE(10,19,2,10,0),
WARP_NODE(11,31,2,10,0),
WARP_NODE(12,26,2,10,0),
WARP_NODE(13,6,2,10,0),
WARP_NODE(14,9,2,10,0),
RETURN()
};
