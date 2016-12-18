#include <stdio.h>

float absVal(float n)
{
	if (n < 0) {
		n *= -1;
	}
	
	return n;
}

float squereRoot(float n, float epsilon) 
{
	float guess = 1;

	if (n < 0) {
		printf("nagative argument to squereRoot function\n");
		return -1.0;
	}

	while (absVal(guess * guess - n) >= epsilon)
	{
		printf("(%f / %f + %f) / 2.0 = ", n, guess, guess);
		guess = (n / guess + guess) / 2.0;
		printf("%f\n", guess);
	}

	return guess;
}

int main(int argc, char const *argv[])
{
	printf("%g\n\n\n\n", squereRoot(4000	, .00001));
	printf("%g\n", squereRoot(17.5, .00001));

	return 0;
}