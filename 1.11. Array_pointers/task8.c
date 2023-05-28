#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main(void)
{
	printf("Enter a elements of array:");
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf(" %d", &arr[i]);
	}

	int arrEven[10] = { 0 };
	int arrOdd[10] = { 0 };
	int countEven = 0;
	int countOdd = 0;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arrEven[countEven] = arr[i];
			countEven++;
		}
		else
		{
			arrOdd[countOdd] = arr[i];
			countOdd++;
		}
		printf("%d ", arr[i]);
	}

	printf("\n");
	for (int i = 0; i < countEven; i++)
	{
		printf("%d ", arrEven[i]);
	}
	printf("\n");
	for (int i = 0; i < countOdd; i++)
	{
		printf("%d ", arrOdd[i]);
	}


	return 0;
}