#include <stdio.h>
#define IS_UPPER(c) c >= 'A' && c <= 'Z'? 1 : 0
#define IS_LOWER(c) c >= 'a' && c <= 'z'? 1 : 0
#define IS_ALPHABAT(c) IS_UPPER(c) || IS_LOWER(c)

int main(int argc, char const *argv[])
{
	printf("%i\n", IS_ALPHABAT('i'));
	return 0;
}