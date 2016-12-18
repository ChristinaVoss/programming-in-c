#include <stdio.h>

int main(void)
{
	void scalarMultiply(int rows, int cols, int matrix[rows][cols], int scalar);
	void displayMatrix(int rows, int cols, int matrix[rows][cols]);

	int sampleMatrix[3][5] = {
		{7, 16, 55, 13, 12},
		{12, 2, 0, 52, 7},
		{ -2, 1, 2, 4, 9}
	};

	printf("Original matrix\n");

	displayMatrix(3, 5, sampleMatrix);

	scalarMultiply(3, 5, sampleMatrix, 2);

	printf("Multiplied by 2.\n");
	displayMatrix(3, 5, sampleMatrix);
}

void scalarMultiply(int rows, int cols, int matrix[rows][cols], int scalar)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			matrix[i][j] *= scalar;
		}
	}

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
}