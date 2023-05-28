#ifndef DATETIME_H
#define DATETIME_H

typedef enum
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
}E_Weekday;

typedef enum
{
	January=1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
}E_Month;

typedef struct
{
	const unsigned int year;
	E_Month month;
	unsigned int day;

}datetime;

datetime* sumDate(datetime* begin, int countDays);
int difDate(datetime* firstDate, datetime* secondDate);
void print_datetime(const datetime dt);



#endif