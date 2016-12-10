#include <stdio.h>

int main(int argc, char const *argv[])
{
	float arr[10], avg;
	int i;

	printf("Enter 10 flaoting numbers:\n");
	for (i = 0; i < 10; ++i)
	{
		scanf("%f", &arr[i]);
		avg += arr[i];
	}

	avg /= 10;

	printf("avg of these ten numbers is %f\n", avg);

	return 0;
}