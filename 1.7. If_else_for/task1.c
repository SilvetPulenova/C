#include<stdio.h>



int main()
{

	float height = 12.5;
	float width = 20.6;
	float rectanglePerimeter = 2 * (height + width);
	float rectangleArea = height * width;

	printf("The perimeter of rectangle is %f\n", rectanglePerimeter);
	printf("The area of rectangle is %f\n", rectangleArea);


	return 0;
}