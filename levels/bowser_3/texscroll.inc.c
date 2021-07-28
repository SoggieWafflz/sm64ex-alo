void scroll_bowser_3_dl_NurbsPath_001_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 679;
	int width = 128 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bowser_3_dl_NurbsPath_001_mesh_layer_1_vtx_0);

	deltaX = (int)(3.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_bowser_3_dl_NurbsPath_002_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 678;
	int width = 128 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bowser_3_dl_NurbsPath_002_mesh_layer_1_vtx_0);

	deltaX = (int)(0.019999999552965164 * 0x20) % width;
	deltaY = (int)(0.10000000149011612 * 0x20) % height;

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
	currentY += deltaY;

}
void scroll_bowser_3() {
	scroll_bowser_3_dl_NurbsPath_001_mesh_layer_1_vtx_0();
	scroll_bowser_3_dl_NurbsPath_002_mesh_layer_1_vtx_0();
}
