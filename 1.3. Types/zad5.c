//Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357 674
//000, 3 657 895 000.
//Изведете всяка променлива на екрана със printf()

#include<stdio.h>



int main()
{

	short int var1 = 24212;
	signed int var2 = -1357674;
	unsigned long int var3 = 1357674;
	signed long long int var4 = -1357674000;
	unsigned long long int var5 = 3657895000L;

	printf("%d\n", var1);
	printf("%d\n", var2);
	printf("%d\n", var3);
	printf("%d\n", var4);
	printf("%u\n", var5);


	return 0;
}
