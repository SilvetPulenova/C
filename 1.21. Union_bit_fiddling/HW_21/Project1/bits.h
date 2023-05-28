#ifndef BITS_H
#define BITS_H

//#if (CHAR_BIT != 8)
//#error Error CHAR_BIT is not 8!
//#else 
typedef unsigned char u8;
typedef u8 u8bitpos; // used for specifying bit positions
typedef _Bool u8bit; // value of a bit
//#endif

u8bit u8_get_bit(u8 num, u8bitpos pos);
u8 u8_set_bit_on(u8 num, u8bitpos pos);
u8 u8_set_bit_off(u8 num, u8bitpos pos);
u8 u8_set_bit(u8 num, u8bitpos pos, u8bit val);
u8 u8_toggle_bit(u8 num, u8bitpos pos);
u8 u8_toggle_bits(u8 num);




#endif