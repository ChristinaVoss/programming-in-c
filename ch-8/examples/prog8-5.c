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
	struct time now, newTime;

	printf("enter current time: ");
	scanf("%i:%i:%i", &now.hours, &now.minutes, &now.seconds);

	newTime = timeUpdate(now);

	printf("newTime is: %.2i:%.2i:%.2i\n", newTime.hours, newTime.minutes, newTime.seconds);

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