#include <stdio.h>

float absVal(float n)
{
	if (n < 0) {
		n *= -1;
	}
	
	return n;
}

float squereRoot(float n) 
{
	float guess = 1;
	const float epsilon = .00001;

	if (n < 0) {
		printf("nagative argument to squereRoot function\n");
		return -1.0;
	}
	while (absVal(guess * guess - n) >= epsilon)
	{
		guess = (n / guess + guess) / 2.0;
	}

	return guess;
}

int main(int argc, char const *argv[])
{
	float n = 2;

	printf("%g\n", squereRoot(144));
	printf("%g\n", squereRoot(17.5));

	return 0;
}