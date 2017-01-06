#include <stdio.h>

#define YES 1
#define NO 0

int isEven(int n) {
	int ans;
	if (n % 2 == 0)
		ans = YES;
	else
		ans = NO;

	return ans;
}

int main(int argc, char const *argv[])
{
	if(isEven(6) == YES)
		printf("6 is even\n");
	else
		printf("6 is not even\n");

	if(isEven(5))
		printf("5 is even\n");
	else
		printf("5 is not even\n");
	return 0;
}