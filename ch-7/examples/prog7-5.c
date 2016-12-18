#include <stdio.h>

void gcd(int u, int v)
{
	int tmp;
	printf("GCD for numbers %i and %i is ", u, v);

	while(v != 0) 
	{
		tmp = u % v;
		u = v;
		v = tmp;
	}
	
	printf("%i\n", u);
}

int main(int argc, char const *argv[])
{
	gcd (150, 35);
	gcd (1026, 405);
	
	return 0;
}