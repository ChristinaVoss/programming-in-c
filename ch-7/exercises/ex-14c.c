#include <stdio.h>
#include <stdbool.h>


int arr[3][4] = {
	{1 , 2 , 3 , 4 },
	{5 , 6 , 7 , 8 },
	{9 , 10, 11, 12},
};

int transformed[100][100];
int rows, cols;
bool isTransformed = false;

void displayMatrix();
void transformer();


void transformer()
{
	displayMatrix();
	int tmp;
	transformed[cols][rows];
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			transformed[j][i] = arr[i][j];
			printf("\n"); printf("\n");
			printf("i = %i j = %i\n", i, j);

		}
	}
	tmp = rows;
	rows = cols;
	cols = tmp;
	isTransformed = true;
	displayMatrix();
}

void displayMatrix()
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if(isTransformed)
				printf("%5i ", transformed[i][j]);
			else
				printf("%5i ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
}

int main(int argc, char const *argv[])
{
	rows  = 3;
	cols  = 4;
	transformer();
	return 0;
}
