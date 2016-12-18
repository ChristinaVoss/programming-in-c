#include <stdio.h>
#include <stdbool.h>

int sumArray(int arr[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; ++i)
	{
		sum += arr[i];	
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int a[5] = {1, 2, 3, 4, 5};
	printf("2 is prime %i\n", sumArray(a, 5));

	return 0;
}