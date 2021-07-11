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
	scroll_bob_dl_DL_ccm_1_0xe044090_Obj_001_mesh_layer_1_vtx_5();
}
