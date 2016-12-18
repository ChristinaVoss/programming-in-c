#include <stdio.h>

void multiplyBy2 (float arr[], int noe) 
{
	for (int i = 0; i < noe; ++i)
		arr[i] *= 2;
}

int main(int argc, char const *argv[])
{
	float scores[] = {63.3, 99.1, 46.6, -2.3};

	void multiplyBy2(float arr[], int noe);

	multiplyBy2(scores, 4);

	for (int i = 0; i < 4; ++i)
	{
		printf("%g ", scores[i]);
	}
	printf("\n");

	return 0;
}