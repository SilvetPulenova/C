#include<stdio.h>
#include"mymath.h"


int main(void)
{
	printf("%d\n", fceil(0.1f));
	printf("%d\n", ffloor(0.9f));
	printf("%d\n", fround(0.4f));
	printf("%d\n", fround(0.6f));
	printf("%f\n", fpowIter(0.4f,2));
	printf("%f\n", fpowRec(0.4f, 2));



	return 0;
}