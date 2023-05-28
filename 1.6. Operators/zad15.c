//Логически оператори

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int nA = 0; /* използвайте scanf */
	int nB = 0;
	int nX = 0;
	int nY = 0;

	printf("Enter a value for nA, nB, nX, nY:");
	scanf("%d  %d %d &d", &nA, &nB, &nX, &nY);

	if (nA > nB && nA != 0)
	{
		printf("&& Operator : Both conditions are true\n");
	}	if (nX > nY || nY != 20) {
		printf("|| Operator : Only one condition is true\n");
	}
	if (!(nA > nB && nB != 0)) {
		printf(" ! Operator : Both conditions are true\n");
	}
	else 
	{
		printf("Both conditions are true.\n");
	}

	return 0;
}
/* опитайте различни комбинации*/