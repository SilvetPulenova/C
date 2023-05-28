//Довършете задачата за кемперите от миналия път като добавите
//променлива, в която да се събират парите, които клиента дължи на компанията.
//Принтирайте резултата. Питайте клиента дали иска още налични продукти.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{

	int caravanPrice = 90;
	int cemperPrice = 100;
	int choiceVehicle = -1;
	int chooseCount = -1;
	int vehiclePrice =-1;
	int price = 0;
	int totalPrice = 0;
	char anotherVehicle = 'a';

	printf("1. Caravan - 90 lv\n");
	printf("2. Cemper - 100 lv\n");
	

	printf("Caravan or Cemper?\n");

	do
	{
		printf("For caravan enter 1, for cemper enter 2 and select count:\n");
		scanf("%d %d", &choiceVehicle, &chooseCount);

		switch (choiceVehicle)
		{
		case 1:
			viaclePrice = 90;
			break;
		case 2:
			viaclePrice=100;
			break;
		default:
			viaclePrice = 0;
		}

		price = vehiclePrice * chooseCount;
		totalPrice += price;
		printf("Do you need another vehicle - Y/N\n");
		anotherVehicle = getchar();
		getchar();

	} while (anotherVehicle == 'n' || anotherVehicle == 'N');

	printf("Your bill is %d", totalPrice);

	return 0;
}
