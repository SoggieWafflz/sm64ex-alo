void scroll_bitdw_dl_DL_bitdw_1_0xe09a920_Obj_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 448;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bitdw_dl_DL_bitdw_1_0xe09a920_Obj_mesh_layer_5_vtx_1);

	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_bitdw() {
	scroll_bitdw_dl_DL_bitdw_1_0xe09a920_Obj_mesh_layer_5_vtx_1();
}
