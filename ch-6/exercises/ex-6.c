#include <stdio.h>

int main(int argc, char const *argv[])
{
	int prev1, prev2, sum, n = 50;

	prev1 = 0;
	prev2 = 1;

	printf("%d %d", prev1, prev2);

	while (sum < n) {
		sum = prev1 + prev2;
		prev1 = prev2;
		prev2 = sum;
		printf(" %i", sum);
	}

	printf("\n");

	return 0;
}