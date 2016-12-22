#include <stdio.h>

void substring(const char str[], int start, int count, char result[]) {
	int i;
	for (i = 0; i < count && str[i+start] != '\0'; ++i)
	{
		result[i] = str[i+start];
	}
	result[i] = '\0';
}

int main(int argc, char const *argv[])
{
	char result[9];
	substring("charcall", 0, 4, result);
	printf("%s\n", result);

	substring("charcall", 4, 4, result);
	printf("%s\n", result);

	return 0;
}