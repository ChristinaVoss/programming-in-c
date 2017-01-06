#include <stdio.h>

#define printx(n) printf("%i\n", x ## n);


int main(int argc, char const *argv[])
{
	int x1 = 9, x2 = 3, x3 = 5, x4 = 10, x5 = 99;
 	// this does not work, it tries to replace i resulting in printf("%i\n", xi)
	for (int i = 1; i <= 5; ++i)
		printx(i);
	
	return 0;
}