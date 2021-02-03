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
#include "levels/bowser_2/header.h"
extern u8 _bowser_2_segment_ESegmentRomStart[]; 
extern u8 _bowser_2_segment_ESegmentRomEnd[];
#include "levels/ssl/header.h"
const LevelScript level_bowser_2_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _sslSegmentRomStart, _sslSegmentRomEnd),
LOAD_RAW(0x0E, _bowser_2_segment_ESegmentRomStart, _bowser_2_segment_ESegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group5_mio0SegmentRomStart,_group5_mio0SegmentRomEnd),
LOAD_RAW(12,_group5_geoSegmentRomStart,_group5_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE,           palm_tree_geo),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       ssl_geo_0005C0),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       ssl_geo_0005D8),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP,         ssl_geo_000618),
LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL,             ssl_geo_000734),
LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL,             ssl_geo_000764),
LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR,    ssl_geo_0007AC),
LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX,             ssl_geo_000630),
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
// LOAD_MODEL_FROM_GEO(86,0x05014630),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_6),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_bowser_2_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bowser_2_1_[] = {
AREA(1,Geo_bowser_2_1_0x3881700),
TERRAIN(col_bowser_2_1_0xe027cd8),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(4),
JUMP_LINK(local_objects_bowser_2_1_),
JUMP_LINK(local_warps_bowser_2_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bowser_2_1_[] = {
OBJECT_WITH_ACTS(0,-87,-629,3180,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-83,-1922,-1610,0,0,0,0x0, bhvEyerokBoss,31),
OBJECT_WITH_ACTS(0,-89,442,-566,0,0,0,0x0, bhvWhompKingBoss,31),
OBJECT_WITH_ACTS(180,-86,-1731,-571,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(194,246,-1712,-571,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(194,-420,-1712,-571,0,0,0,0x0, bhvHomingAmp,31),
OBJECT_WITH_ACTS(212,435,-892,4007,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(116,970,-1891,-1627,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,970,-1722,-1627,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1130,-1891,-1630,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1130,-1722,-1630,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1131,-1891,492,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-1131,-1722,492,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,967,-1891,472,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,967,-1722,472,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(212,-65,-892,541,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(122,-484,-483,2582,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(122,267,-483,2585,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(120,-83,-812,3924,0,0,0,0x0, bhvRecoveryHeart,31),
OBJECT_WITH_ACTS(0,341,5,36,0,0,0,&VB_bowser_2_1_0xe022730[4], editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,341,5,36,0,0,0,&VB_bowser_2_1_0x0[0], editor_Scroll_Texture,31),
// OBJECT_WITH_ACTS(0,341,4,36,0,0,0,&VB_bowser_2_1_0x0[0], editor_Scroll_Texture,31),
RETURN()
};
const LevelScript local_warps_bowser_2_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,7,1,240,0),
WARP_NODE(241,19,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
