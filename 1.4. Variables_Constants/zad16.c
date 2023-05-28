//Да се дефинира константата Пи (3.14159...) и да се напише
//функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
//В main() да се извика горната функция с радиуси 1, 1.5, 13

#include<stdio.h>


const double PI = 3.14159;

double getCircleArea(double r)
{
	return PI * r * r;
}

int main()
{

	printf("The area is:  %f\n", getCircleArea(1));
	printf("The area is:  %f\n", getCircleArea(1.5));
	printf("The area is:  %f\n", getCircleArea(13));
	printf("\n");

	return 0;
}
