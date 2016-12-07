// Program to generate a table of triangular numbers

#include <stdio.h>

int main (void)
{
	int  n;

	printf (" n        n * n    \n");
	printf ("---   --------------\n");


	for ( n = 1;  n <= 10;  ++n ) {
		printf ("%2i         %i\n", n, n*n);
	}

	return 0;
}