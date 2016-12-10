// Program to reverse the digits of a number

#include <stdio.h>
#include <math.h>

int main ()
{
	int  number, tmp;
	int len;

	printf ("Enter your number.\n");
	scanf ("%i", &number);


	//calculate the digits of number.
	tmp = number;

	if (number == 0 ) {
		len = 1;
	} else {
		len = 0;
		while (tmp != 0) {
			tmp /= 10;
			len++;
		}
	}

	tmp = number;
	len = pow (10, len - 1);

	//print from left to right.
	while ( len != 0 ) {

		switch(tmp / len) {
			case 0:
				printf("zero ");
				break;

			case 1:
				printf("one ");
				break;

			case 2:
				printf("two ");
				break;

			case 3:
				printf("three ");
				break;

			case 4:
				printf("four ");
				break;

			case 5:
				printf("five ");
				break;

			case 6:
				printf("six ");
				break;

			case 7:
				printf("seven ");
				break;

			case 8:
				printf("eight ");
				break;

			case 9:
				printf("nine ");
				break;

		}
		tmp -= tmp / len * len;
		len /= 10;
	}

	printf ("\n");

	return 0;
}