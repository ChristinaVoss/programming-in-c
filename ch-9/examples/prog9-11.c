#include <stdio.h>

long int strToInt (const char str[]) {
	int intNo, result = 0;

	for (int i = 0; str[i] >= '0' && str[i] <= '9'; ++i)
	{
		intNo = str[i] - '0';
		result = result * 10 + intNo;
	}

	return result;
}
int main(int argc, char const *argv[])
{
	printf("%li %li %li\n", strToInt("167"), strToInt("99"), strToInt("10x9"));
	return 0;
}