#include <stdio.h>
#include <stdbool.h>

int stringLength(const char str[]) {
	int count = 0;
	while (str[count] != '\0')
		count++;

	return count;
}

void removeString(char str[], int start, int rem) {
	int tmp = start;
	int len = stringLength(str);

	if (len < start + rem) //if remove goes outside of range of array
		rem = len - start;

	while (str[start + rem] != '\0') { //remove characters and move them.
		str[tmp] = str[start + rem];
		rem++; tmp++;
	}

	str[tmp] = '\0';
}

long int strToInt (char str[]) {
	int intNo, result = 0;
	bool isNegative = false;
	if (str[0] == '-') {
		removeString(str, 0, 1);
		isNegative = true;
	}

	for (int i = 0; str[i] >= '0' && str[i] <= '9'; ++i)
	{
		intNo = str[i] - '0';
		result = result * 10 + intNo;
	}

	if(isNegative)
		result = -result;

	return result;
}

int main(int argc, char const *argv[])
{
	char num1[] = "-167", num2[] = "99", num3[] = "10x9";
	printf("%li %li %li\n", strToInt(num1), strToInt(num2), strToInt(num3));
	return 0;
}