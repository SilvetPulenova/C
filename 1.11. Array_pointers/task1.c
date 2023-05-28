#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main(void)
{
	
	printf("Enter a elements of array:");
	int arr1[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}

	int arr2[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = arr1[i] * 2;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}