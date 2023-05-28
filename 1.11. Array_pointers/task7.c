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

	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] <= min)
		{
			min = arr[i];
		}
		else if (arr[i] > max)
		{
			max = arr[i];
		}
		printf("%d ", arr[i]);
	}
	printf("\n min elem: %d, max elem: %d", min, max);


	return 0;
}