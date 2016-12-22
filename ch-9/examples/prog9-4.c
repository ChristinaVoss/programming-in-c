#include <stdio.h>
#include <stdbool.h>

bool isEqual(const char str1[], const char str2[]) {
	int i = 0;

	while (str1[i] == str2[i] && str1[i] != '\0') {
		i++;
	}

	if (str2[i] == '\0')
	{
		return true;
	} else {
		return false;
	}
}
int main(void)
{
	const char name[] = "maulik";
	const char surname[] = "gangani";
	const char fullName[] = "maulik gangani";

	printf("%i %i %i\n", isEqual(name, fullName), isEqual(name, surname), isEqual(name, "maulik"));
	
	return 0;
}
