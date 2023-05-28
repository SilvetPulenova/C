#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"hw_16.h"



void hw_16_01(void)
{
	char dest[255];
	char src[] = "hello";
	printf("%s",my_strcpy(dest, src));
}
void hw_16_02(void)
{
	char dest[255];
	char src[] = "hello";
	printf("%s", my_strncpy(dest, src,3));
}
void hw_16_03(void)
{
	char dest[255] = "world ";
	char *src = "hello";
	my_strcat(dest, src);
	printf("%s\n", dest);
	printf("%s", my_strcat(dest, src));
}
void hw_16_04(void)
{
	char dest[255] = "world ";
	char src[] = "hello";
	my_strncat(dest, src,3);
	printf("%s\n", dest);
	printf("%s", my_strncat(dest, src,3));
}
void hw_16_05(void)
{
	char str1[] = "hello";
	char str2[] = "hello";
	printf("%d\n",my_strncmp(str1, str2, 4));
}
void hw_16_06(void)
{
	char str[] = "world ";
	char substr[] = "rld";

	printf("%s", my_strstr(str, substr));
}
void hw_16_07(void)
{
	const char *str[4] = { "cat", "bat", "hat", "bit" };
	const char matrix[3][7] = { {'c','a','t','h','b','a','t'},
	                            {'x','r','a','t','i','j','k'},
	                            {'f','s','q','y','t','k','u'} };

	
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		count+=countStringInMatrix(str[i], *matrix, 3, 7);
	}
	printf("%d", count);

	//printf("%d", countWordInMatrix(*str, 4, *matrix, 3, 7));
}
void hw_16_08(void)
{
	char str[] = "world ";
	char substr[10];

	printf("%s", extract_substr(str,0,3, substr));
}
void hw_16_09(void)
{
	char str[] = "azcdef";
	printf("%d\n", isSortedLex(str));
}
void hw_16_10(void)
{
	char str[] = "hello,hi, bye byee_12-3";
	char delimiters[] = "_ ,";
	print_str_tokens(str, delimiters);
}


char* my_strcpy(char* dest, const char* src)
{
	int i = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}
char* my_strncpy(char* dest, const char* src, size_t count)
{
	size_t i = 0;
	for (i = 0; i<count; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}
char* my_strcat(char* dest, const char* src)
{
	
	dest += (int)strlen(dest);
	char* p = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return p;
}
char* my_strncat(char* dest, const char* src, size_t count)
{
	dest += (int)strlen(dest);
	//char* p = dest;

	size_t i = 0;
	while (i<count)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return dest;
}
int my_strncmp(const char* lhs, const char* rhs, size_t count)
{
	size_t i;
	for (i = 0; i < count-1; i++)
	{
		if (lhs[i] != rhs[i])break;
	}
	return lhs[i] - rhs[i];
}
char* my_strstr(char* str, const char* substr)
{
	int len = (int)strlen(substr);
	for (int i = 0; str[i] != '\0'; i++)
	{
		int j = 0;
		if (str[i] == substr[j])
		{
			while(str[i] == substr[j] && substr[j] && str[i])
			{
				i++;
				j++;
			}
		}
		if (j == len)
		{
			return &str[i - j];
		}
		else
		{
			i = i - j + 1;
		}
	}
	return 0;
}
int countStringInMatrix(const char* str,const char* matrix, int rows, int cols)
{
	int countRow = 0;
	int countCol = 0;
	int lenStr = (int)strlen(str);
	int k = 0;
	//търси стринга в редовете на матрицата
	for (int i = 0; i < rows; i++)
	{ 
		for (int j = 0; j < cols - lenStr + 1 ; j++)
		{
			if (matrix[i * cols + j] == str[k])
			{
				k++;
			}
			else
			{
				k = 0;
			}
		    if (k == lenStr)
		    {
			    countRow++;
		    }
		}
	}
	//търси стринга в колоните на матрицата
	 k = 0;
	for (int i = 0; i < cols; i++ )
	{
		for (int j = 0; j < rows - lenStr +1; j++)
		{
			if (matrix[j * cols + i] == str[k] )
			{
				k++;
			}
			else
			{
			   k = 0;
			}
		}
		if (k == lenStr)
		{
			countCol++;
		}
		printf("\n");
	}
	return countRow+countCol;
}
int countWordInMatrix(const char* str[], int colsStr, const char* matrix, int rowsMatrix, int colsMatrix)
{
	int count = 0;
	for (int i = 0; i < colsStr; i++)
	{
		count += countStringInMatrix(str[i], *matrix, rowsMatrix, colsMatrix);
	}
	return count;
}
char* extract_substr(const char* str, size_t idx_from, size_t idx_to, char* result)
{
	int j = 0;
	for (size_t i = idx_from; i<=idx_to; i++, j++)
	{
		result[j] = str[i];
	}
	result[j] = '\0';
	return result;
}
int isSortedLex(const char* str)
{
	for (int i=0; str[i+1] != '\0'; i++)
	{
		if (str[i] > str[i+1])
			return 0;
	}
	return 1;
}
void print_str_tokens(const char* str, const char* delimiters)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		int j = 0;
		while (delimiters[j] != '\0')
		{
			if (str[i] == delimiters[j])
			{
				printf("\n");
				while (str[i] == delimiters[j] && str[i])
				{
					i++;
				}
			}
			j++;
		}
		printf("%c", str[i]);
	}
}