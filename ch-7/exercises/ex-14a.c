#include <stdio.h>
#include <stdbool.h>
int n;
int prime()
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
	n = 4;
	printf("4 is prime %i\n", prime());

	return 0;
}