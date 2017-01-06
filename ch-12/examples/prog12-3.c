#include <stdio.h>
#include "matric.h"

int main(int argc, char const *argv[])
{
	float liters, gallons;

	printf("*** Liters to Gallons ***\n\n");
	printf("Enter the number of Liters: ");
	scanf("%f", &liters);

	gallons = liters * QUARTS_PER_LITER / 4.0;

	printf("%g liters = %g gallons\n", liters, gallons);
	return 0;
}