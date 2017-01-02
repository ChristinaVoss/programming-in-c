#include <stdio.h>

void exchange(int *ap, int *bp) {
	int tmp = *ap;
	*ap = *bp;
	*bp = tmp;
}

void sort3(int a, int b, int c)
{
	if(a > b) {
		exchange(&a, &b);
	}
	if (a > c)
	{
		exchange(&a, &c);
	}
	if(b > c) {
		exchange(&b, &c);
	}
	printf("%i %i %i\n", a, b, c);
}

int main(int argc, char const *argv[])
{
	sort3(5, 9, 2);

	return 0;
}