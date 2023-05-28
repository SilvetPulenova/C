//Към задача 16 да се добави втора функция, която изчислява
//лицето на елипса по зададени два параметъра ( Пи * A * B)

#include<stdio.h>


const double PI = 3.14159;

double getCircleArea(double r)
{
	return PI * r * r;
}

double getElipceArea(double a, double b)
{
	return PI * a * b;
}

int main()
{

	printf("The area of circle is:  %f\n", getCircleArea(1));
	printf("The area of circle is:  %f\n", getCircleArea(1.5));
	printf("The area of circle is:  %f\n", getCircleArea(13));
	printf("\n");

	printf("The area of elipce is:  %f\n", getElipceArea(1, 3));
	printf("The area of elipce is:  %f\n", getElipceArea(1.5, 2.4));
	printf("The area of elipce is:  %f\n", getElipceArea(13, 20));

	return 0;
}
