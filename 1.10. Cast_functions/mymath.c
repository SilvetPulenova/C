#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"mymath.h"


//task 4
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
double getRightAngledTriangleArea(double a, double b)
{
	return (a * b) / 2;
}
double getRectangleArea(double a, double b)
{
	return getRightAngledTriangleArea(a, b) * 2;
}

//task 5
int fceil(float f)
{
	return f + 0.9;
}
int ffloor(float f)
{
	return f - 0.9;
}
int fround(float f)
{
	if (f < 0.5)
	{
		return f - 0.5;
	}
	else
	{
		return f + 0.5;
	}
}

float fpowIter(float f, int i)
{
	while (i - 1 > 0)
	{
		f*=f;
		i--;
	}
	return f;
}
float fpowRec(float f, int i)
{
	if (i - 1 == 0)
	{
		return f;
	}
	else
	{
		return f * fpowRec(f, i - 1);
	}
}
