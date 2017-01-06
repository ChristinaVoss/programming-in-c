#include <stdio.h>
#define max3(x, y, z) x > y? (x > z ? x : z) : (y > z ? y : z)

int main(int argc, char const *argv[])
{
	printf("%i\n", max3(4, 2, 5));
	return 0;
}