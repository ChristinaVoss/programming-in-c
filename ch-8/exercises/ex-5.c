#include <stdio.h>
#include <stdbool.h>

struct time
{
	int hours;
	int minutes;
	int seconds;
};

struct date
{
	int month;
	int day;
	int year;
};

struct dateTime
{
	struct time t;
	struct date d;
};

struct time timeUpdate(struct time t);

int getNumOfDays(struct date d);
bool isLeapYear(struct date d);
struct date dateUpdate(struct date d);

struct dateTime clockKeeper(struct dateTime dt);

int main(int argc, char const *argv[])
{
	struct dateTime dt;

	printf("enter date: ");
	scanf("%i %i %i", &dt.d.day, &dt.d.month, &dt.d.year);

	printf("enter time: ");
	scanf("%i:%i:%i", &dt.t.hours, &dt.t.minutes, &dt.t.seconds);

	dt = clockKeeper(dt);

	printf("New dateTime:\n");
	printf("Date: %i/%i/%i, Time: %.2i:%.2i:%.2i \n", dt.d.day, dt.d.month, dt.d.year, dt.t.hours, dt.t.minutes, dt.t.seconds);

	return 0;
}


struct time timeUpdate(struct time t) {
	t.seconds++;
	if (t.seconds == 60)
	{
		t.seconds = 0;
		t.minutes++;

		if (t.minutes == 60)
		{
			t.minutes = 0;
			t.hours++;

			if (t.hours == 24)
			{
				t.hours = 0;
			}

		}
	}

	return t;
}


struct date dateUpdate(struct date d) {

	int numOfDays = getNumOfDays(d);
	struct date tomorrow;

	if (numOfDays != d.day)
	{
		tomorrow = (struct date) {d.day + 1, d.month, d.year};
	} else if (d.month == 12)
	{
		tomorrow = (struct date) {1, 1, d.year + 1};
	} else {
		tomorrow = (struct date) {1, d.month + 1, d.year};
	}

	return tomorrow;
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

struct dateTime clockKeeper(struct dateTime dt) {
	dt.t = timeUpdate(dt.t);

	if (dt.t.hours == 0 && dt.t.minutes == 0 && dt.t.seconds == 0)
	{
		dt.d = dateUpdate(dt.d);
	}

	return dt;
}
