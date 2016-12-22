#include <stdio.h>

int findString(const char str[], const char search[]) {
	int i = 0, j, tmp;

	while (str[i] != '\0') {
		j = 0;
		tmp = i;

		while (search[j] != '\0' && str[tmp] == search[j]) {
			j++; tmp++;
		}

		if (search[j] == '\0')
			return i;
		else
			i++;
	}

	return -1;
}

int main(int argc, char const *argv[])
{
	printf("%i\n", findString("My name is maulik", "name"));
}