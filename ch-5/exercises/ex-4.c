#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	float num, accumulator;
	char op;
	bool isError;

	printf("Begin Calculations\n");
	scanf("%f %c", &num, &op);

	while (op != 'E') {
		isError = false;
		switch (op) {
		case 'S':
			accumulator = num;
			break;

		case '+':
			accumulator += num;
			break;

		case '-':
			accumulator -= num;
			break;

		case '*':
			accumulator *= num;
			break;

		case '/':
			if (num != 0) {
				accumulator /= num;
			} else {
				printf("Error: division by zero.\n");
				isError = true;
			}
			break;

		default:
			printf("Invalid Operator.\n");
			isError = true;
			break;
		}
		if (!isError)
			printf("= %f\n", accumulator);

		scanf("%f %c", &num, &op);
	}

	printf("End of Calculations.\n");

	return 0;
}