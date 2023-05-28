#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{

	int countNightsStandard = 0;
	int countNightsDeluxe = 0;
	int countRoomsStandard = 0;
	int countRoomsDeluxe = 0;

	int deluxeRoomPrice = 180;
	int standardRoomPrice = 120;

	double tax = 0.06;
	double price = 0.0;

	printf("How many deluxe rooms will you want: ");
	scanf("%d", &countRoomsDeluxe);

	printf("\nPlease enter number of nights: ");
	scanf("%d", &countNightsDeluxe);

	printf("\nHow many standard rooms will you want: ");
	scanf("%d", &countRoomsStandard);

	printf("\nPlease enter number of nights: ");
	scanf("%d", &countNightsStandard);

	price = ((countRoomsDeluxe * countNightsDeluxe * deluxeRoomPrice) + (countRoomsStandard * countNightsStandard * standardRoomPrice)) + (((countRoomsDeluxe * countNightsDeluxe * deluxeRoomPrice) + (countRoomsStandard * countNightsStandard * standardRoomPrice)) * tax);
	
	printf("\nThe total price is: %f\n", price);

	return 0;
}