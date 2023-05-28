#include<stdio.h>



int main()
{

	const int constNumber = 7;
	int chooseNum = 0;

	printf("Enter a random number: ");
	scanf("%d", &chooseNum);

	//example only with if
	/*if (chooseNum >= constNumber)
	{
		printf("YOU WIN!!!\n");
	}
	if(chooseNum < constNumber)
	{
		printf("TRY AGAIN! :(\n");
	}*/

	if (chooseNum >= constNumber)
	{
		printf("YOU WIN!!!\n");
	}
	else
	{
		printf("TRY AGAIN! :(\n");
	}

	return 0;
}