#include <stdio.h>

void concat(char result[], const char str1[], int len1, const char str2[], int len2);

int main(int argc, char const *argv[])
{
	const char s1[] = {'m', 'a', 'u', 'l', 'i', 'k', ' '};
	const char s2[] = {'g', 'a', 'n', 'g', 'a', 'n', 'i'};

	int len1 = 7, len2 = 7;

	char result[14];

	concat(result, s1, len1, s2, len2);

	for (int i = 0; i < len1 + len2; ++i)
	{
		printf("%c", result[i]);
	}
	printf("\n");
	
	return 0;
}

void concat(char result[], const char str1[], int len1, const char str2[], int len2) {
	for (int i = 0; i < len1; ++i)
	{
		result[i] = str1[i];
	}

	for (int j = 0; j < len2; ++j)
	{
		result[len1 + j] = str2[j];
	}
}