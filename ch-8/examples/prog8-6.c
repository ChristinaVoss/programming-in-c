#include <stdio.h>
#include <stdbool.h>


struct time
{
	int hours;
	int minutes;
	int seconds;
};

struct time timeUpdate(struct time t);

int main(void)
{
	struct time timeArr[4] = {{4, 28, 59}, {0, 0, 0}, {23, 59, 59}, {21, 22, 22}};

	for (int i = 0; i < 4; ++i)
	{
		printf("current time: %.2i:%.2i:%.2i\n", timeArr[i].hours, timeArr[i].minutes, timeArr[i].seconds);
		timeArr[i] = timeUpdate(timeArr[i]);
		printf(" newer  time: %.2i:%.2i:%.2i\n\n", timeArr[i].hours, timeArr[i].minutes, timeArr[i].seconds);
	}

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