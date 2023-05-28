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

unsigned int ParseUnsignedLiteral(const char* str)
{
	int index = 0;
	unsigned int number = 0;
	char ch;

	int len = (int)strlen(str);
	int base = getBase(str);
	if (base == 2 || base == 16)
	{
		index = 2;
		len -= 2;
	}
	else if (base == 8)
	{
		index = 1;
		len -= 1;
	}

	while (str[index] != '\0')
	{
		if (str[index])

			ch = str[index];
		unsigned int digitValue = ch - '0';
		number += digitValue * (unsigned int)pow(base, len-1);

		len--;
		index++;

	}
	return number;
}

int main()
{

	char str1[] = "0x0001";

	unsigned int number1 = 0;
	number1 = ParseUnsignedLiteral(str1);
	printf("U is (unsigned) %d\n", number1);



	return 0;
}