#include <stdio.h>

int convertedNum[64];
long int numToConvert;
int base;
int digit = 0;

void getNumAndBase(void)
{
	printf("Enter number:\n");
	scanf("%li", &numToConvert);

	if (numToConvert == 0)
	{
		return ;
	}
	printf("Enter base:\n");
	scanf("%i", &base);

	while (base < 2 || base > 16)
	{
		printf("base is not between 1 to 16, enter base:\n");
		scanf("%i", &base);
	}
	digit = 0;
}

void convertNum(void)
{
	int tmp = numToConvert;
	do {
		convertedNum[digit] = tmp % base;
		tmp /= base;
		digit++;
	} while (tmp != 0);
}

void displayConverted(void)
{
	char allDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	for (digit--; digit >= 0; digit--)
	{
		printf("%c", allDigits[convertedNum[digit]]);
	}
}
int main(int argc, char const *argv[])
{
	do {
		getNumAndBase();
		convertNum();
		displayConverted();
		printf("\n");
	} while (numToConvert != 0);

	printf("program ended.\n");
	return 0;
}