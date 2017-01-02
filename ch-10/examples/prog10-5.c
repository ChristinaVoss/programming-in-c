#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct intPtrs
	{
		int *p1;
		int *p2;
	};

	struct intPtrs int_pointers;
	int i1 = 100, i2;

	int_pointers.p1 = &i1;
	int_pointers.p2 = &i2;

	i2 = -97;

	printf("*int_pointers.p1 = %i, *int_pointers.p2 = %i, i1 = %i, i2 = %i\n", *int_pointers.p1, *int_pointers.p2, i1, i2);

	return 0;
}