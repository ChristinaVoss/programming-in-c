#include <stdio.h>

int stringLength (const char str[]);

int main(int argc, char const *argv[])
{
	const char name[] = {'m', 'a', 'u', 'l', 'i', 'k'};
	const char passion[] = {'c', 's'};

	
	printf("%i %i\n", stringLength(name), stringLength(passion));

	return 0;
}

int stringLength(const char str[]) {
	int count = 0;
	while(str[count] != '\0')
		count++;

	return count;
}