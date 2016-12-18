#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned long int factorial(int n);

	int n = 5;

	printf("%li\n",factorial(n));

	return 0;
}

unsigned long int factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}