// Program to generate a table of triangular numbers

#include <stdio.h>

int main (void)
{
	int  n, fact, tmp;

	printf ("TABLE OF FACTORIAL NUMBERS\n\n");
	printf (" n      from 1 to n  \n");
	printf ("---   ---------------\n");


	for ( n = 1;  n <= 10;  n++ ) {
		fact = 1;
		tmp = n;
		while (tmp > 0) {
			fact *= tmp;
			tmp--;
		}
		printf ("%2i           %i\n", n, fact);
	}

	return 0;
}	