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

	int num = 0;
	printf("Enter a number: ");
	scanf(" %d", &num);

	int countNum = 0;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == num)
		{
			countNum++;
		}
		printf("%d ", arr[i]);
	}
	printf("\n %d", countNum);



	return 0;
}