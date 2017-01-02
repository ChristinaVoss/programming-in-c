#include <stdio.h>
int int_size() {
	unsigned int tmp = ~0;
	int digits = 0;

	do {
		digits++;
		tmp /= 16;
	} while (tmp != 0);

	return digits*4;
}
unsigned int rotate(unsigned int value, int n) {
	unsigned int result, bits;
	if (n < 0)
		n = -(-n % int_size());
	else 
		n = n % int_size();

	if (n == 0)
	{
		result = value;
	} else if (n > 0) {
		bits = value >> (int_size() - n);
		result = value << n | bits;
	} else {
		n = -n;
		bits = value << (int_size() - n);
		result = value >> n | bits;
	}
	return result;
}
int main(void)
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;

	printf("%x\n", rotate(w1, 8));
	printf("%x\n", rotate(w1, -16));
	printf("%x\n", rotate(w2, 4));
	printf("%x\n", rotate(w2, -2));
	printf("%x\n", rotate(w1, 0));
	printf("%x\n", rotate(w1, 44));

	return 0;
}
