#include <stdio.h>
#define min(x, y) x < y? x : y

int main(int argc, char const *argv[])
{
	printf("%i\n", min(5, 4));
	return 0;
}