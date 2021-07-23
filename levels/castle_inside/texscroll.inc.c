void scroll_castle_inside_dl_Cube_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 249;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 6.0;
	float frequencyY = 0.07999999821186066;
	float offsetY = 0.0;
	Vtx *vertices = segmented_to_virtual(castle_inside_dl_Cube_mesh_layer_1_vtx_0);

	deltaX = (int)(-0.4000000059604645 * 0x20) % width;
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
	currentY += deltaY;
	timeY += 1;

}
void scroll_castle_inside_dl_Cube_001_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 196;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 6.0;
	float frequencyY = 0.07999999821186066;
	float offsetY = 0.0;
	Vtx *vertices = segmented_to_virtual(castle_inside_dl_Cube_001_mesh_layer_1_vtx_0);

	deltaX = (int)(-0.4000000059604645 * 0x20) % width;
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
	currentY += deltaY;
	timeY += 1;

}
void scroll_castle_inside() {
	scroll_castle_inside_dl_Cube_mesh_layer_1_vtx_0();
	scroll_castle_inside_dl_Cube_001_mesh_layer_1_vtx_0();
}
