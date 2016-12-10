#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int primes[50];
	int i, p, primeIndex = 2;
	bool isPrime;



	primes[0] = 2;
	primes[1] = 3;

	for (i = 5; i <= 50; i += 2 ) {
		isPrime = true;

		for (p = 1; isPrime && i / primes[p] >= primes[p]; p++) {
			if (i % primes[p] == 0)
			{
				isPrime = false;
			}
		}

		if (isPrime ) {
			primes[primeIndex] = i;
			primeIndex++;
		}
	}

	for (i = 0 ; i < primeIndex; i++ ) {
		printf("%i ", primes[i]);
	}

	printf("\n");
	return 0;

}