#include <stdio.h>


int  bit_test (unsigned int  word, int  n)  
{  
    if ( n < 0  || n > 31 )  {
       return  0;  
       printf("n gone\n");
    }
  
    return (word >> (31 - n) & 0x1 );
}  
  
unsigned int  bit_set (unsigned int  word, int  n)  
{  
    if ( n < 0  || n > 31 )  
    {
       return  0;  
       printf("n gone\n");
    }
  
    return  word | (1 << (31 - n));  
}  

int main(int argc, char const *argv[])
{
	printf("%i\n", bit_test(25, 28));
	printf("%i\n", bit_set(25, 28));
	return 0;
}