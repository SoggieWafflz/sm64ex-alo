s32 TE_inc_state(s32 *state){
	*state++;
	return *state;
}
s32 TE_dec_state(s32 *state){
	*state--;
	return *state;
}
s32 TE_mod_state(s32 *state,s32 mod){
	return (*state++)%mod;
}
s32 TE_get_state(s32 *state){
	return *state;
}
s32 TE_get_flag(s32 *flag,u32 bit){
	return ((*flag&bit)>0);
}
s32 TE_set_flag(s32 *flag,u32 bit){
	*flag |= bit;
	return 1;
}