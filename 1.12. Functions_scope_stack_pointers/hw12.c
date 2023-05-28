#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"hw12.h"

//task 1
int getProd(int min, int max)
{
	int prod = 1;
	for (int i = min; i <= max; i++)
	{
		prod *= i;
	}
	return prod;
}

int getProdRec(int min, int max)
{
	int prod = 1;
	if (min == max)
	{
		return prod;
	}
	return prod * getProd(min + 1, max);
}

//task 2
int getProdArr(const int* begin, const int* end )
{
	int prod = 1;

	for (int *iter = begin; iter !=end; iter++)
	{
		prod *= * iter;
	}
	return prod;
}

//task 3
double getAvrgArr(const int* arr, int len)
{
	double avrg = 0.0;
	for (int i = 0; i < len; i++)
	{
		avrg += arr[i];
	}
	return avrg/len;
}

//task 4
void printArr(const int* begin, const int *end )
{
	for (int *iter = begin; iter!=end; iter++)
	{
		printf("[%d]", *iter);
	}
}

//task 5
void addInArrayRand(int* begin, int* end, int min, int max)
{
	for (int *iter = begin; iter!=end; iter++)
	{
		*iter = min + rand() % (max - min);
	}
}

void addInArray(int* begin, int* end)
{
	printf("Enter a elements of array:");
	for (int* iter = begin; iter != end; iter++)
	{
		scanf(" %d", &(*iter));
	}
}

//task 7
void negToNull(int* begin, int* end)
{
	for (int* iter = begin; iter != end; iter++)
	{
		if (*iter < 0)
		{
			*iter = 0;
		}
	}
}

//task 8
void limitsArray(int* begin, int* end, int min, int max)
{
	for (int* iter = begin; iter != end; iter++)
	{
		if (*iter < min)
		{
			*iter = min;
		}
		else if (*iter > max)
		{
			*iter = max;
		}
	}
}

//task 9
void copyArray(const int* from, int* to, int len)
{
	
	for (int i = 0; i < len; i++)
	{
		to[i] = from[i];
	}
}

//task 10
void swapElem(int* arr1, int* arr2, int len)
{
	int temp = 0;
	for (int i = 0; i < len; i++)
	{
		temp = arr2[i];
		arr2[i] = arr1[i];
		arr1[i] = temp;
	}
}

//task 11
void printStr(const char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
}

//task 12
void copyStr(const char* from, char* to)
{
	for (int i = 0;from[i]!='\0'; i++)
	{
		to[i] = from[i];
	}
}

//task 13
void swapVar(int* var1, int* var2)
{
	int temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}

//task 14
void swapPtr(int** p1, int** p2)
{
	int* temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
