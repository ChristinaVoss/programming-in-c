#include <stdio.h>
#include <stdbool.h>

void readLine(char *buffer) {
	char character; 
	
	do {
		character = getchar();
		*buffer = character;
		buffer++;
	} while ( character != '\n');

	*(--buffer) = '\0';
}

int main(void)
{
	char line[90];

	for (int i = 0; i < 3; ++i)
	{
		readLine(line);
		printf("%s\n\n", line);
	}
	
	return 0;
}
