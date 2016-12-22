#include <stdio.h>
#include <stdbool.h>

int stringLength(const char str[]) {
	int count = 0;
	while (str[count] != '\0')
		count++;

	return count;
}

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

int insertString(char str[], char insStr[], int pos) {
	int len = stringLength(str), tmp, shift = stringLength(insStr);

	if ( pos <= len ) {
		//create space for new string to be inserted

		tmp = len + shift;

		while (tmp - shift >= pos) {
			str[tmp] = str[tmp - shift];
			tmp--;
		}
	}

	for (int i = pos; i < shift + pos; ++i)
	{
		str[i] = insStr[i - pos];
	}
}

bool replaceString(char source[], char s1[], char s2[]) {
	int loc = findString(source, s1);
	if (loc != -1) {
		removeString(source, loc, stringLength(s1));
		insertString(source, s2, loc);

		return true;
	} else {
		return false;
	}
}


int main(int argc, char const *argv[])
{
	char str[] = "He is going to be financially free by the age of 25.";
	bool stillFound;

	replaceString(str, "He is", "I'm");

	do {
		stillFound = replaceString(str, " ", "");
	} while (stillFound);

	printf("%s\n", str);
	return 0;
}