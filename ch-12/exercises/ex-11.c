#include <stdio.h>
#include <ctype.h>


int main(int argc, char const *argv[])
{
	char d = '9', a = 'a', s = '*';

 	printf("%i %i %i\n", isupper(d), isalpha(a), isdigit(d));
	
	return 0;
}