
//Relational operators

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	
	int nX = 0;
	int nY = 0;

	printf("Enter a value for nX and nY:");
	scanf("%d  %d", &nX, &nY);



	if (nX == nY) 
	{
		printf("%d and %d are equal\n", nX, nY);
	}
	else 
	{
		printf("%d and %d are not equal\n", nX, nY);
	}
	if (nX > nY) 
	{
		printf("%d is greater than %d\n", nX, nY);
	}
	else
	{
		printf("%d is smaller than %d\n", nX, nY);
	}
	/* използвайте и останалите оператори за сравнение */

}
