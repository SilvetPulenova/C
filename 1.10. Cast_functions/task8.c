#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int randPositive(int max);
int randRange(int min, int max);


int main(void)
{

	printf("%d\n", randPositive(9));
	printf("%d", randRange(-20, 9));


	return 0;
}

int randPositive(int max)
{
	srand(time(NULL));
	
    return rand() % max;

}

int randRange(int min, int max)
{
	srand(time(NULL));
	return min + rand() % (max - min);
}