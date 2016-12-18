#include <stdio.h>

int gcd(int u, int v)
{
	int tmp;

	while(v != 0) 
	{
		tmp = u % v;
		u = v;
		v = tmp;
	}
	
	return u;
}

int main(int argc, char const *argv[])
{
	printf("GCD for numbers 150 and 25 is %i\n", gcd(150, 25));
	printf("GCD for numbers 1026 and 405 is %i\n",  gcd (1026, 405));

	return 0;
}