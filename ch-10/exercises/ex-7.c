#include <stdio.h>

void sort (int *arr, int noe)
{
	int tmp;
	int *tmpPtr = &tmp;
	int *lastEl = arr + noe;
	int *j;
	while (arr < lastEl - 1) {

		for (j = arr; j < lastEl; ++j)
		{
			if (*arr > *j)
			{
				*tmpPtr = *arr;
				*arr = *j;
				*j = *tmpPtr;

			}
		}
		arr++;
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