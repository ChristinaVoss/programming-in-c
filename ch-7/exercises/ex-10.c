#include <stdio.h>
#include <stdbool.h>

int prime(int n)
{
	bool isPrime = true;

	for (int d = 2;  d < n && isPrime;  ++d )
		if ( n % d  ==  0 )
			isPrime = false;

	if ( isPrime )
		return 1;
	else
		return 0;
}

int main(int argc, char const *argv[])
{
	printf("2 is prime %i\n", prime(4));

	return 0;
}