
#include<stdio.h>
#include"hw12.h"


int main(void)
{
	int arr[7] = { 2,4,8,2,3,4,8 };
	int arr2[7] = { 0 };
	int arr3[7] = { 0 };
	char str[7] = { "string" };
	char str2[7] = { "sdfgh" };
	int var1 = 3;
	int var2 = 9;
	int* ptr1 = &var1;
	int* ptr2 = &var2;


	int arr4[3] = { 1,2,3 };
	int arr5[3] = { -8,-9,-5 };

	int* begin = arr;
	int* end = arr + 7;
	

	printf("task1 %d\n",getProd(1, 10));
	printf("task1 Rec %d\n", getProdRec(1, 10));

	printf("task2 %d\n", getProdArr(arr,end));

	printf("task3 %lf\n", getAvrgArr(arr, 7));

	printf("task4 ");
	printArr(arr,arr+7);

	printf("\ntask5 ");
	addInArrayRand(arr2,arr2+7, 8, 30);
	printArr(arr2,arr2+7);

	printf("\ntask6 ");
	addInArray(arr3, arr3+7);
	printArr(arr3, arr3 + 7);

	printf("\ntask7 ");
	negToNull(arr3,arr3+7);
	printArr(arr3,arr3+7);

	printf("\ntask8 ");
	limitsArray(arr3, arr3+7, 5,15);
	printArr(arr3,arr3+7);

	printf("\ntask9 ");
    copyArray(arr2, arr3, 7);
	printArr(arr3,arr3+7);

	printf("\ntask10 ");
	swapElem(arr4, arr5,3);
	printArr(arr4,arr4+3);
	printf("\n");
	printArr(arr5,arr5+3);

	printf("\ntask11 ");
	printStr(str);

	printf("\ntask12 ");
	copyStr(str, str2);
	printStr(str2);

	printf("\ntask13 ");
	printf("%d %d\n", var1, var2);
	swapVar(&var1, &var2);
	printf("%d %d", var1, var2);

	printf("\ntask14 ");
	printf("%d %d\n", *ptr1, *ptr2);
	swapPtr(ptr1, ptr2);
	printf("%d %d", *ptr1, *ptr2);

	return 0;
}