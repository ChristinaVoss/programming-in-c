#include <stdio.h>

void concat(char result[], const char str1[], const char str2[]);

int main(void)
{
	const char s1[] = {'m', 'a', 'u', 'l', 'i', 'k', ' ', '\0'};
	const char s2[] = {'g', 'a', 'n', 'g', 'a', 'n', 'i', '\0'};
	char result[30];

	concat(result, s1, s2);

	printf("%s\n", result);
	
	return 0;
}

void concat(char result[], const char str1[], const char str2[]) {
	int i, j;

	for (i = 0; str1[i] != '\0'; ++i)
	{
		result[i] = str1[i];
		printf("*%c\n", result[i]);
	}

	for (j = 0; str2[j] != '\0'; ++j)
	{
		result[i + j] = str2[j];
	}

	result[i + j] = '\0'; 
}