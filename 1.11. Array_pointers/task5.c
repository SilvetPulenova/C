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

	int temp = 0;
	int count = 0;;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count==1)
		{
			printf("%d ", arr[i]);
		}
		count = 0;
	}

	return 0;
}