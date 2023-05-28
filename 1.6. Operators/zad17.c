#include<stdio.h>

void xorshiftLong(long long int A)
{
	A ^= A << 13;
	printf("%lld\n", A);
	A ^= A >> 17;
	printf("%lld\n", A);
	A ^= A << 5;
	printf("%lld\n", A);
}

void xorshift(int A)
{
	A ^= A << 13;
	printf("%d\n", A);
	A ^= A >> 17;
	printf("%d\n", A);
	A ^= A << 5;
	printf("%d\n", A);
}


int main7()
{
	int A = 30;
	xorshift(A);


	printf("\n");

	long long int LLA = 3098099999999LL;
	xorshiftLong(LLA);



	return 0;
}