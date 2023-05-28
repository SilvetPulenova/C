#include<stdio.h>


int main()
{
	//8.0
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}

	printf("\n");
	//8.1
	for (int i = 1; i <= 10; i++)
	{
		if (i == 5 || i == 7)
		{
			continue;
		}
		printf("%d\n", i);
	}

	printf("\n");
	//8.2
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		if (i == 9)
		{
			break;
		}
	}


	return 0;
}