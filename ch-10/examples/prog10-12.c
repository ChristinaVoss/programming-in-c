#include <stdio.h>

int sumArray(int *int_pointer, const int n) {
	int *endArray = int_pointer + n;
	int sum = 0;

	while(endArray > int_pointer) {
		sum += *int_pointer;
		++int_pointer;
	}
	
	return sum;
}

int main(int argc, char const *argv[])
{
	int arr[5] = {1, 2, 3, 4, 5};

	int sum = sumArray(arr, 5);

	printf("%i\n", sum);

	return 0;
}