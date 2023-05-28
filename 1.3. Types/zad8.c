//Представете си, че имате фирма за отдаване на каравани и кемпери под наем, за която трябва да разработите софтуер.
//Имате общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. на ден.
//Декларирайте променливи за броя на караваните, цената на караваните, броя на кемперите и цената им.
//Направете меню, което пита клиента каравана или кемпер ще иска.
//Направете променлива, в която да се събират парите, които клиента дължи на компанията.
//Принтирайте резултата.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{

	int caravanCount = 3;
	int kemperCount = 3;
	int caravanPrice = 90;
	int cemperPrice = 100;
	int choice = 0;


	printf("Caravan or Cemper?\n");
	printf("For caravan enter 1, for cemper enter 2:\n");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("You chose a caravan with a price 90BGN per day!\n");
		break;
	case 2:
		printf("You chose a cemper with a price 100BGN per day.\n");
	default:
		printf("You can only choose between 1 or 2\n");
	}


	return 0;
}
