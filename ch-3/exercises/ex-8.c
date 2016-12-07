#include <stdio.h>

int main(void) {
	int i = 256, j = 7;

	int next_multiple = i + j - i % j;
	printf("next multiple is %i\n", next_multiple);

	return 0;
}