#include <stdio.h>

void test(int *p) {
	*p = 100;
}
int main(int argc, char const *argv[])
{
	int i = 5;
	int *int_pointer = &i;

	test(int_pointer);

	printf("%i\n", i);
	return 0;
}