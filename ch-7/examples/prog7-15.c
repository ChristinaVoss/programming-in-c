#include <stdio.h>

int convertedNum[64];
long int numToConvert;
int base;
int digit = 0;

void getNumAndBase(void)
{
	printf("Enter number:\n");
	scanf("%li", &numToConvert);

	printf("Enter base:\n");
	scanf("%i", &base);

	if (base < 2 || base > 16)
	{
		printf("base is not between 1 to 16\n");
		base = 10;
	}

}

void convertNum(void) 
{
	do {
		convertedNum[digit] = numToConvert % base;
		numToConvert /= base;
		digit++;
	} while (numToConvert != 0);
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
	getNumAndBase();
	convertNum();
	displayConverted();
	printf("\n");
	return 0;
}