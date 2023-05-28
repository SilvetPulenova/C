#include<stdio.h>
#include <limits.h>
#include <stdbool.h>
#include"bits.h"

//#if (CHAR_BIT != 8)
//#error Error CHAR_BIT is not 8!
//#else 
//typedef unsigned char u8;
//typedef u8 u8bitpos; // used for specifying bit positions
//typedef _Bool u8bit; // value of a bit
//#endif 

void hw_21_02(void)
{
	u8 num = 00000010;
	printf("%d",u8_get_bit(num, 3));
}
void hw_21_03(void)
{
	
	u8 num = 00000010;
	//printf("%d\n", u8_get_bit(num, 3));
	//printf("%d\n",u8_set_bit_on(num, 3));
	num=u8_set_bit_on(num, 3);
	printf("%d\n",num);
}
void hw_21_04(void)
{

	u8 num = 1;
	//printf("%d\n", u8_get_bit(num, 3));
	//printf("%d\n",u8_set_bit_on(num, 3));
	//num = u8_set_bit_on(num, 3);
	printf("%d\n", num);
	printf("%d",u8_toggle_bits(num));
}