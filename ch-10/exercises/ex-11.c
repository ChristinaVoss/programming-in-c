#include <stdio.h>
#include <stdbool.h>


struct date
{
	int month;
	int day;
	int year;
};

int getNumOfDays(struct date d);
bool isLeapYear(struct date d);
void dateUpdate(struct date *d);

int main(void)
{
	struct date today, tomorrow;

	printf("enter today's date: ");
	scanf("%i %i %i", &today.day, &today.month, &today.year);

	dateUpdate(&today);
	tomorrow = today;
	printf("tomorrow is: %i/%i/%i\n", tomorrow.month, tomorrow.day, tomorrow.year);

	return 0;
}

void dateUpdate(struct date *d) {

	int numOfDays = getNumOfDays(*d);

	if (numOfDays != d->day)
	{
		d->day += 1;
	} else if (d->month == 12)
	{
		d->day = d->month = 1;
		d->year += 1;
	} else {
		d->day = 1;
		d->month += 1;
	}
}

int getNumOfDays(struct date d) {
	int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (d.month == 2 && isLeapYear(d))
		return 29;
	else
		return daysInMonth[d.month - 1];
}

bool isLeapYear(struct date d) {
	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
		return true;
	else
		return false;
}
