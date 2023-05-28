//Ако имаме символен низ char str[] = “HELLO”, заменете
//всичките символи с главна буква със съответните символи с малка буква.

#include<stdio.h>
#include<string.h>



int main()
{

	char str[] = "HELLO";
	size_t len = strlen(str);

	int diff = 'a' - 'A';
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A' || str <= 'Z')
		{
			str[i] = str[i] + diff;
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}
