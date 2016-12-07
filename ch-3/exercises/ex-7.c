#include <stdio.h>

int main(void) {
	double a = 3.31e-8 * 2.01e-7;
	double b = 7.16e-6 + 2.01e-8;

	double ans = a / b;

	printf("%lg\n", ans);

	return 0;
}