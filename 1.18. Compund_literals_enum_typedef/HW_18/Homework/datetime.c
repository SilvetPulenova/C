#include<stdio.h>
#include"datetime.h"


datetime* sumDate(datetime* begin, int countDays)
{
	begin->day += countDays;
	//to do: verification
	return begin;
}
int difDate(datetime* firstDate, datetime* secondDate)
{
	int diff = firstDate->day - secondDate->day;
	//to do: verification to difer month
	return diff;
}
void print_datetime(const datetime dt)
{
	printf("YYYY.MM.DD\n");
	printf("%d.", dt.year);
	printf("%d.", dt.month);
	printf("%d\n", dt.day);
}