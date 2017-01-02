#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x, count = 10;

	int *int_pointer;

	int_pointer = &count;
	x = *int_pointer;

	printf("%i %i %i\n", x, *int_pointer, count);
	return 0;
}