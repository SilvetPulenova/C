#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include"hw_15.h"



void hw_15_01(void)
{
	printf("Please enter a some text on multiple lines:\n");
	char c;

	int countSimbols = 0;
	int countAlpha = 0;
	int countPunct = 0;
	do
	{
		c = getchar();
		if (isalpha(c))
		{
			countAlpha++;
		}
		else if (ispunct(c))
		{
			countPunct++;
		}
		countSimbols++;
	} while (c != EOF);

	printf("All simbols: %d\n", countSimbols);
	printf("All letters: %d\n", countAlpha);
	printf("All punctuation marks: %d\n", countPunct);
}
void hw_15_02(void)
{
	printf("Please enter a some text on  multiple lines:\n");
	char c;
	c = getchar();

	int countLines = 0;
	int countSpaces = 0;
	int countTab = 0;
	do
	{
		c = getchar();
		if (c == '\n')
		{
			countLines++;
		}
		else if (c == ' ')
		{
			countSpaces++;
		}
		else if (c == '\t')
		{
			countTab++;
		}
	} while (c != EOF);

	printf("All lines: %d\n", countLines);
	printf("All spaces: %d\n", countSpaces);
	printf("All tabs: %d\n", countTab);
}
void hw_15_03(void)
{
	printf("Please enter a some text on  multiple lines:\n");
	char c;
	char buff[255];
	int i = 0;
	int flag = 1;

	do
	{
		c = getchar();
		if (c == ' ' && flag)
		{
			buff[i++] = c;
			flag = 0;
		}
		else if (c != ' ')
		{
			buff[i++] = c;
			flag = 1;
		}
	} while (c != EOF);
	buff[i] = '\0';

	printf("%s", buff);
}
void hw_15_04(void)
{
	printf("Please enter a some text on  multiple lines:\n");
	char c;
	char buff1[255];
	char buff2[255];
	char buff3[255];
	int index1 = 0;
	int index2 = 0;
	int index3 = 0;

	do
	{
		c = getchar();
		if (c >= 'A' && c <= 'Z')
		{
			buff1[index1++] = c;
		}
		else if (c >= 'a' && c <= 'z')
		{
			buff2[index2++] = c;
		}
		else if (c >= '0' && c <= '9')
		{
			buff3[index3++] = c;
		}
	} while (c != EOF);
	buff1[index1] = '\0';
	buff2[index2] = '\0';
	buff3[index3] = '\0';
	printf("Only capital letters: %s\n", buff1);
	printf("Only lowercase letters: %s\n", buff2);
	printf("Onli digits: %s\n", buff3);
}
void hw_15_05(void)
{
	char c;
	char buff[255];
	enterTextOnStdIN(buff);
	int countSimbols = 0;
	int newLine = 0;

	for (int i = 0; buff[i] != '\0'; i++)
	{
		if ((buff[i - 1] == '\n' || i == 0) && ((buff[i + 1] == '\n' || buff[i + 2] == '\n' || buff[i + 3] == '\n')))
		{
			while (buff[i] != '\n')
			{
				i++;
			}
		}
		else
		{
			printf("%c", buff[i]);
		}
		countSimbols = 0;
	}
}
void hw_15_06(void)
{
	printf("Please enter a some text on  multiple lines:\n");
	char c;

	int simbolInWord = 0;
	int countWord = 0;
	int allSimbols = 0;

	do
	{
		c = getchar();
		if (!ispunct(c) && c != ' ' && c != '\n')
		{
			simbolInWord++;
		}
		else
		{
			allSimbols += simbolInWord;
			simbolInWord = 0;
			countWord++;
		}
	} while (c != EOF);

	printf("The average length of all words is: %lf\n", (double)allSimbols / countWord);
}
void hw_15_07(void)
{
	char buff[255];
	enterTextOnStdIN(buff);

	int simbolInWord = 0;
	int countWord = 0;
	int allSimbols = 0;

	for (int i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == '\n' || buff[i] == ' ' || buff[i] == '\t')
		{
			while (buff[i] == '\n' || buff[i] == ' ' || buff[i] == '\t')
			{
				i++;
			}
		}
		printf("%c", buff[i]);
	}
}
void hw_15_08(void)
{

	char operation;
	float firstOperand = 0.0f;
	float secondOperand = 0.0f;
	do
	{

		printf("Enter the operation of your choice:\n");
		printf("a. add\n");
		printf("s. subtract\n");
		printf("m. multiply\n");
		printf("d. divide\n");
		printf("q. quit\n");

		do
		{
			scanf(" %c", &operation);
			if (operation != 'a' && operation != 's' && operation != 'm' && operation != 'd' && operation != 'q')
			{
				printf("Non-existent menu, try again!\n");
			}
		} while (operation != 'a' && operation != 's' && operation != 'm' && operation != 'd' && operation != 'q');

		if (operation != 'q')
		{
			printf("Enter first number:\n");
			scanf(" %f", &firstOperand);

			printf("Enter second number:\n");
			scanf(" %f", &secondOperand);
		}
		switch (operation)
		{
		case 'a': printf("%f + %f = %f\n", firstOperand, secondOperand, firstOperand + secondOperand); break;
		case 's': printf("%f - %f = %f\n", firstOperand, secondOperand, firstOperand - secondOperand); break;
		case 'm': printf("%f * %f = %f\n", firstOperand, secondOperand, firstOperand * secondOperand); break;
		case 'd': printf("%f / %f = %f\n", firstOperand, secondOperand, firstOperand / secondOperand); break;
		case 'q': printf("Bye"); break;
		}

	} while (operation != 'q');

}
void hw_15_09(void)
{
	char buff[255];
	enterTextOnStdIN(buff);
	int len = getLen(buff);

	for (int i = len; i >= 0; i--)
	{
		printf("%c",buff[i]);
	}
}
void hw_15_10(void)
{
	char buff[255];
	enterTextOnStdIN(buff);
	int len = getLen(buff);

	for (int i = len-1; i >= 0; i--)
	{
	    int j = 0;
	    int pos = 0;
		if (buff[i] != '\n')
		{
			j++;
			while (buff[i] != '\n')
			{
				j++;
				i--;
			}
			i++;
			j--;
			while (j >= 0)
			{
				printf("%c", buff[i]);
				j--;
				i++;
				pos++;
			}
			i = i - pos;
		}
		else
		{
			i--;
		}
	}
}
void hw_15_11(void)
{
	char buff[255];
	enterTextOnStdIN(buff);
	
	for (int i = 0; buff[i] != '\0';)
	{
		int j = 0;
		int pos = 0;
		while (buff[i] != '\n')
		{
			j++;
			i++;
		}
		while (j >= 0)
		{
			printf("%c", buff[i]);
			j--;
			i--;
			pos++;
		}
		i = i + pos+1;
	}
}

