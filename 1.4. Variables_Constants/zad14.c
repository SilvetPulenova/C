//Напишете глобална променлива, която увеличаваме с 1 във
//функция void test(). Извикайте функцията три пъти test() от main()
//принтирайте стойността на глобалната променлива.

#include<stdio.h>

int global = 1;

void test()
{
	global++;
}

int main()
{

	test();
	test();
	test();
	printf("%d", global);

	printf("\n");

	return 0;
}
