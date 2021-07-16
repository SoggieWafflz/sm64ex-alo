void scroll_bob_dl_DL_bitdw_1_0xe0feed0_Obj_004_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 69;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int timeX;
	float amplitudeX = 8.0;
	float frequencyX = 0.019999999552965164;
	float offsetX = 0.0;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_DL_bitdw_1_0xe0feed0_Obj_004_mesh_layer_5_vtx_0);

	deltaX = (int)(amplitudeX * frequencyX * coss((frequencyX * timeX + offsetX) * (1024 * 16 - 1) / 6.28318530718) * 0x20);
	deltaY = (int)(-0.5 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;
	timeX += 1;
	currentY += deltaY;

}
void scroll_bob_dl_DL_ccm_1_0xe044090_Obj_001_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 98;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_DL_ccm_1_0xe044090_Obj_001_mesh_layer_1_vtx_5);

	deltaY = (int)(-0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_bob() {
	scroll_bob_dl_DL_bitdw_1_0xe0feed0_Obj_004_mesh_layer_5_vtx_0();
	scroll_bob_dl_DL_ccm_1_0xe044090_Obj_001_mesh_layer_1_vtx_5();
}
