#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{

	int sum = 0;
	int count = 10;
	int index = 0;
	
	while (index < count)
	{
		sum += index;
		index++;
	}

	printf("The sum of first 10 natural numbers is: %d\n", sum);

	return 0;
}