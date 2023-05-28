#include<stdio.h>

void reverseString(char* str)
{
	int len = (int)strlen(str);
	char temp = 0;
	
	for(int i=0;i<len;i++, len--)
	{	
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;

	}
}

int main()
{
	char str[] = "Hello\n";
	reverseString(str);

	printf("%s", str);




	return 0;
}