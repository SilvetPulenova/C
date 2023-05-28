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

	int newArr[10] = { 0 };
	int num = 0;
	printf("Enter a number: ");
	scanf(" %d", &num);

	int j = 0;
	for (int i = num; i < 10; i++)
	{
		newArr[j] = arr[i];
		j++;
	}
	for (int i = 0; i <num; i++)
	{
		newArr[j] = arr[i];
		j++;
	}

	printf("\nThe origilan array: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\nThe result array: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", newArr[i]);
	}
	

	return 0;
}