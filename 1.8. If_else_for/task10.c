#include<stdio.h>


void toLower(char s[])
{
	int diff = 'a' - 'A';

	for (int i = 0; s[i]!='\0'; i++)
	{
		if ((s[i] > 'A' && s[i] < 'Z') || (s[i] == 'A' || s[i] == 'Z'))
		{
			s[i] = s[i] + diff;
		}
		/*if (s[i] >= 'A' || s[i] <= 'Z')
		{
			s[i] = s[i] + diff;
		}*/
	}
}


int main()
{
	char s[] = "HEllo, 123\n";
	toLower(s);
	printf("%s\n", s);


	return 0;
}