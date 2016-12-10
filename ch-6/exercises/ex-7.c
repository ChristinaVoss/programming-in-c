#include <stdio.h>

int main(int argc, char const *argv[])
{
	//step 1.
	int p[200] = {0};
	int i, j, n = 150;

	//step 2 & 3
	for (i = 2; i <= n; ++i)
	{	
		//step 4.
		if (p[i] == 0) 
		{
			printf("%i ", i);

			//step 5.
			for (j = 0; j * i < n; ++j)
			{
				p[j * i] = 1;
			}
		}
	}
	printf("\n");
	return 0;
}
