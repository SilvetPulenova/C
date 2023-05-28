//Променете програмата от задача 2 да използва следната функция за побитово
//принтиране (копирайте си я над main функцията):



#include<stdio.h>



void print_bin(unsigned n)
{
	unsigned i;
	for (i = 1 << 7; i > 0; i = i >> 1)
		(n & i) ? printf("1") : printf("0");
	printf("\n");
}

int main()
{

	unsigned char var1 = 'a';
	print_bin(var1);
	var1 = 'ab';
	print_bin(var1);

	signed char var2 = 'a';
	print_bin(var2);
	var2 = 'abc';
	print_bin(var2);



	return 0;
}
