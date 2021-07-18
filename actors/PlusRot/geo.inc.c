#include "src/game/envfx_snow.h"

const GeoLayout PlusRotGeo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, PlusRot_Cube_009_mesh_layer_1),
		GEO_DISPLAY_LIST(1, PlusRot_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
