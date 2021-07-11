void scroll_wf_dl_DL_sl_1_0xe0bca40_Obj_001_mesh_layer_1_vtx_20() {
	int i = 0;
	int count = 184;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_DL_sl_1_0xe0bca40_Obj_001_mesh_layer_1_vtx_20);

	deltaY = (int)(-1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_wf_dl_DL_bbh_1_0xe0ce020_Obj_001_mesh_layer_4_vtx_2() {
	int i = 0;
	int count = 222;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_DL_bbh_1_0xe0ce020_Obj_001_mesh_layer_4_vtx_2);

	deltaY = (int)(-1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_wf_dl_DL_bbh_1_0xe106610_Obj_001_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 532;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_DL_bbh_1_0xe106610_Obj_001_mesh_layer_4_vtx_0);

	deltaY = (int)(1.2000000476837158 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_wf() {
	scroll_wf_dl_DL_sl_1_0xe0bca40_Obj_001_mesh_layer_1_vtx_20();
	scroll_wf_dl_DL_bbh_1_0xe0ce020_Obj_001_mesh_layer_4_vtx_2();
	scroll_wf_dl_DL_bbh_1_0xe106610_Obj_001_mesh_layer_4_vtx_0();
}
