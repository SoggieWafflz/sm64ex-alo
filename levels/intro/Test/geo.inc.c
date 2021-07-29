#include "src/game/envfx_snow.h"

const GeoLayout Test[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1992, 246, -1998, Test_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -1543, 224, -2522, Test_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 554, 957, -2352, Test_Cube_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(4, 810, 330, -1090, Test_Plane_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(4, -570, -556, -1090, Test_Plane_001_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(1, -1190, 400, -401, Test_Text_001_mesh_layer_1),
		GEO_DISPLAY_LIST(4, Test_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, Test_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
