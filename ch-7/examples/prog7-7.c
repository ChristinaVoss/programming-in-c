#include <stdio.h>

float absVal(float n)
{
	if (n < 0) {
		n *= -1;
	}
	
	return n;
}

int main(int argc, char const *argv[])
{
	float n = -2;

	printf("%g\n", absVal(n));
	printf("%g\n", absVal(5));

	return 0;
}