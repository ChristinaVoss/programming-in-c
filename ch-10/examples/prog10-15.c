#include <stdio.h>

int strLength(char *str) {
	char *start = str;

	while(*str)
		str++;
	return str - start;
}

int main(int argc, char const *argv[])
{
	char name[] = "Maulik";

	printf("%i\n", strLength(name));
	return 0;
}