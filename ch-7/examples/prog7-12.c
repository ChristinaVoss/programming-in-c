#include <stdio.h>

void sort (int arr[], int noe)
{
	int tmp;
	for (int i = 0; i < noe - 1; ++i)
	{
		for (int j = i; j < noe; ++j)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}

		}
	}

}

int main(int argc, char const *argv[])
{
	int scores[] = {63, 10, 99, 44, -2};

	void sort(int arr[], int noe);

	sort(scores, 5);

	for (int i = 0; i < 5; ++i)
	{
		printf("%i ", scores[i]);
	}
	printf("\n");

	return 0;
}