void scroll_hmc_dl_DL_lll_1_0xe0ae900_Obj_001_mesh_layer_4_vtx_34() {
	int i = 0;
	int count = 8;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_DL_lll_1_0xe0ae900_Obj_001_mesh_layer_4_vtx_34);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_hmc_dl_DL_bob_1_0xe01b220_Obj_mesh_layer_4_vtx_1() {
	int i = 0;
	int count = 8;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_DL_bob_1_0xe01b220_Obj_mesh_layer_4_vtx_1);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_hmc() {
	scroll_hmc_dl_DL_lll_1_0xe0ae900_Obj_001_mesh_layer_4_vtx_34();
	scroll_hmc_dl_DL_bob_1_0xe01b220_Obj_mesh_layer_4_vtx_1();
}
