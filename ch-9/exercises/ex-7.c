#include <stdio.h>

int stringLength(const char str[]) {
	int count = 0;
	while (str[count] != '\0')
		count++;

	return count;
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

int main(int argc, char const *argv[])
{
	char str[] = "My name is Maulik Gangani.";

	insertString(str, " N.", 17);
	printf("%s\n", str);

}