#include <stdio.h>
#define shift(n, count) count > 0? n << count : n >> -count

int main(int argc, char const *argv[])
{
	printf("%i\n", shift(4, -1));
	return 0;
}