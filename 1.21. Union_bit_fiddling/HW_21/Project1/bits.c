#include<stdio.h>
#include"bits.h"

u8bit u8_get_bit(u8 num, u8bitpos pos)
{
	u8 mask_idx_pos = num << pos; 
	u8 flags_a = 0b10101010; 
	u8 flags_b = 0b01010101; 
	u8 flagsMasked_a = flags_a & mask_idx_pos; 
	
	return flagsMasked_a == mask_idx_pos ? 1 : 0;
}
u8 u8_set_bit_on(u8 num, u8bitpos pos)
{
	u8 mask_idx_pos = 00000001 << pos;

	u8 flags = 111111111;
	return flags |= mask_idx_pos;
}
u8 u8_set_bit_off(u8 num, u8bitpos pos)
{
	u8 mask_idx_1 = 00000010;
	u8 mask_idx_1_neg = ~mask_idx_1;
	u8 flags = 11111111;
	return flags &= mask_idx_1_neg;
}
u8 u8_set_bit(u8 num, u8bitpos pos, u8bit val)
{

}
u8 u8_toggle_bit(u8 num, u8bitpos pos)
{

}
u8 u8_toggle_bits(u8 num)
{
	return ~num;
}
