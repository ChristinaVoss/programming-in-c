#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct date
	{
		int day;
		int month;
		int year;
	};

	struct date today;
	struct date *datePtr;
	datePtr = &today;

	datePtr->day = 25;
	(*datePtr).month = 1;
	datePtr->year = 1997;

	printf("%i %i %i\n", datePtr->day, datePtr->month, datePtr->year);
	return 0;
}