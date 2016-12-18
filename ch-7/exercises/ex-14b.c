#include <stdio.h>
#include <stdbool.h>

int arr[5] = {1, 2, 3, 4, 5};
int len = 5;

int sumArray()
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
	printf("sum of these numbers is: %i\n", sumArray());

	return 0;
}