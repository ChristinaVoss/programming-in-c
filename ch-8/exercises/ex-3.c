#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


struct time {
	int hours;
	int minutes;
	int seconds;
};

struct time getElapsed(struct time t1, struct time t2);

int main(int argc, char const *argv[])
{
	struct time t1, t2;
	struct time diff;

	printf("Enter starting time: ");
	scanf("%i:%i:%i", &t1.hours, &t1.minutes, &t1.seconds);

	printf("Enter ending time: ");
	scanf("%i:%i:%i", &t2.hours, &t2.minutes, &t2.seconds);

	diff = getElapsed(t1, t2);

	printf("elapsed time: %.2i:%.2i:%.2i\n", diff.hours, diff.minutes, diff.seconds);
	return 0;
}

struct time getElapsed(struct time t1, struct time t2) {
	struct time diff = {0, 0, 0};

	if (t2. hours >= t1. hours)
	{
		diff.hours = t2.hours - t1.hours;
	}
	else
	{
		diff.hours = 24 - t1.hours + t2.hours;
	}

	if (t1.minutes >= 1 || t1. seconds >= 1)
	{
		diff.hours--;
		if (t1.minutes >= 1)
		{
			diff.minutes = 60 - t1.minutes;
		}
		if (t1.seconds >= 1)
		{
			diff.seconds = 60 - t1.seconds;
			diff.minutes == 0 ? diff.minutes = 59 : --diff.minutes;
		}
	}

	diff.seconds += t2.seconds;
	diff.minutes += t2.minutes;

	if(diff.seconds >= 60)
	{
		diff.seconds -= 60;
		diff.minutes++;
	}

	if (diff.minutes >= 60)
	{
		diff.minutes -= 60;
		diff.hours++;
	}

	return diff;
}