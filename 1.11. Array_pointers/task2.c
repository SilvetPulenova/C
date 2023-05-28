#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int arr[20] = { 0 };

	for (int i = 0; i < 20; i++)
	{
		arr[i] = rand() % 50;
	}

	int num = 0;
	printf("Enter a number: ");
	scanf(" %d", &num);
	int isFind = 0;

	for (int i = 0; i < 20; i++)
	{
		if (arr[i] == num)
		{
			isFind = 1;
		}
		printf("%d ", arr[i]);
	}
	printf("\n %d", isFind);

	
	

	return 0;
}