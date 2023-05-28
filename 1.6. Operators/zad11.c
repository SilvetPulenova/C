#include<stdio.h>


int main()
{

	int iX = 13;
	int iY = 44;
	int iResult = 0;
	iResult = iX - iY;
	printf("%d - %d = %d \n", iX, iY, iResult);
	iResult = iY / iX;
	printf("%d / %d = %d \n", iY, iX, iResult);
	iResult = iY % iX;
	printf("%d / %d Remainder: %d\n", iY, iX, iResult);

    //homework: examples for '*' è '+', float - използвайте вместо int

	float fX = 4.56;
	float fY = -0.6548;
	float fResult = 0.0;
	fResult = fX * fY;
	printf("%f * %f = %f \n", fX, fY, fResult);
	fResult = fX + fY;
	printf("%f + %f = %f \n", fX, fY, fResult);

	return 0;
}

