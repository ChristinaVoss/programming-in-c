#include <stdio.h>

//removing 1st entry from doubly linked list
struct entry
{
	int value;
	struct entry *prev;
	struct entry *next;
};

void displayList (struct entry *start) {
	while (start != (struct entry *) 0) {
		printf("%i\n", start->value);
		start = start->next;
	}
}

void removeEntry (struct entry *pos) {
	(pos->prev)->next = pos->next;
}

int main(int argc, char const *argv[])
{
	struct entry e1, e2, e3, *start = &e1, head;
	e1.prev = &head;
	e1.value = 100;
	e1.next = &e2;

	e2.prev = &e1;
	e2.value = 200;
	e2.next = &e3;

	e3.prev = &e2;
	e3.value = 300;
	e3.next = (struct entry *) 0;

	head.next = e1.prev;
	removeEntry(&e1);
	displayList(head.next);

	return 0;
}