
#include<stdio.h>
#include<Windows.h>


void light(int num)
{
	while (num)
	{

		if (num - (num & (num - 1)))
		{
			printf("*");
		}

		num &= (num - 1);

		Sleep(150);

	}
	printf("\n");
}

int main()
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	int num4 = 4;
	int num5 = 5;
	
	light(num1);
	light(num2);
	light(num3);
	light(num4);
	light(num5);


	


	return 0;
}
