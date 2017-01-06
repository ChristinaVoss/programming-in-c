#include <stdio.h>
#include <stdlib.h>

#define INT_SIZE 8

unsigned int rotate (unsigned int num, int n) {
	unsigned int bits, result;
	char buffer[9];
	//debug
	if (n < 0) 
		n = - (-n % INT_SIZE);
	else 
		n = n % INT_SIZE;

	if (n == 0)
	{
		result = num;
	} else if (n > 0)
	{
		bits = num >> INT_SIZE - n;
		result = num << n & 0xff | bits; // anded with 0xff because original(real) int size is not 8 here
	} else {
		bits = num << INT_SIZE - n;
		result = num << n & 0xff | bits; // anded with 0xff because original(real) int size is not 8 here
	}

	return result;
}

int main(int argc, char const *argv[])
{
	unsigned int a = rotate(181, 2);

	printf("%u\n", a);
	return 0;
}