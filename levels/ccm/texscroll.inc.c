void scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_12() {
	int i = 0;
	int count = 84;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_12);

	deltaY = (int)(0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_21() {
	int i = 0;
	int count = 124;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_21);

	deltaY = (int)(0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_37() {
	int i = 0;
	int count = 87;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_37);

	deltaY = (int)(0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_58() {
	int i = 0;
	int count = 128;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_58);

	deltaY = (int)(0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ccm() {
	scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_12();
	scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_21();
	scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_37();
	scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_58();
}
