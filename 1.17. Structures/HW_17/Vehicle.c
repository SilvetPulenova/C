#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"Vehicle.h"

void mainManu(void)
{
	char userChoise;
	printf("Press 1 to choose vehicle\n");
	printf("Press 2 to choose vehicle by brand\n");
	printf("Press q to quit\n");
	scanf(" %c", &userChoise);

	while (userChoise != 'q')
	{
		if (userChoise == '1')
		{
			chooseVehicleMenu();
		}
		else if (userChoise == '2')
		{
			chooseBrandMenu();
		}
	}
}
void chooseVehicleMenu(void)
{

}
void chooseBrandMenu(void)
{

}
void vehicleDetailsMenu(void)
{

}


