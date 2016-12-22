#include <stdio.h>
#include <stdbool.h>

void readLine(char buffer[]) {
	char character; 
	int i = 0;

	do {
		character = getchar();
		buffer[i] = character;
		i++;
	} while ( character != '\n');

	buffer[i - 1] = '\0';
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
