#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, sum = 0;

	printf("Enter number: ");
	scanf("%i", &n);

	do {
		sum += n % 10;
		n /= 10;
	} while (n != 0);

	printf("sum is %i\n", sum);
	return 0;
}