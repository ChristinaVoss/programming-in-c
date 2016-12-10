#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1, num2;

	printf("Enter two numbers:\n");
	scanf("%i %i", &num1, &num2);

	if (num1 % num2 == 0)
		printf("First is evenly divisible by the second\n");
	else
		printf("First is not evenly divisible by the second\n");

	return 0;
}