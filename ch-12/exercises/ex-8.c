#include <stdio.h>
#define IS_UPPER(c) c >= 'A' && c <= 'Z'? 1 : 0
#define IS_LOWER(c) c >= 'a' && c <= 'z'? 1 : 0
#define IS_ALPHABAT(c) IS_UPPER(c) || IS_LOWER(c)
#define IS_DIGIT(c) c >= '0' && c <= '9'
#define IS_SPECIAL(c) !(IS_ALPHABAT(c) || IS_DIGIT(c))

int main(int argc, char const *argv[])
{
	printf("%i\n", IS_SPECIAL('*'));
	return 0;
}