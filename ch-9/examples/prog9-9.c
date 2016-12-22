#include <stdio.h>
#include <stdbool.h>


struct dictionary
{
	char word[30];
	char definition[150];
};

bool isEqual(const char str1[], const char str2[]);
int lookup(const struct dictionary dict[], const char search[], const int entries);


int main(void)
{
	struct dictionary d[10] = {
		{"maulik", "maulik is my name."},
		{"lenovo", "I've lenovo laptop"},
		{"shreenathji", "it's jewellers shop"},
		{"yuphoria", "my mobile"},
		{"classmat", "my book"},
		{"casio", "it's a calculator"},
		{"shenheizer", "my headphone"},
		{"logitech", "keyboard and mouse."},
		{"jea", "from thailand"},
		{"microsoft", "bill gates"}
	};

	char search[30];
	int entry;

	printf("Enter search term: ");
	scanf("%29s", search);

	entry = lookup(d, search, 10);

	if (entry != -1)
		printf("%s : %s\n", search, d[entry].definition);
	else
		printf("Match not found\n");

	return 0;
}


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

int lookup(const struct dictionary d[], const char search[], const int entries) {
	int i;
	for (int i = 0; i < entries; ++i)
	{
		if (isEqual(search, d[i].word))
			return i;
	}

	return -1;
}