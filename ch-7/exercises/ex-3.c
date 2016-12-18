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
		guess = (n / guess + guess) / 2.0;
	}

	return guess;
}

int main(int argc, char const *argv[])
{

	printf("%g\n", squereRoot(144, .0002));
	printf("%g\n", squereRoot(17.5, .00001));

	return 0;
}