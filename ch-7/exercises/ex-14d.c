#include <stdio.h>

int arr[] = {63, 10, 99, 44, -2};
int noe = 5;
char order = 'a';

void sort ()
{
	int tmp;
	if (order == 'a') {
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
	} else {
		for (int i = 0; i < noe - 1; ++i)
		{
			for (int j = i; j < noe; ++j)
			{
				if (arr[i] < arr[j])
				{
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}

			}
		}
	}
}

int main(int argc, char const *argv[])
{

	void sort();

	sort();

	for (int i = 0; i < 5; ++i)
	{
		printf("%i ", arr[i]);
	}

	printf("\n");

	return 0;
}