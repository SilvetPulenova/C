#include<stdio.h>

int factorialIter(int);
int factorialRec(int);


int main(void)
{

	printf("The factorial is %d\n", factorialIter(4));
	printf("The factorial is %d\n", factorialRec(4));

	return 0;
}

int factorialIter(int num)
{
	int fact = 1;
	for (int i = num; i > 0; i--)
	{
		fact *= i;
	}
	return fact;
}
int factorialRec(int num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		return num * factorialRec(num-1);
	}
}