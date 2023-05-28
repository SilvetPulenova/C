
#include<stdio.h>

int isLetter(char c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}


int main()
{

	printf("%d\n", isLetter('v'));
	printf("%d\n", isLetter('%'));
	printf("%d\n", isLetter('Z'));
	printf("%d\n", isLetter('?'));



	return 0;
}
