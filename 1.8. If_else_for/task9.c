#include<stdio.h>
#include<string.h>

int findAny(const char* str1, const char* str2)
{
	int len = (int)strlen(str1);
	int firstPos = len;

	for (int i = 0; str2[i] != '\0'; i++)
	{
		for (int j = 0; str1[j] != '\0'; j++)
		{
			if (str2[i] == str1[j])
			{
				if (j < firstPos)
				{
					firstPos = j;
				}
			}
		}
	}


	if (firstPos == len)
	{
		return -1;
	}
	else
	{
		return firstPos;
	}
	
}


int main()
{

	char str1[] = "Hello";
	char str2[] = "oe";
	
	printf("%d",findAny(str1, str2));


	return 0;
}