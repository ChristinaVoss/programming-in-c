#include <stdio.h>
#include <stdbool.h>


void displayMatrix(int rows, int cols, int matrix[rows][cols]);
void transformer(int rows, int cols, int arr[][cols]);


void transformer(int rows, int cols, int arr[][cols])
{
	displayMatrix(rows, cols, arr);
	int transformed[cols][rows];
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			transformed[j][i] = arr[i][j];
			printf("\n");printf("\n");
			printf("i = %i j = %i\n", i, j);

		}
	}
	displayMatrix(cols, rows, transformed);
}

void displayMatrix(int rows, int cols, int matrix[rows][cols])
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			printf("%5i ", matrix[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
}

int main(int argc, char const *argv[])
{
	int a[3][4] = {
		{1 , 2 , 3 , 4 },
		{5 , 6 , 7 , 8 },
		{9 , 10, 11, 12},
	};

	transformer(3, 4, a);
	return 0;
}
