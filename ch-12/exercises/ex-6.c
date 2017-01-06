#include <stdio.h>
#define IS_UPPER(c) c >= 'A' && c <= 'Z'? 1 : 0
#define IS_LOWER(c) c >= 'a' && c <= 'z'? 1 : 0

int main(int argc, char const *argv[])
{
	printf("%i\n", IS_UPPER('A'));
	return 0;
}