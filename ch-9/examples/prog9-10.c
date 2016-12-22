#include <stdio.h>
#include <stdbool.h>

struct dictionary
{
	char word[30];
	char definition[150];
};

int lookup(const struct dictionary dict[], const char search[], const int entries);
int compareStrings (const char s1[], const char s2[]);

int main(void)//abcdefghijklmnopqrstvuwxyz
{
	struct dictionary d[10] = {
		{"casio", "it's a calculator"},
		{"classmat", "my book"},
		{"jea", "from thailand"},
		{"lenovo", "I've lenovo laptop"},
		{"logitech", "keyboard and mouse."},
		{"maulik", "maulik is my name."},
		{"microsoft", "bill gates"},
		{"shenheizer", "my headphone"},
		{"shreenathji", "it's jewellers shop"},
		{"yuphoria", "my mobile"}
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


int compareStrings (const char s1[], const char s2[]) {

	int i = 0;

	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
		i++;
	}

	if (s1[i] < s2[i])
		return 1;  //s1 is lower
	else if (s1[i] > s2[i])
		return -1; //s2 is lower
	else 
		return 0;  //equal strings.
}

int lookup(const struct dictionary d[], const char search[], const int entries) {
	int low = 0, high = entries -1;
	int mid;

	while(low <= high) {

		printf("low < = high\n");
		mid = (low + high) / 2;
		if (compareStrings(d[mid].word, search) == 1)
			low = mid + 1;
		else if(compareStrings(d[mid].word, search) == -1)
			high = mid -1;
		else
			return mid;
	}

	return -1;
}
