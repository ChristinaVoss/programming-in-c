#include <stdio.h>

void strCopy(char *to, char *from) {
	while(*from)
		*to++ = *from++;
	*to = '\0';
}

int main(int argc, char const *argv[])
{
	char name[] = "Maulik";
	char nm[10];

	strCopy(nm, name);

	printf("%s %s\n", name, nm);
	return 0;
}