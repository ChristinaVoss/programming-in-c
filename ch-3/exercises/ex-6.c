#include <stdio.h>

int main (void)
{
	float x = 2.55;
	float a = 3 * x * 3;
	float b = 5 * x * 2;
	float c = 6;

	float result = a - b + 6;

	printf("%g\n", result);

	return 0;
}