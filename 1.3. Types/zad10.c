//Напишете програма PrintPatterns, която отпечата следните текстови графики на
//екрана. Графиките една под друга:

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int lenght = 0;

	printf("Enter a lenght:\n");
	scanf("%d", &lenght);

	int temp = lenght;

	
	for (int i = 0; i < lenght; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = lenght - 1; j > i; j--)
			{
				printf(" ");
			}

			for (int k = 0; k <= i; k++)
			{
				printf("# ");
			}
			printf("\n");
		}
	}

	printf("\n");

	for (int i = 0; i < lenght; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}

			for (int k = lenght-1; k >= i; k--)
			{
				printf("# ");
			}
			printf("\n");
		}
	}

	printf("\n");
	///////////////////////////////////////////////////////////////////////
	for (int i = 0; i < lenght; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = lenght -1; j > i; j--)
			{
				printf(" ");
			}

			for (int k = 0; k <= i; k++)
			{
				printf("# ");
			}
			printf("\n");
		}
	}

	for (int i = 0; i < lenght; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}

			for (int k = lenght; k >= i; k--)
			{
				printf("# ");
			}
			printf("\n");
		}
	}



	return 0;
}
