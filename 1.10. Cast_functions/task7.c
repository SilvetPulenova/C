#include<stdio.h>

//from task6, changed type to long long insigned
long long unsigned int factorialRec(long long unsigned int num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		return num * factorialRec(num - 1);
	}
}

int main(void)
{
	//I demonstrate an approximate solution, the resulting value is not correct,
	//because the factorial of 49 is too large number and overflows

	long long unsigned int chanceToWin = 0ULL;
	int setElemCount = 49;
	int selectedElemCount = 6;

	chanceToWin = (factorialRec(setElemCount) / ((factorialRec(selectedElemCount) * (factorialRec(setElemCount - selectedElemCount)))));

	printf("Your chance to win is %llu", chanceToWin);

	return 0;
}