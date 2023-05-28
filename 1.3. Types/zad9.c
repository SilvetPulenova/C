//Създайте С програма, която калкулира стойността на покупки в магазин за хранителни
//стоки. Клиентът може да закупи различна комбинация от продукти. В магазина има
//следните налични продукти и цени:
//Домати- 4.5 лв.за килограм,
//Брашно 1.80 лв. за килограм,
//Кисело мляко - 0.50 лв. за брой,
//Сладолед на фунийки 0.60 лв. броя
//Бонбони 1.50 лв. за килограм,
//Близалки 0.15 лв. за брой

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main()
{
	int chooseProduct = -1;
	double productPrice = -1;
	double chooseQuantity = -1;
	double price = -1;
	double finalPrice = 0;
	char more = 'o';

	printf("1. Tomato - 4.50 lv\n");
	printf("2.  Flavour - 1.50 lv\n");
	printf("3.  Yogourt - 0.50 lv\n");
	printf("4.  Icecream - 0.60 lv\n");
	printf("5.  Candies - 1.50 lv\n");
	printf("6.  Lolypop - 0.15 lv\n");

	do
	{
		printf("Choose product 1-6 and select quantity\n");
		scanf("%d %d", &chooseProduct, &chooseQuantity);
		
		switch (chooseProduct)
		{
		case 1: productPrice = 4.50; break; 
		case 2: productPrice = 1.50; break; 
		case 3: productPrice = 0.50; break;
		case 4: productPrice = 0.60; break;
		case 5: productPrice = 1.50; break;
		case 6: productPrice = 0.15; break;
		default: productPrice = 0.00;

		}

		price = productPrice * chooseQuantity;

		finalPrice += price;
		printf("Do you need someting else? - Y/N\n");
		more = getchar();

	} while (more == 'n' || more == 'N');

	printf("Your bill is %f", finalPrice);




	return 0;
}
