// Program to reverse the digits of a number

#include <stdio.h>
#include <stdbool.h>

int main ()
{
	int  number, right_digit;
	bool isNegative = false;

	printf ("Enter your number.\n");
	scanf ("%i", &number);
	
	if(number < 0) {
		isNegative = true;
		number = -number;
	}

	do {
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;
	}
	while ( number != 0 );

	if (isNegative)
	{
		printf("-");
	}

	printf ("\n");

	return 0;
}