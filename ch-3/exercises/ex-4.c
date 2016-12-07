// Basic conversions in C

#include <stdio.h>

int main (void)
{
	float  f, c;


	printf("Enter f: ");
	scanf("%f", &f);

	c = (f - 32) / 1.8;

	printf("%gf converted to c is %g\n", f, c);

	return 0;
}