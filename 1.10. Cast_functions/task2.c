#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

const double PI = 3.14;

double getCircleArea(double r)
{
	return PI * r * r;
}
void circleAreaQna(void)
{
	double radius = 0;
	printf("Enter a radius\n");
	scanf(" %lf", &radius);

	printf("Area of circle with radius %lf is %lf\n", radius, getCircleArea(radius));

}

int main(void)
{

	circleAreaQna();

	return 0;
}