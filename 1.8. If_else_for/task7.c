#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void squeeze(char* s, int c)
{
	int j = 0;
	for (int i = 0; s[i]; ++i)
	{
		if (s[i] == c)
		{
			while (s[i] == c)
			{
				++i;
			}
		}
		s[j++] = s[i];
	}
	s[j] = '\0';
}

int main(void)
{
	char str[] = "Hello\n";
	squeeze(str, 'l');
	printf("%s", str);


	return 0;
}