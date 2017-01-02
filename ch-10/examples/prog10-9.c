#include <stdio.h>

void exchange(int *ap, int *bp) {
	int tmp = *ap;
	*ap = *bp;
	*bp = tmp;
}

int main(int argc, char const *argv[])
{
	int a = 5, b = 10, *a_pointer = &a, *b_pointer = &b;

	printf("%i %i\n", a, b);
	exchange(a_pointer, b_pointer);

	printf("%i %i\n", *a_pointer, *b_pointer);
	exchange(&a, &b);

	printf("%i %i\n", a, b);
	return 0;
}