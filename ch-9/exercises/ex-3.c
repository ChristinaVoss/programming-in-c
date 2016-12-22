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

bool isAlphaNumeric(const char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '\'' || c == '.' || c == ',' || c == '-' || c == '+')
	{
		return true; //this also handles period, comma, negative numbers.
	}
	else {
		return false;
	}
}



int countWords(const char str[]) {
	bool isLooking = true;
	int count = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (isAlphaNumeric (str[i]))
		{
			if (isLooking)
			{
				isLooking = false;
				count++;
			}
		} else {
			isLooking = true;
		}
	}

	return count;
}

int main(void)
{
	char line[90];
	for (int i = 0; i < 3; ++i)
	{
		readLine(line);
		printf("%s .... %i words\n\n", line, countWords(line));
	} 
	
	return 0;
}
