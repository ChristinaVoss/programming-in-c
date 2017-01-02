#include <stdio.h>
#include <stdlib.h>

int word_size(unsigned int word) {
	int digits = 0;
	do {
		digits++;
		word /= 2;
	} while (word != 0);

	return digits;
}

void bitpat_search(unsigned int *source, unsigned int to, int left, int count) {
	//set specified bits to zero.
	char buffer[33];
	int tmp;
	int size = word_size(*source);
	printf("size: %i\n", size);
	unsigned int shifter = ~0;
	
	tmp = count;
	while(count > 0) {
		*source &= ~(1 << size - count - left);
		//printf("while %i\n", size - count - left);
		count--;
	}
	itoa (*source, buffer, 2);
	printf ("set zero: %s\n", buffer);

	//set variable 'to' for specified bits.
	count = tmp;
	to <<= size - left - count;
	itoa (to, buffer, 2);
	printf ("to: %s\n", buffer);

	*source |= to;
}

int main() {
	unsigned int tmp = 0xe1f4;
	char buffer[33];
	itoa (tmp, buffer, 2);
	printf ("before: %s\n", buffer);
	bitpat_search(&tmp, 5, 8, 3);
	itoa(tmp, buffer, 2);
	printf("final: %s\n", buffer);
	return 0;
}