#include<stdio.h>
#include<string.h>
#include<math.h>

int getBase(const char* str)
{
	for (int i = 0; i < 2; i++)
	{
		if (str[i] == '0' && (str[i + 1] == 'b' || str[i + 1] == 'B'))
		{
			return 2;
		}
		else if (str[i] == '0' && (str[i + 1] == 'x' || str[i + 1] == 'X'))
		{
			return 16;
		}
		else if (str[i] == '0')
		{
			return 8;
		}
	}
	return -1;
}

unsigned int ParseUnsignedLiteral(const char* str, int base)
{
	int index = 0;
	unsigned int number = 0;
	char ch;

	int len = (int)strlen(str);
	

	while (str[index] != '\0')
	{
		ch = str[index];
		unsigned int digitValue = 0;
		if (ch > 'A' && ch < 'Z' ||(ch == 'A' || ch == 'Z'))
		{
			digitValue = ch - '0' - 7;
		}
		else if (ch > 'a' && ch < 'z' || (ch == 'a' || ch == 'z'))
		{
			digitValue = ch - '0' - 39;
		}
		else
		{
			digitValue = ch - '0';
		}
		number += digitValue * (unsigned int)pow(base, len - 1);

		len--;
		index++;

	}
	return number;
}

int main()
{

	char str1[] = "00A";
	unsigned int number1 = 0;
	number1 = ParseUnsignedLiteral(str1, 16);
	printf("U is (unsigned) %d\n", number1);
	


	return 0;
}