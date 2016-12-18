#include <stdio.h>

void auto_static() 
{
	int auto_var = 1;
	static int static_var = 1;

	printf("auto_var is %i and static_var is %i\n", auto_var, static_var);
	auto_var++;
	static_var++;
}
int main(int argc, char const *argv[])
{
	for (int i = 0; i < 5; ++i)
		auto_static();

	return 0;
}