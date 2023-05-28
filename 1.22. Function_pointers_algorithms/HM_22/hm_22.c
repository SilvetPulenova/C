#include<stdio.h>
#include<stdlib.h>
#include"hw_22.h"



int cmp(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
int reverseInt(const void* a, const void* b) {
	return -cmp(a, b);
}
int cmpChar(const void* a, const void* b)
{
	return (*(char*)a - *(char*)b);
}
int cmpStr(const void* a, const void* b)
{
	return (*(char**)a - *(char**)b);
}
int reverseChar(const void* a, const void* b) {
	return -cmpChar(a, b);
}
int cmpULong(const void* a, const void* b)
{
	unsigned long x = *((unsigned long*)a);
	unsigned long y = *((unsigned long*)b);
	if (x % 2 == 0 && y % 2 == 1) return -1;
	if (x % 2 == 1 && y % 2 == 0) return 1;
	if (x > y) return -1;
	if (x < y) return 1;
	return 0;
}
void hw_22_02()
{
	int arrInt[7] = { 3,1,0,8,6,8,2 };
	qsort(arrInt, 7, sizeof(int), cmp);
	printf("Print a sorted array with intigers in ascending order:\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arrInt[i]);
	}

	char arrChar[7] = { 'a','v','z','y','s','l','w' };
	qsort(arrChar, 7, sizeof(char), reverseChar);
	printf("\nPrint a sorted array with characters in descending order:\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%c ", arrChar[i]);
	}

	char str1[] = "hi";
	char str2[] = "dfs";

	const char* str[2] = { &str1, &str2};
	qsort(str, 2, sizeof(const char*), cmpStr);
	printf("\nPrint a sorted array with characters in lexicographic order:\n");
	for (int i = 0; i < 2; i++)
	{
		printf("%s ", str[i]);
	}

	unsigned long arrULong[10] = { 4UL,2UL,6UL,1UL,7UL,5UL,3UL,9UL,8UL,0UL };
	printf("\n");
	qsort(arrULong, 2, sizeof(unsigned long), cmpULong);
	printf("\nPrint a sorted array with unsigned long elements:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%ul ", arrULong[i]);
	}

}
void hw_22_03()
{
	char str1[] = "hi";
	char str2[] = "dfs";

	const char* str[2] = { &str1, &str2 };

	char* elem = (char*)bsearch(str1, *str, 2, sizeof(const char*), cmpStr);
	printf("\n%s is found\n", elem);
}

