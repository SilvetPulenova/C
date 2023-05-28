#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main()
{

	const int constNumber = 7;
	int chooseNum = 0;
	int try = 0;

	do
	{
		printf("Enter a random number(0-20): ");
		scanf("%d", &chooseNum);
		if (chooseNum < 0 || chooseNum>20)
		{
			printf("Your number is incorect\n");
			continue;
		}

		if (chooseNum == constNumber)
		{
			printf("You found the number\n");
			break;
		}
		else if(chooseNum > constNumber)
		{
			printf("Your number is bigger\n");
		}
		else
		{
			printf("Your number is smaller\n");
		}
		
		try++;

	} while (try < 5);

	return 0;
}