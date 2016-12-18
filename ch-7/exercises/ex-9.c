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

int lcm (int u, int v) 
{
	int lcm = u * v / gcd (u, v);
	return lcm;
}

int main(int argc, char const *argv[])
{
	printf("GCD for numbers 15 and 10 is %i\n", lcm(15, 10));

	return 0;
}	