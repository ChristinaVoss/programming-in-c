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

int main(void)
{

	int numOfDays;
	struct date today, tomorrow;

	printf("enter today's date: ");
	scanf("%i %i %i", &today.day, &today.month, &today.year);

	numOfDays = getNumOfDays(today);

	if (numOfDays != today.day)
	{
		tomorrow = (struct date) {today.day + 1, today.month, today.year};
	} else if (today.month == 12)
	{
		tomorrow = (struct date) {1, 1, today.year + 1};
	} else {
		tomorrow = (struct date) {1, today.month + 1, today.year};
	}



	printf("tomorrow is: %i/%i/%i\n", tomorrow.month, tomorrow.day, tomorrow.year);

	return 0;
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