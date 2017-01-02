#include <stdio.h>
#include <stdlib.h>

int int_size() {
	unsigned short int tmp = ~0; //16 bit on my lenovo g50 gcc
	int digits = 0;
	do {
		digits++;
		tmp /= 16;
	} while (tmp != 0);

	return digits * 4;
}

unsigned int bitpat_get(unsigned int source, int start, int count) {
	int intsize = int_size();
	unsigned int short tmp = ~0;
	source = (source >> (intsize - start - count)) & tmp >> 16 - count;
	return source;
}


int main() {
	unsigned short int tmp;
	char buffer [33];
	itoa (0xe1f4, buffer, 2);
	printf ("bitpat_get: %s\n", buffer);

	tmp = bitpat_get(0xe1f4, 11, 4);

	itoa (tmp, buffer, 2);
	printf ("bitpat_get: %s\n", buffer);
	return 0;
}