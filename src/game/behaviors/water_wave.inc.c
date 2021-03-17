// water_wave.c.inc
// TODO: Rename to avoid confusion with water_splashes_and_waves

void bhv_object_water_wave_init(void) {
    o->oPosY = find_water_level(o->oPosX, o->oPosZ,o->oPosY-10);
}

void bhv_object_water_wave_loop(void) {
    s32 globalTimer = gGlobalTimer;
    if ((globalTimer % 16) == 0)
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
}
