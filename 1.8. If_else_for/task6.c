#include<stdio.h>

void replace(char* str, int oldChar, int newChar)
{

	char temp = 0;

	for (int i = 0; str[i]!='\0'; i++)
	{
		if (str[i] == oldChar)
		{
			str[i] = newChar;
		}
	}
}


int main()
{

	char str[] = "Hello\n";
	replace(str, 'e', '3');
	printf("%s", str);



	return 0;
}