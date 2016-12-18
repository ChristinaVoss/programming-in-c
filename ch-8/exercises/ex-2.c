#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct date
{
	int day;
	int month;
	int year;
};

unsigned long int calcN(struct date d);
unsigned long int f(struct date d);
unsigned long int g(struct date d);
bool isBetween(struct date d, struct date from, struct date to);
unsigned long int getElapsedDays(struct date d1, struct date d2);

int main(int argc, char const *argv[])
{
	struct date d1, d2;
	unsigned long int elapsedDays;

	printf("Enter date1: ");
	scanf("%i %i %i", &d1.day, &d1.month, &d1.year);

	printf("Enter date2: ");
	scanf("%i %i %i", &d2.day, &d2.month, &d2.year);

	elapsedDays = getElapsedDays(d1, d2);
	printf("elapsedDays: %lu\n", elapsedDays);

	return 0;
}


unsigned long int getElapsedDays(struct date d1, struct date d2) {
	printf("n1: %lu n2: %lu\n", calcN(d1), calcN(d2));
	return abs(calcN(d1) - calcN(d2));
}


unsigned long int calcN(struct date d) {
	struct date from, to;
	unsigned long int n;

	n = 1461 * f(d) / 4 + 153 * g(d) / 5 + d.day;

	from = (struct date) {
		1, 3, 1900
	};
	to = (struct date) {
		28, 2, 1800
	};

	if (isBetween(d, from, to))
		n += 2;

	from = (struct date) {
		1, 3, 1800
	};
	to = (struct date) {
		28, 2, 1900
	};

	if (isBetween(d, from, to))
		n++;

	return n;
}

bool isBetween(struct date d, struct date from, struct date to) {
	bool isBetween;
	if (d.year > from.year && d.year < to.year) {
		isBetween = true;
	} else if (d.year == from.year) {
		if (d.month > from.month) {
			isBetween = true;
		}
	} else if (d.year == to.year) {
		if (d.month < to.month) {
			isBetween = true;
		}
	} else if (d.month == from.month) {
		if (d.day >= from.day) {
			isBetween = true;
		}
	} else if (d.month == to.month) {
		if (d.day <= to.day)
			isBetween = true;
	} else { isBetween = false; }

	return isBetween;
}

unsigned long int f(struct date d) {
	if (d.month <= 2)
		return d.year - 1;
	else
		return d.year;
}

unsigned long int g(struct date d) {
	if (d.month <= 2)
		return d.month + 13;
	else
		return d.month + 1;
}
