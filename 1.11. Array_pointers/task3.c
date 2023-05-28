#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int arr[20] = { 0 };

	for (int i = 0; i < 20; i++)
	{
		arr[i] = rand() % 60;
	}

	
	int min = arr[0];

	for (int i = 0; i < 20; i++)
	{
		if (arr[i] < min)
		{
			min=arr[i];
		}
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	printf("\n %d", min);




	return 0;
}