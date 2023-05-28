

//Използвайте израз който да направи така че unsigned char да прехвърли
//максималната си стойност. Изведете резултата преди и след това.
//Направете същото със signed char.

#include<stdio.h>



int main()
{

	unsigned char var1 = 'a';
	printf("%c\n", var1);
	var1 = 'ab';
	printf("%c\n", var1);

	signed char var2 = 'a';
	printf("%c\n", var2);
	var2 = 'ab';
	printf("%c\n", var2);



	return 0;
}
