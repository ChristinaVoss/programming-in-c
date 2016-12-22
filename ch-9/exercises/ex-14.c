#include <stdio.h>
#include <stdbool.h>
#include <math.h>

float intToStr (int num, char str[]) {
	int tmp = num, divisor = 10, len, i;
	bool isNagative = false;
	//calculate the digits of num.
	tmp = num;
	if (num < 0)
	{
		num = -num;
		isNagative = true;
	}
	if (num == 0 ) {
		len = 1;
	} else {
		len = 0;
		while (tmp != 0) {
			tmp /= 10;
			len++;
		}
	}

	tmp = num;
	len = pow (10, len - 1);

	i = 0;
	if (isNagative) {
		str[i] = '-';
		i++;
	}
	while ( len != 0 ) {
		str[i] = (tmp / len) + '0';
		tmp -= tmp / len * len;
		len /= 10;
		i++;
	}
	str[i] = '\0';

}

int main(int argc, char const *argv[])
{
	char result[9];
	intToStr(245, result);
	printf("%s\n", result);

	intToStr(-2, result);
	printf("%s\n", result);

	intToStr(987, result);
	printf("%s\n", result);

	return 0;
}
