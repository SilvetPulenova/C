#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include"hw_14.h"

void reverse(char* str)
{
	int len = (int)strlen(str);
	char* begin = str;
	char* end = begin + len - 1;

	for (; begin < end; begin++, end++)
	{
		char temp = *end;
		*end = *begin;
		*begin = temp;
	}
}
int isPalindrome(char* s) 
{
	int length = (int)strlen(s);
	char* left = s;
	char* right = s + length - 1;

	while (left < right) 
	{
		if (*left != *right) 
		{
			return 0;
		}
		left++;
		right--;
	}
	return 1;
}
void calmifyStr(char* s) 
{
	char* p = s;
	while (*p) 
	{
		if (islower(*p)) 
		{
			*p = toupper(*p);
		}
		else if (*p == '.') 
		{
			*p = '!';
		}
		p++;
	}
}
void trimToFirstWhitespace(char* s) 
{
	char* p = s;
	while (*p && *p != ' ' && *p != '\t' && *p != '\n') 
	{
		p++;
	}
	*p = '\0';
}
int countChar(const char* str, char c) 
{
	int count = 0;
	for (const char* p = str; *p != '\0'; p++) 
	{
		if (*p == c) 
		{
			count++;
		}
	}
	return count;
}
int findSubstring(const char* str, const char* substr) 
{
	const char* p1, * p2;
	for (int i = 0; *(str + i) != '\0'; i++) 
	{
		p1 = str + i;
		p2 = substr;
		while (*p2 != '\0' && *p1 == *p2) 
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0') 
		{
			return i;
		}
	}
	return -1;
}
int countSubstring(const char* str, const char* substr) 
{
	int count = 0;
	const char* p1, * p2;
	for (int i = 0; *(str + i) != '\0'; i++) 
	{
		p1 = str + i;
		p2 = substr;
		while (*p2 != '\0' && *p1 == *p2) 
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			count++;
			i = p1 - str - 1;
		}
	}
	return count;
}
int isValidEmail(const char* email) 
{
	const char* p = email;
	int atCount = 0;
	int dotCount = 0;
	while (*p != '\0') 
	{
		if (*p == '@') 
		{
			atCount++;
		}
		else if (*p == '.') 
		{
			dotCount++;
		}
		else if (!isalnum(*p) && *p != '_' && *p != '+' && *p != '-') 
		{
			return 0;
		}
		p++;
	}
	return (atCount == 1 && dotCount >= 1);
}
int countLines(const char* text) 
{
	const char* p = text;
	int lineCount = 0;
	while (*p != '\0') 
	{
		if (*p == '\n') 
		{
			lineCount++;
		}
		p++;
	}
	return lineCount + 1;
}
int my_strcmp(const char* s1, const char* s2) 
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) 
	{
		i++;
	}
	return s1[i] - s2[i];
}








void hw_14_01(void)
{
	char str[6] = "hello";
	printf("%s\n",str);
	reverse(str);
	printf("%s\n", str);
}
void hw_14_02(void)
{
	char* str = "helleh";
	printf("%d\n", isPalindrome(str));
}
void hw_14_03(void)
{
	char str[] = "hello, world. it's a beautiful day.";

	printf("Before: %s\n", str);
	calmifyStr(str);
	printf("After calmify_str: %s\n", str);
}
void hw_14_04(void)
{
	char str[] = "hii code academy   kkkk!";
	printf("Before: %s\n", str);
	trimToFirstWhitespace(str);
	printf("After: %s\n", str);
}
void hw_14_05(void) 
{
	char str[] = "joklooo";
	char c = 'o';
	int count = countChar(str, c);
	printf("The character '%c' appears %d times in the string \"%s\".\n", c, count, str);
}
void hw_14_06(void) 
{
	char str[] = "Hello Code Academy!";
	char substr[] = "Hello";
	int index = findSubstring(str, substr);
	if (index != -1) 
	{
		printf("The substring \"%s\" is found in the string \"%s\" starting from index %d.\n", substr, str, index);
	}
	else 
	{
		printf("The substring \"%s\" is not found in the string \"%s\".\n", substr, str);
	}
}
void hw_14_07(void) 
{
	char str[] = "Hi academy, hi, alo hi";
	char substr[] = "hi";
	int count = countSubstring(str, substr);
	printf("The substring \"%s\" is found %d times in the string \"%s\".\n", substr, count, str);
	return 0;
}
void hw_14_08(void) 
{
	char email1[] = "silvet@gmail.com";
	char email2[] = "silvet.pulenova@domain.com";
	char email3[] = "not_an_email";
	printf("%s is %svalid email address.\n", email1, isValidEmail(email1) ? "" : "not ");
	printf("%s is %svalid email address.\n", email2, isValidEmail(email2) ? "" : "not ");
	printf("%s is %svalid email address.\n", email3, isValidEmail(email3) ? "" : "not ");
}
void hw_14_09() 
{
	char text[] = "This is line 1\nThis is line 2\nThis is line 3";
	printf("The text contains %d lines.\n", countLines(text));
}
void hw_14_10(void) 
{
	char s1[20] = "Hello";
	char s2[20] = "Hello";
	int result = my_strcmp(s1, s2);
	if (result == 0) 
	{
		printf("Strings are equal\n");
	}
	else if (result > 0) 
	{
		printf("s1 is greater than s2\n");
	}
	else 
	{
		printf("s2 is greater than s1\n");
	}
}

