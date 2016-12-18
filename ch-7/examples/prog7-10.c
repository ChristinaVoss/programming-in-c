#include <stdio.h>

int minimum (int arr[], int noe) 
{
	int min = arr[0];
	int tmp;

	for (int i = 0; i < noe; ++i)
		if (min > arr[i])
			min = arr[i];

	return min;
}

int main(int argc, char const *argv[])
{
	int scores[] = {63, 99, 52, 71, 83, 77, 38, 64, 90, 85, 89, 74, 46};
 	int min;

	int minimum(int arr[], int noe);

	printf("minimum score is: %i\n", minimum(scores, 13));

	return 0;
}