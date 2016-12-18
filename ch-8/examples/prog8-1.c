#include <stdio.h>


int main(void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct date today;

	today.month = 12;
	today.day = 16;
	today.year = 2016;

	printf("%i/%i/%i\n", today.month, today.day, today.year);

	return 0;
}