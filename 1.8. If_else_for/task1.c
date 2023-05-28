#include<stdio.h>
#include<string.h>
#include<math.h>



unsigned int ParseUnsignedLiteral(const char* str, int base)
{
	int index = 0;
	unsigned int number = 0;
	char ch;

	int len = (int)strlen(str);

	while (str[index] != '\0')
	{
		
		ch = str[index];
		unsigned int digitValue = ch - '0';
		number += digitValue * (unsigned int)pow(base, len - 1);

		len--;
		index++;

	}
	return number;
}

int main()
{

	char str1[] = "0010";
	unsigned int number1 = 0;
	number1=ParseUnsignedLiteral(str1,2);
	printf("Parse bin(2): %d\n", number1);

	char str2[] = "12345670";
	unsigned int number2 = 0;
	number2 = ParseUnsignedLiteral(str2, 8);
	printf("Parse oct(8): %d\n", number2);

	char str3[] = "876543210";
	unsigned int number3 = 0;
	number3 = ParseUnsignedLiteral(str3, 9);
	printf("Parse ena(9): %d\n", number3);

	char str4[] = "9876543210";
	unsigned int number4 = 0;
	number4 = ParseUnsignedLiteral(str4, 10);
	printf("Parse dec(10): %d\n", number4);


	return 0;
}