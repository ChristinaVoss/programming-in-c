#include <stdio.h>

int main(void)
{
	unsigned int w1 = 0xfffffff;

	if (w1 << 31 & 0xf)
		printf("it's doing logical shifting\n");
	else
		printf("it's doing arithmetic shifting\n");
	
	return 0;
}
