#include <stdio.h>

void printMessage()
{
	printf("Programming is fun.\n");
}

int main(int argc, char const *argv[])
{
	int i;

	for (int i = 0; i < 5; ++i)
	{
		printMessage();
	}


	return 0;
}