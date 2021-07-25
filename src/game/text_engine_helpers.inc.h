u32 gDorrieState=0;
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
s32 TE_check_password(char *password,u32 usr){
	char *input = UserInputs[0][usr];
	u32 i=0;
	u8 c1;
	u8 c2;
	while(1){
		c1 = input[i];
		c2 = password[i];
		if(c2==0xFF){
			break;
		}
		if(c2!=c1){
			return 0;
		}
		if(c1==c2){
			i++;
			continue;
		}
	}
	return 1;
}
#include "text_strings.h"
char c4_password[] = {Pass1};
char c5_password[] = {Pass2};
char c6_password[] = {Pass3};
char c7_password[] = {Pass4};