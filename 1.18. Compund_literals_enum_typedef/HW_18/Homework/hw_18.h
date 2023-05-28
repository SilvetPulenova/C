#ifndef HW_18_H
#define HW_18_h

typedef enum
{
	Herbivore, 
	Carnivore, 
	Omnivore
}type;

typedef struct
{
	const char* name;
	type meal;
}Animal;

typedef Animal* ptrAnimal;

typedef enum
{
	eight = 8
}size;

typedef int arr8_i[eight];
typedef arr8_i* arr8_i_ptr;
typedef arr8_i arr2d8_i[eight];
typedef arr2d8_i* arr2d8_i_ptr;

void hw_18_01();
void hw_18_02();
void hw_18_05();

void printAnimal(const ptrAnimal animals, int countAnimals);
void printArr8_i(arr8_i arr);
void printArr2d8_i(arr2d8_i arr);







#endif
