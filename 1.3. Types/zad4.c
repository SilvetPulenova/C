
//Дефинирайте променливи със стойности: -127, 255, 63 498, 4 294 967 292, -9 000000 000 000 775 845.
//Изведете всяка променлива на екрана със printf()

#include<stdio.h>




int main()
{
	signed short int var1 = -127;
	unsigned short int var2 = 255;
	unsigned int var3 = 63498;
	unsigned long int var4= 4294967292U;
	signed long long int var5 = -9000000000000775845LL;

	printf("%d\n", var1);
	printf("%d\n", var2);
	printf("%d\n", var3);
	printf("%u\n", var4);
	printf("%lld\n", var5);


	return 0;
}
