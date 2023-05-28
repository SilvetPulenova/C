#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main()
{

	double operand1 = 0;
	double operand2 = 0.0;
	char operator=0;
	double result = 0.0;

	printf("Please enter the first operand: ");
	scanf("%f", &operand1);

	printf("Please enter the operator( + || - || * || / ): ");
	scanf_s("%s", &operator);

	printf("Please enter the second operand: ");
	scanf("%f", &operand2);

	switch (operator)
	{
	case '+': result = (operand1 + operand2); break;
	case '-': result = (operand1 - operand2); break;
	case '*': result = (operand1 * operand2); break;
	case '/': result = (operand1 / operand2); break;

	}

	printf("Result is: %f", result);

	return 0;
}