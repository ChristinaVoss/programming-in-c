#include <stdio.h>
#include <stdbool.h>

struct dictionary
{
	char word[30];
	char definition[150];
};

int stringLength(const char str[]) {
	int count = 0;
	while (str[count] != '\0')
		count++;

	return count;
}

int compareStrings (char *s1, char *s2) {

	int i = 0;

	while(*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
		s1++;
		s2++;
	}

	if (*s1 < *s2)
		return 1;  //s1 is lower
	else if (*s1 > *s2)
		return -1; //s2 is lower
	else 
		return 0;  //equal strings.
}

void swap(char s1[], char s2[]) {
	char tmp[100];
	int i = 0;

	while (s1[i] != '\0') {
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = s1[i]; //assign null

	i = 0;
	while (s2[i] != '\0') {
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i]; //assign null

	i = 0;
	while(tmp[i] != '\0') {
		s2[i] = tmp[i];
		i++;
	}
	s2[i] = tmp[i];

}

void sortDictionary(struct dictionary d[], const int entries) {
	for (int i = 0; i < entries - 1; ++i)
	{
		for (int j = i + 1; j < entries; ++j)
		{
			if (compareStrings(d[i].word, d[j].word) == -1)
			{
				swap(d[i].word, d[j].word);
			}
		}
	}
}


int main(void)//abcdefghijklmnopqrstvuwxyz
{
	struct dictionary d[10] = {
		{"maulik", "maulik is my name."},
		{"casio", "it's a calculator"},
		{"microsoft", "bill gates"},
		{"classmat", "my book"},
		{"jea", "from thailand"},
		{"yuphoria", "my mobile"},
		{"logitech", "keyboard and mouse."},
		{"shenheizer", "my headphone"},
		{"lenovo", "I've lenovo laptop"},
		{"shreenathji", "it's jewellers shop"}
	};

	
	sortDictionary(d, 10);

	for (int i = 0; i < 10; ++i)
	{
		printf("%s: %s\n", d[i].word, d[i].definition);
	}

	return 0;
}