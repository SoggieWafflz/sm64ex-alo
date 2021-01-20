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
#include "levels/vcutm/header.h"
extern u8 _vcutm_segment_ESegmentRomStart[]; 
extern u8 _vcutm_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_vcutm_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _vcutm_segment_ESegmentRomStart, _vcutm_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_SkyboxCustom32472768_skybox_mio0SegmentRomStart,_SkyboxCustom32472768_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
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
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(84,0x05002e00,4),
// LOAD_MODEL_FROM_DL(86,0x05003120,4),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_vcutm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x19001700),
TERRAIN(col_vcutm_1_0xe047da8),
SET_BACKGROUND_MUSIC(0,47),
TERRAIN_TYPE(6),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,-11833,7615,-8494,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,6722,-2094,3561,0,-71,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,-102,-10093,-1780,0,-123,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-12205,-4496,-6261,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-7914,-5627,871,0,43,0,0xd0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-6412,7613,-7331,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(85,3225,2658,-675,0,50,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(207,5049,-4131,1536,0,-90,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(124,-4955,3501,-7821,0,0,0,0x320000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(137,-395,-10528,-1933,0,57,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(180,3223,3018,-663,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(217,1520,2300,-3460,0,22,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(207,1520,2607,-3460,0,22,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,5641,-3480,1156,45,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5390,-3992,1249,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5665,-2824,1144,45,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5129,-3166,1164,45,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5117,-2471,1110,45,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(217,5715,-2215,1192,0,0,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(129,1149,2768,-3717,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,765,3053,-3957,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,572,3394,-4218,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,550,3813,-4474,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,820,4154,-4434,0,-33,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(217,501,5989,-6671,0,14,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-694,5910,-6394,0,14,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(124,-6412,7236,-7283,0,180,0,0x330000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(217,-2454,6028,-6055,0,14,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(217,-3506,5884,-6031,0,-21,0,0x0, bhvPushableMetalBox,31),
OBJECT_WITH_ACTS(124,-6408,7077,-10143,0,180,0,0x340000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(215,-11821,6872,-7121,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5175,2296,-4981,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5791,497,-490,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5,-746,1094,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1634,-2754,4369,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5371,-8185,5875,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4235,-8859,2872,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3145,-10446,249,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(124,3137,2994,-2705,0,0,0,0x310000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(180,-8020,-5924,979,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(145,5718,-1842,1195,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(180,-12324,6384,-8566,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5574,2292,1043,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3504,1657,1045,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5855,361,1003,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4787,-1733,1014,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,4423,1185,988,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5206,-274,991,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3677,-2859,5237,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-6418,7271,-8106,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,546,6378,-6634,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3512,6220,-6017,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,6765,-2500,3752,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,389,-10483,-1378,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5543,3052,601,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,499,4157,-4519,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,3133,3167,-3224,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-12300,-4906,-6435,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,5103,-3864,1967,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,-4955,5270,-7821,0,0,0,0x6080000, bhvExclamationBox,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,66,0),
WARP_NODE(241,26,1,67,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
