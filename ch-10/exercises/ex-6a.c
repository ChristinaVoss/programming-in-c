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


void insertEntry (struct entry *after, struct entry *n) {
	n->next = after->next;
	after->next = n;
}

int main(int argc, char const *argv[])
{
	struct entry e1, e2, e3, *start = &e1, n;
	e1.prev =  (struct entry *) 0;
	e1.value = 100;
	e1.next = &e2;

	e2.prev = &e1;
	e2.value = 200;
	e2.next = &e3;

	e3.prev = &e2;
	e3.value = 300;
	e3.next = (struct entry *) 0;

	n.value = 150;
	insertEntry(&e1, &n);
	displayList(start);

	return 0;
}