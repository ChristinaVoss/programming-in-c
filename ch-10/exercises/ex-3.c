#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};
void insertEntry (struct entry *after, struct entry *n) {
	n->next = after->next;
	after->next = n;
}

void displayList(struct entry *start) {
	while(start != (struct entry *) 0) {
		printf("%i\n", start->value);
		start = start->next;
	}
}

int main(int argc, char const *argv[])
{
	struct entry e1, e2, e3, *start, n, head;
	start = &e1;
	e1.value = 100;
	e2.value = 200;
	e3.value = 300;
	e1.next = &e2;
	e2.next = &e3;
	e3.next = (struct entry *) 0;
	n.value = 150;
	head.next = &e1;
	insertEntry(&head, &n);

	displayList(&n);
	return 0;
}