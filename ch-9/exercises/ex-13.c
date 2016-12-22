#include <stdio.h>

void upper(char str[]) {
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
}


int main(int argc, char const *argv[])
{
	char name[] = "Maulik Gangani";
	upper(name);
	printf("%s\n", name);
	return 0;
}