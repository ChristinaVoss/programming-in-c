#include <stdio.h>

void calcTriangularNum(int n)
{
	int triangularNum = 0, i;

	for (int i = 1; i <= n; ++i)
	{
		triangularNum += i;
	}

	printf("Triangular Number %i is %i\n", n, triangularNum);

}

int main(int argc, char const *argv[])
{
	int i;

	for (int i = 5; i < 11; ++i)
	{
		calcTriangularNum(i);
	}	

	return 0;
}