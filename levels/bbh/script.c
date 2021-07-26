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
#include "levels/bbh/header.h"

const LevelScript level_bbh_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _spooky_mio0SegmentRomStart, _spooky_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group5_mio0SegmentRomStart, _group5_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group5_geoSegmentRomStart, _group5_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_6), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR, haunted_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP, geo_bbh_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM, geo_bbh_0005E0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF, geo_bbh_000610), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR, geo_bbh_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND, geo_bbh_000640), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB, geo_bbh_000658), 

	AREA(1, bbh_area_1),
		WARP_NODE(0x11, LEVEL_BBH, 0x01, 0x12, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 2, 0x1C, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 2, 0x1B, WARP_NO_CHECKPOINT),
		OBJECT(188, -3862, -1404, -2154, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, -3865, -1404, -2732, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, -377, -1077, -2413, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, -11915, -1012, -6572, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, -11900, -1012, -4668, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, -4481, -1992, 699, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, -6682, -872, -9922, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, 6821, -4092, -699, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, 4011, -5407, 10166, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, 3783, -1023, 2537, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(223, -4996, 359, -6568, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(223, -9261, -872, -8143, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(223, -9967, -4056, 6468, 180, 0, 0, 0x0, bhvChuckya),
		OBJECT(223, -13230, 2543, 2630, 180, 0, 0, 0x0, bhvChuckya),
		OBJECT(223, -10812, -4120, 397, 180, 0, 0, 0x0, bhvChuckya),
		OBJECT(223, -12244, 2095, 8113, 180, 0, 0, 0x0, bhvChuckya),
		OBJECT(0, 2008, -3302, -1986, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -4983, -2300, -6024, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -11932, -798, -5594, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -7997, -1292, -2392, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -16250, 1027, 4756, 180, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -12602, 2039, 9174, 180, -44, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 7121, -4017, -3295, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 7871, -5333, 6753, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3139, -4206, 1516, 0, -73, 0, 0x0, bhvCoinFormation),
		OBJECT(137, -2097, -590, -11720, 0, 0, 0, 0x60000, bhvExclamationBox),
		OBJECT(180, -6739, 1095, -1923, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -6739, 1095, -2874, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -1636, -1170, -2186, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -1891, -657, -12771, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 1392, -1394, -1250, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -4279, -1413, -5866, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 2370, -78, -506, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -13322, 406, -4278, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -6914, -4059, 8426, 180, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -16412, 584, 2623, 180, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -11771, 905, 11239, 180, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -13889, 3618, 6602, 180, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -11904, 2305, 6613, 180, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(MODEL_FLYGUY, 5402, -566, 6920, 0, 0, 0, 0x10000, bhvFlyGuy),
		OBJECT(MODEL_FLYGUY, 4923, -3881, 6982, 0, 0, 0, 0x10000, bhvFlyGuy),
		OBJECT(MODEL_FLYGUY, 5624, 1251, -13946, 0, 0, 0, 0x10000, bhvFlyGuy),
		OBJECT(MODEL_STAR, 4712, -965, 6479, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 4517, -965, 7793, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 6213, -965, 7670, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 6206, -965, 6186, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(194, -12514, -3028, 1346, 180, 0, 0, 0x0, bhvHomingAmp),
		OBJECT(194, -12048, -3420, 335, 180, 0, 0, 0x0, bhvHomingAmp),
		OBJECT(194, -10569, -4288, 1298, 180, 0, 0, 0x0, bhvHomingAmp),
		OBJECT(124, 5981, -4148, 7776, 0, -180, 0, 0x300000, bhvMessagePanel),
		OBJECT(124, 10627, -3473, 3496, 0, -131, 0, 0x310000, bhvMessagePanel),
		OBJECT(124, -5754, -3283, 2567, 0, 0, 0, 0x2D0000, bhvMessagePanel),
		OBJECT(124, -13264, 2291, 1157, 0, 1, 0, 0x2E0000, bhvMessagePanel),
		OBJECT(124, -7869, -592, -10641, 0, 60, 0, 0x2F0000, bhvMessagePanel),
		OBJECT(124, 8016, -4208, 15021, 0, -90, 0, 0x320000, bhvMessagePanel),
		OBJECT(116, -13248, -993, -5470, 0, 0, 0, 0x0, bhvOneCoin),
		OBJECT(0, -7173, -872, -9365, 0, 0, 0, 0x0, bhvPokey),
		OBJECT(0, 637, -2200, -2446, 0, 0, 0, 0x0, bhvPokey),
		OBJECT(0, 4122, -1152, -13338, 0, 0, 0, 0x0, bhvPokey),
		OBJECT(0, -6960, -2748, 823, 0, 0, 0, 0x0, bhvPokey),
		OBJECT(0, -13656, 2627, 7683, 180, 0, 0, 0x0, bhvPokey),
		OBJECT(0, -3854, -3828, 7156, 180, 0, 0, 0x0, bhvPokey),
		OBJECT(0, -10055, 1983, 3541, 180, 0, 0, 0x0, bhvPokey),
		OBJECT(0, 2483, -5407, 8654, 0, 0, 0, 0x0, bhvPokey),
		OBJECT(0, 8245, -4092, 1221, 0, 0, 0, 0x0, bhvPokey),
		OBJECT(0, 7207, -5407, 3944, 0, 0, 0, 0x0, bhvPokey),
		OBJECT(MODEL_NONE, 5388, -965, 7218, 0, 0, 0, 0x1, bhvHiddenStarTrigger),
		OBJECT(122, -12266, -1979, 2206, 180, 0, 0, 0x03000001, bhvStar),
		OBJECT(122, -7964, -499, 11888, 0, -90, 0, 0x3000001, bhvStar),
		OBJECT(0, 10193, -2925, 3108, 0, -132, 0, 0x120000, bhvSpinAirborneWarp),
		OBJECT(250, 9242, -4208, 12952, 0, 90, 0, 0x052C0000, bhvDorriePanel),
		OBJECT(122, 6895, 2489, -13363, 0, -90, 0, 0x1000001, bhvStar),
		TERRAIN(bbh_area_1_collision),
		MACRO_OBJECTS(bbh_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x29),
		TERRAIN_TYPE(TERRAIN_SAND),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
