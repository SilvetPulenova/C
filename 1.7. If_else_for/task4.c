#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main()
{
	//4.0
	int gender = 0;
	int age = 0;

	printf("Please enter 1 for female, 2 for male: ");
	scanf("%d", &gender);

	printf("\nPlease enter your age: ");
	scanf("%d", &age);

	if (gender == 1 && (age > 25 && age < 35))
	{
		printf("\nYou are suitable\n");
	}
	else if(gender == 2 && (age > 30 && age < 40))
	{
		printf("\You are suitable\n");
	}
	else
	{
		printf("Sorry,you are not suitable\n");
	}

	//4.1
	(gender == 1 && (age >= 25 && age <= 35))? printf("\nYou are suitable\n"): printf("Sorry,you are not suitable\n");
	//(gender == 2 && (age >= 30 && age <= 40))? printf("\nYou are suitable\n") : printf("Sorry,you are not suitable\n");

	//4.2
	if (gender == 1 && (age == 25 || age == 35))
	{
		printf("\nYou are suitable\n");
	}
	else if (gender == 2 && (age == 30 || age == 40))
	{
		printf("\You are suitable\n");
	}
	else
	{
		printf("Sorry,you are not suitable\n");
	}

	//4.3
	if (gender == 1 && ((age >= 25 && age <= 30) || (age >= 35 && age <= 40)))
	{
		printf("\nYou are suitable\n");
	}
	else if (gender == 2 && (age >= 30 && age <= 35) || (age >= 40 && age <= 45))
	{
		printf("\You are suitable\n");
	}
	else
	{
		printf("Sorry,you are not suitable\n");
	}

	
	return 0;
}