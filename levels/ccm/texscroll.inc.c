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
void scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_57() {
	int i = 0;
	int count = 128;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_57);

	deltaY = (int)(0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_ccm_dl_DL_vcutm_1_0xe0610c0_Obj_mesh_layer_4_vtx_3() {
	int i = 0;
	int count = 585;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int timeX;
	float amplitudeX = 5.0;
	float frequencyX = 0.019999999552965164;
	float offsetX = 0.0;
	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 3.0;
	float frequencyY = 0.10000000149011612;
	float offsetY = 3.0;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_vcutm_1_0xe0610c0_Obj_mesh_layer_4_vtx_3);

	deltaX = (int)(amplitudeX * frequencyX * coss((frequencyX * timeX + offsetX) * (1024 * 16 - 1) / 6.28318530718) * 0x20);
	deltaY = (int)(amplitudeY * frequencyY * coss((frequencyY * timeY + offsetY) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

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
	timeY += 1;

}
void scroll_ccm_dl_DL_vcutm_1_0xe0610c0_Obj_mesh_layer_4_vtx_8() {
	int i = 0;
	int count = 283;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_vcutm_1_0xe0610c0_Obj_mesh_layer_4_vtx_8);

	deltaX = (int)(-0.10000000149011612 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_ccm_dl_DL_vcutm_1_0xe0610c0_Obj_002_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 109;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int timeX;
	float amplitudeX = 5.0;
	float frequencyX = 0.019999999552965164;
	float offsetX = 0.0;
	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 3.0;
	float frequencyY = 0.10000000149011612;
	float offsetY = 3.0;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_vcutm_1_0xe0610c0_Obj_002_mesh_layer_4_vtx_0);

	deltaX = (int)(amplitudeX * frequencyX * coss((frequencyX * timeX + offsetX) * (1024 * 16 - 1) / 6.28318530718) * 0x20);
	deltaY = (int)(amplitudeY * frequencyY * coss((frequencyY * timeY + offsetY) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

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
	timeY += 1;

}
void scroll_ccm() {
	scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_12();
	scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_21();
	scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_37();
	scroll_ccm_dl_DL_jrb_1_0xe0986e0_Obj_mesh_layer_4_vtx_57();
	scroll_ccm_dl_DL_vcutm_1_0xe0610c0_Obj_mesh_layer_4_vtx_3();
	scroll_ccm_dl_DL_vcutm_1_0xe0610c0_Obj_mesh_layer_4_vtx_8();
	scroll_ccm_dl_DL_vcutm_1_0xe0610c0_Obj_002_mesh_layer_4_vtx_0();
}
