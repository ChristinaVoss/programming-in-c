#include <stdio.h>
int int_size() {
	unsigned int tmp = ~0;
	int digits = 0;
	printf("%x\n", tmp);
	do {
		digits++;
		tmp /= 16;
	} while (tmp != 0);

	return digits*4;
}
int main(void)
{
	printf("\n%i\n", int_size());
	return 0;
}