void hw_15_6_1(void)
{
	char buff[255];
	enterTextOnStdIN(buff);
	int countChar = 0;
	int countDigit = 0;

	for (int i = 0; buff[i] != '\0'; i++)
	{
		if ((buff[i] >= 'a' && buff[i] <= 'z') || (buff[i] >= 'A' && buff[i] <= 'Z'))
		{
			countChar++;
			continue;
		}
		if (buff[i] >= '0' && buff[i] <= '9')
		{
			countDigit++;
		}
	}
	printf("Count char: %d, count digit: %d", countChar, countDigit);
}
void hw_15_7_1(void)
{
	char buff[255];
	enterTextOnStdIN(buff);

	int countSimbolsInLine = 0;
	for (int i = 0; buff[i] != '\0'; i++)
	{
		while (buff[i] != '\n')
		{
			countSimbolsInLine++;
			i++;
		}
		if (countSimbolsInLine > 80)
		{
			i = i - countSimbolsInLine;
			for (int j = i; buff[j] != '\n'; j++)
			{
				printf("%c", buff[j]);
			}
		}
		countSimbolsInLine = 0;
	}
}
void hw_15_8_1(void)
{
	char buff[255];
	enterTextOnStdIN(buff);

	for (int i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == '\t' || buff[i] == ' ')
		{
			while (buff[i] == '\t' || buff[i] == ' ')
			{
				i++;
			}
		}
		putchar(buff[i]);
	}
}
void hw_15_9_1(void)
{

	char buff[255];
	enterTextOnStdIN(buff);
	int diff = 'A' - 'a';

	for (int i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i]>='A' && buff[i] <= 'Z')
		{
			buff[i] -= diff;
		}
		putchar(buff[i]);
	}
}
void hw_15_10_1(void)
{
	printf("Please enter a some text on  multiple lines:\n");
	char c;
	int i = 0;
	char buff[255];
	char temp[100];
	int len = 0;

	do
	{
		c = getchar();
		temp[i++] = c;
		if (c == '\n')
		{
			temp[i] = '\0';
			reverse(temp);
			int k = 0;
			for (int j = len; j <= i; j++, k++)
			{
				buff[j] = temp[k];
			}
			i = 0;
			len += i;
		}

	} while (c != EOF);
	buff[len] = '\0';
	printTextOnStdOUT(buff);
}
void hw_15_11_1(void)
{
	char str[8] = { 'h','e','l', 'l', 'o' };
	int len=getLen(str);
	reverse1(str,len);
	printf("%s", str);
}

int getLen(const char* buff)
{
	int i = 0;
	for (i = 0; buff[i]; i++)
	{
	}
	return i;
}
void enterTextOnStdIN(char* buff)
{
	printf("Please enter a some text on  multiple lines:\n");
	char c;
	int i = 0;
	do
	{
		c = getchar();
		buff[i++] = c;

	} while (c != EOF);
	buff[i] = '\0';
}
void printTextOnStdOUT(char* buff)
{
	printf("%s", buff);
}
void reverse(char* str)
{
	int len = (int)strlen(str);
	char temp = 0;

	for (int i = 0; i < len; i++, len--)
	{
		temp = str[i];
		str[i] = str[len-1];
		str[len-1] = temp;
	}
}
void reverse1(char str[], int len)
{
	char temp = 0;
	for (int i = 0; i < len; i++, len--)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
	}
}