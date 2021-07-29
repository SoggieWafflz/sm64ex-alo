void scroll_bbh_dl_DL_wdw_1_0xe05cce0_Obj_001_mesh_layer_1_vtx_8() {
	int i = 0;
	int count = 62;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bbh_dl_DL_wdw_1_0xe05cce0_Obj_001_mesh_layer_1_vtx_8);

	deltaY = (int)(0.20000000298023224 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_bbh_dl_DL_wdw_1_0xe05cce0_Obj_001_mesh_layer_1_vtx_17() {
	int i = 0;
	int count = 30;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bbh_dl_DL_wdw_1_0xe05cce0_Obj_001_mesh_layer_1_vtx_17);

	deltaY = (int)(0.30000001192092896 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_bbh_dl_DL_wdw_1_0xe05cce0_Obj_001_mesh_layer_1_vtx_23() {
	int i = 0;
	int count = 72;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bbh_dl_DL_wdw_1_0xe05cce0_Obj_001_mesh_layer_1_vtx_23);

	deltaY = (int)(0.20000000298023224 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_bbh_dl_water_plane_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 4;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bbh_dl_water_plane_mesh_layer_5_vtx_0);

	deltaX = (int)(0.20000000298023224 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_bbh() {
	scroll_bbh_dl_DL_wdw_1_0xe05cce0_Obj_001_mesh_layer_1_vtx_8();
	scroll_bbh_dl_DL_wdw_1_0xe05cce0_Obj_001_mesh_layer_1_vtx_17();
	scroll_bbh_dl_DL_wdw_1_0xe05cce0_Obj_001_mesh_layer_1_vtx_23();
	scroll_bbh_dl_water_plane_mesh_layer_5_vtx_0();
}
