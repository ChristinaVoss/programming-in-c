#include <stdio.h>

int calcTriangularNum(int n)
{
	int triangularNum = 0, i;

	for (int i = 1; i <= n; ++i)
	{
		triangularNum += i;
	}

	return triangularNum;

}

int main(int argc, char const *argv[])
{
	int counter;
	int calcTriangularNum(int n);
	for ( counter = 1;  counter <= 5;  ++counter ) 
	{
		printf ("Triangular number %i is %i\n\n", counter, calcTriangularNum(counter));
	}

	return 0;
}