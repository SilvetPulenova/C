#include<stdio.h>

double getRightAngledTriangleArea(double, double);
double getRectangleArea(double, double);

int main(void)
{
	double a = 3.0;
	double b = 4.0;

	printf("Area of right-angled triangle with cathetus %lf, %lf is %lf\n", a, b, getRightAngledTriangleArea(a, b));
	printf("Area of rectangle with cathetus %lf, %lf is %lf\n", a, b, getRectangleArea(a, b));

	return 0;
}

double getRightAngledTriangleArea(double a, double b)
{
	return (a * b) / 2;
}

double getRectangleArea(double a, double b)
{
	return getRightAngledTriangleArea(a, b) * 2;
}