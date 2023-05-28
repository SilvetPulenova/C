#include<stdio.h>

//from task 4
void reverseString(char* str)
{
	int len = (int)strlen(str);
	char temp = 0;

	for (int i = 0; i < len; i++, len--)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;

	}
}

//task 5
void itoa(int n, char* s)
{
	int i = 0;
	do
	{
		s[i++] = (n % 10) + '0';
		n /= 10;
       
	} while (n != 0);
	s[i++] = '\0';

	reverseString(s);
}


int main(void)
{
	char s[20];
	int n = 768;

	itoa(n, s);

	printf("%s", s);



	return 0;
}