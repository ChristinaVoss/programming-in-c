#include <stdio.h>
#define ABSOLUTE_VALUE(x) x < 0 ? -x : x
int main(int argc, char const *argv[])
{
	printf("%i\n", ABSOLUTE_VALUE(-5));
	return 0;
}