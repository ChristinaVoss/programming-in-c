#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1, num2;

	printf("Enter two numbers:\n");
	scanf("%i %i", &num1, &num2);

	if (num2 == 0)
		printf("Error: division by zero.\n");
	else
		printf("%d / %d = %.3f\n", num1, num2, ((float) num1 / num2));

	return 0;
}