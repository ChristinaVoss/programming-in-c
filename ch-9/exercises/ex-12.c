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

float strToFloat (char str[]) {
	float intNo, result = 0;
	bool isDeci = false;
	int dividor = 10;
	bool isNegative = false;
	if (str[0] == '-') {
		removeString(str, 0, 1);
		isNegative = true;
	}

	for (int i = 0; (str[i] >= '0' && str[i] <= '9') || str[i] == '.'; ++i)
	{
		if (str[i] == '.')
		{
			isDeci = true;
			removeString(str, i, 1);
		}
		intNo = str[i] - '0';
		if (isDeci)
		{
			result = result + (intNo / dividor);
			dividor *= 10;
		} else {
			result = result * 10 + intNo;
		}
	}

	if (isNegative)
		result = -result;

	return result;
}

int main(int argc, char const *argv[])
{
	char num1[] = "-167.3", num2[] = "99.369", num3[] = "109";
	printf("%f %f %f\n", strToFloat(num1), strToFloat(num2), strToFloat(num3));
	return 0;
}