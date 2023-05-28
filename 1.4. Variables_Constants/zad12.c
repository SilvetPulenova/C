//Ако имаме символен низ char str[] = “Hеllo”, заменете буквите l с х на същия символен низ и отпечатайте резултата на конзолата.

#include<stdio.h>
#include<string.h>



int main()
{

	char str[] = "Hello";
	size_t len = strlen(str);
	

	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'l')
		{
			str[i] = 'x';
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}
