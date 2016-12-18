#include <stdio.h>
#include <stdbool.h>


unsigned long int getElapsedDays() {
	unsigned long int d1 = 732244;
	unsigned long int d2 = 732445;
	printf("n1: %lu n2: %lu\n", d1, d2);
	return (d1 - d2);
}

int main(int argc, char const *argv[])
{
	unsigned long int elapsedDays;

	elapsedDays = getElapsedDays();
	printf("elapsedDays: %lu\n", elapsedDays);

	return 0;
}

