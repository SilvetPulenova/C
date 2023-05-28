//Ако имаме символен низ от символа char str[] = “Hello”;
//копирайте всеки един от неговите символи в низ, който да изглежда огледален на него. Ето така char rts[] = “ollеH”; 
//и принтирайте резултата.


#include<stdio.h>
#include<string.h>



int main()
{

	char str[] = "Hello";
	size_t len = strlen(str);
	char rts[] = { '0' };
	size_t newLen = len - 1;

	//11
	for (int i = 0; i < len; i++, newLen--)
	{
		rts[newLen] = str[i];
	}

	for (int i = 0; i < len; i++)
	{
		printf("%c", rts[i]);
	}

	return 0;
}
