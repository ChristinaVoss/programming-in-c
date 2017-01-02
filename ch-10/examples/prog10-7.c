#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct entry
	{
		int value;
		struct entry *next;
	};

	struct entry e1, e2, e3;
	struct entry *val;

	e1.value = 10;
	e2.value = 20;
	e3.value = 30;

	e1.next = &e2;
	e2.next = &e3;
	e3.next = (struct entry *) 0;

	val = &e1;
	while(val != (struct entry *) 0) {
		printf("%i\n", val->value);
		val = val->next;
	}
	return 0;
}