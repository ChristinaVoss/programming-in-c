#include <stdio.h>

int main(void) {
	int n, n_pow2;

	printf("TABLE OF POWERS OF TWO\n\n");
	printf(" n       2 to the n\n");
	printf("---    ---------------\n");
	n_pow2 = 1;

	for (n = 0; n <= 10; ++n) {
		printf("%2i           %i\n", n, n_pow2); 
		n_pow2 *= 2;
	}
	return 0;
}