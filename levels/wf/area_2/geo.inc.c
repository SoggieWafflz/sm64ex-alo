#include "src/game/envfx_snow.h"

const GeoLayout wf_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 35, 935, -3797, wf_dl_NurbsPath_018_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 603, 550, -3797, wf_dl_NurbsPath_019_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -11, 2868, -9010, wf_dl_NurbsPath_020_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 2297, 2128, -5408, wf_dl_NurbsPath_021_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2375, 2996, -7139, wf_dl_NurbsPath_022_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -590, 550, -3797, wf_dl_NurbsPath_023_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 2656, 1752, -8154, wf_dl_NurbsPath_024_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 2613, 2591, -6449, wf_dl_NurbsPath_025_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -13, 1314, -4713, wf_dl_NurbsPath_026_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2624, 817, -6493, wf_dl_NurbsPath_027_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2728, 1556, -4713, wf_dl_NurbsPath_028_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2728, 1169, -5577, wf_dl_NurbsPath_029_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 17, -272, 9, wf_dl_Plane_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(7, 17, -272, 9, wf_dl_Plane_004_mesh_layer_7),
		GEO_TRANSLATE_NODE_WITH_DL(7, 17, 1225, -4059, wf_dl_Plane_006_mesh_layer_7),
		GEO_TRANSLATE_NODE_WITH_DL(7, 17, 1225, -4059, wf_dl_Plane_007_mesh_layer_7),
		GEO_TRANSLATE_NODE_WITH_DL(7, 17, 1225, -4059, wf_dl_Plane_008_mesh_layer_7),
		GEO_TRANSLATE_NODE_WITH_DL(7, 2, 2235, -7098, wf_dl_Plane_009_mesh_layer_7),
		GEO_TRANSLATE_NODE_WITH_DL(7, 2, 1225, -7098, wf_dl_Plane_010_mesh_layer_7),
		GEO_TRANSLATE_NODE_WITH_DL(7, 2, 2235, -7098, wf_dl_Plane_011_mesh_layer_7),
		GEO_TRANSLATE_NODE_WITH_DL(7, 17, 2806, -7513, wf_dl_Plane_012_mesh_layer_7),
		GEO_TRANSLATE_NODE_WITH_DL(7, 17, 1225, -7513, wf_dl_Plane_013_mesh_layer_7),
		GEO_TRANSLATE_NODE_WITH_DL(7, 17, 2806, -7513, wf_dl_Plane_014_mesh_layer_7),
		GEO_TRANSLATE_NODE_WITH_DL(1, 17, 422, -1425, wf_dl_Plane_015_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 2697, 1078, -4764, wf_dl_Plane_016_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -1734, 2050, -6515, wf_dl_Plane_017_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_2[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, -14085, 0, 0, -14335, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wf_area_2_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(7, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, wf_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
