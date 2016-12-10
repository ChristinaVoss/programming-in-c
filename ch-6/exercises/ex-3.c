#include <stdio.h>

int main (void)
{
	int  ratingCounters[11], i, response;

	for ( i = 1;  i <= 10;  ++i )
		ratingCounters[i] = 0;

	printf ("Enter your responses\n");

	scanf("%i", &response);

	while (response != 999) {
		if ( response < 1 || response > 10 )
			printf ("Bad response: %i\n", response);
		else
			++ratingCounters[response];

		scanf("%i", &response);
	}


	printf ("\n\nRating   Number of Responses\n");
	printf ("------ -------------------\n");

	for ( i = 1;  i <= 10;  ++i )
		printf ("%4i%14i\n", i, ratingCounters[i]);

	return 0;
}