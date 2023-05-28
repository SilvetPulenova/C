#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main(void)
{
	printf("Enter a elements of array:");
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 9; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}