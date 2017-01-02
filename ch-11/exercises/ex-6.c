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

int bitpat_search(unsigned int source, unsigned int pattern, int n) {
	int intsize = int_size();
	int i = 0;
	int tmp;
	//char buffer [33];

	while (i <= intsize - n) {
		tmp = (source >> (intsize - n - i)) & 0x7;
		//debug
		//itoa (tmp, buffer, 2);
		//printf ("binary: %s\n", buffer);
		if (tmp == pattern)
		{
			return  i;
		}
		else {
			i++;
		}
	}

	return -1;
}


int main() {
	printf("%i\n", bitpat_search(0xe1f4, 0x5, 3));
	return 0;
}