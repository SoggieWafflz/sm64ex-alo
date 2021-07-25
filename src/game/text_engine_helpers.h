s32 TE_inc_state(s32 *state);
s32 TE_dec_state(s32 *state);
s32 TE_mod_state(s32 *state, s32 mod);
s32 TE_get_state(s32 *state);
s32 TE_get_flag(s32 *flag,u32 bit);
s32 TE_set_flag(s32 *flag,u32 bit);
s32 TE_check_password(char *password,u32 usr);


extern char c4_password[];
extern char c5_password[];
extern char c6_password[];
extern char c7_password[];
extern u32 gStarSpawn;