#include <stdio.h>
#include <stdbool.h>


struct months
{
	int days;
	char name[4];
};


int main(void)
{
	struct months m[12] = {
		{31, {'j', 'a', 'n', '\0'}}, {28, {'f', 'a', 'b', '\0'}},
		{31, {'m', 'a', 'r', '\0'}}, {30, {'a', 'p', 'r', '\0'}},
		{31, {'m', 'a', 'y', '\0'}}, {30, {'j', 'u', 'n', '\0'}},
		{31, {'j', 'u', 'l', '\0'}}, {31, {'a', 'u', 'g', '\0'}},
		{30, {'o', 'c', 't', '\0'}}, {31, {'s', 'e', 'p', '\0'}},
		{30, {'n', 'o', 'v', '\0'}}, {31, {'d', 'e', 'c', '\0'}}
	};
		printf("Month    Number of Days\n");
		printf("-----    --------------\n");
	for (int i = 0; i < 12; ++i)
	{
		printf(" %s            %i\n", m[i].name, m[i].days);
	}

	return 0;
}

