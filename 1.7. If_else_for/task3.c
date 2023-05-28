#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main()
{

	int height = 0;

	printf("Haw tall are you in centimeters: ");
	scanf("%d", &height);

	if (height <= 145)
	{
		printf("You are short!\n");
	}
	else if (height <= 180)
	{
		printf("You are of medium height!\n");
	}
	else if (height <= 205)
	{
		printf("You are tall!\n");
	}
	else
	{
		printf("You are extremly tall!\n");
	}


	return 0;
}