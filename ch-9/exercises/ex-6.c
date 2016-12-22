#include <stdio.h>

int stringLength(const char str[]) {
	int count = 0;
	while(str[count] != '\0')
		count++;

	return count;
}

void removeString(char str[], int start, int rem) {
	int tmp = start;
	int len = stringLength(str);

	if(len < start + rem) //if remove goes outside of range of array
		rem = len - start;

	while (str[start+rem] != '\0') { //remove characters and move them.
		str[tmp] = str[start + rem];
		rem++; tmp++;
	}

	str[tmp] = '\0';
}

int main(int argc, char const *argv[])
{
	char str[] = "My name is Maulik Gangani.";

	removeString(str, 17, 8);

	printf("%s\n", str);

}