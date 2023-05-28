#include<stdio.h>
#include"hw_18.h"
#include"datetime.h"


void hw_18_01(void)
{
	Animal animals[5] =
	{
		{.name = "elephant", .meal = Herbivore},
		{.name = "giraffe", .meal = Herbivore},
		{.name = "lion", .meal = Carnivore},
		{.name = "wolf", .meal = Carnivore},
		{.name = "pig", .meal = Omnivore},
	};
	printAnimal(animals, 5);
}
void hw_18_02(void)
{
	arr8_i arr = { 1000,2,3,4,5,6,7,8};
	printArr8_i(arr);

	arr2d8_i arr2 = { { 10,2,3,4,5,6,7,8} ,
	{ 10,2,3,4,5,6,7,8} ,
	{ 10,2,3,4,5,6,7,8} ,
	{ 1,2,3,4,5,6,7,8} ,
	{ 1,2,3,4,5,6,7,8} ,
	{ 1,2,3,4,5,6,7,8} ,
	{ 1,2,3,4,5,6,7,8} ,
	{ 1,2,3,4,5,6,7,8} };

	printf("Print arr2d8_i\n");
	printArr2d8_i(arr2);


	arr8_i_ptr var1 = &(arr8_i){1,2,3,4,5,6,7,8};
	arr2d8_i_ptr var2=&(arr2d8_i) { { 1, 2, 3, 4, 5, 6, 7, 8},
		{ 1,2,3,4,5,6,7,8 },
		{ 1,2,3,4,5,6,7,8 },
		{ 1,2,3,4,5,6,7,8 },
		{ 1,2,3,4,5,6,7,8 },
		{ 1,2,3,4,5,6,7,8 },
		{ 1,2,3,4,5,6,7,8 },
		{ 1,2,3,4,5,6,7,8 }
	};
	
}
void hw_18_05(void)
{
	datetime dt = { .year = 1999,.month = October,.day = 21 };
	datetime dt2 = { .year = 1999,.month = October,.day = 29 };
	sumDate(&dt, 5);
	print_datetime(dt);
	printf("%d",difDate(&dt, &dt2));

}

void printAnimal( const ptrAnimal animals, int countAnimals)
{
	for (int i = 0; i < countAnimals; i++)
	{
		printf("[%d] animal is: ", i);
		printf("%s ", animals[i].name);
		printf("%d\n", animals[i].meal);
	}
}
void printArr8_i(arr8_i arr)
{
	for (int i=0; i<eight; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void printArr2d8_i(arr2d8_i arr)
{
	for (int i = 0; i < eight; i++)
	{
		printArr8_i(arr[i]);
	}
	printf("\n");
}