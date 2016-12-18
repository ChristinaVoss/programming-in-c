#include <stdio.h>

int main(void)
{
	void scalarMultiply(int matrix[][5], int scalar);
	void displayMatrix(int matrix[][5]);

	int sampleMatrix[3][5] = {
		{7, 16, 55, 13, 12},
		{12, 2, 0, 52, 7},
		{ -2, 1, 2, 4, 9}
	};

	printf("Original matrix\n");

	displayMatrix(sampleMatrix);

	scalarMultiply(sampleMatrix, 2);

	printf("Multiplied by 2.\n");
	displayMatrix(sampleMatrix);
}

void scalarMultiply(int matrix[][5], int scalar)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			matrix[i][j] *= scalar;
		}
	}

}

void displayMatrix(int matrix[][5])
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%5i ", matrix[i][j]);
		}
		printf("\n");
	}
}