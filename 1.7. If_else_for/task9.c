#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{

	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += i;
	}
	printf("The sum of first 10 natural numbers is: %d\n", sum);

	//9.1
	int sum2 = 0;
	int count = 0;

	printf("enter a count of natural numbers: ");
	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		sum2 += i;
	}
	printf("The sum of first %d natural numbers is: %d\n", count, sum2);

	return 0;
}