#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void squeeze(char* s1, const char* s2)
{

	int j = 0;
	for (int i = 0; s1[i]; ++i)
	{
		for (int k = 0; s2[k]; ++k)
		{
			if (s2[k] == s1[i])
			{
				while (s2[k] == s1[i])
				{
					++i;
				}
			}
		}
		s1[j++] = s1[i];
	}
	s1[j] = '\0';


}

int main(void)
{
	char str[] = "Hello\n";
	squeeze(str, "Hl");
	printf("%s", str);

	return 0;
}