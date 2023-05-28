#include<stdio.h>

const double PI = 3.14;

double getCircleArea(double r)
{
	return PI * r * r;
}


int main(void)
{
	double radius1 = 2.5;
	int radius2 = 6;

	printf("Area of circle with radius %lf is %lf\n", radius1, getCircleArea(radius1));
	printf("Area of circle with radius %d is %lf\n", radius2, getCircleArea(radius2));

	return 0;
}