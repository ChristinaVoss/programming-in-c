#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

struct entry *findValue(struct entry *start, const int search) {
	while(start != (struct entry *)0) {
		if (start->value == search)
		{
			return start;
		} else {
			start = start ->next;
		}
	}

	return (struct entry *) 0;
}

int main(int argc, char const *argv[])
{
	struct entry e1, e2, e3;
	struct entry *val, *retItm;

	e1.value = 10;
	e2.value = 20;
	e3.value = 30;

	e1.next = &e2;
	e2.next = &e3;
	e3.next = (struct entry *) 0;

	val = &e1;
	retItm = findValue(val, 20);

	if (retItm != (struct entry *) 0)
	{
		printf("%i found.\n", (*retItm).value);
	}


	return 0;
}