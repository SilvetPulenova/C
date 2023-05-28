#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main()
{
	int month = 0;

	printf("Please enter month as number(1-12): ");
	scanf("%d", &month);


	switch (month)
	{
	case 2: printf("This month has 28 days\n"); break;
	case 4: 
	case 6:
	case 9:
	case 11: printf("This month has 30 days\n"); break;
	default:  printf("This month has 31 days\n");
	}



	return 0;
}