#include <stdio.h>

int main(void)
{
	char *message = "Programming in C is fun\n";
	char message2[] = "You said it\n";
	char *format = "x = %i\n";
	int x = 10;

	//set 1
	printf("set 1\n");
	printf("Programming in C is fun\n");
	printf("%s", "Programming in C is fun\n");
	printf("%s", message);
	printf(message); //  warning: format not a string literal and no format arguments [-Wformat-security]
	printf("\n\n\n");

	//set 2
	printf("set 2\n");
	printf("You said it\n");
	printf("%s", message2);
	printf(message2); // warning.
	printf("%s\n", &message2[0]);
	printf("\n\n");

	//set 3
	printf("set 3\n");
	printf("said it\n");
	printf(message2 + 4);
	printf("%s", message2 + 4);
	printf("%s", &message2[4]);

	printf("\n\n\n");
	printf("set 4\n");
	printf("x = %i\n", x);
	printf(format, x);
	return 0;
}
