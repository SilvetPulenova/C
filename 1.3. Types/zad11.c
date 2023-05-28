//Напишете програма, която изчислява броя на секундите в една година. 

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main()
{

	int year = 0;

	printf("Enter a random year:\n");
	scanf("%d", &year);

	//Проверява дали годината е високосна
	if ((year % 4 == 0) && (year % 100 != 0))
	{
		printf("The seconds in %d is %d", year, 366 * 24 * 60 * 60);
	}
	else
	{
		printf("The seconds in %d is %d", year, 365 * 24 * 60 * 60);
	}

	return 0;

}
