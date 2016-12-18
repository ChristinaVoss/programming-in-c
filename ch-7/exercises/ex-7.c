# include <stdio.h>


long int x_to_n(long int x, int n);

int main ( void )
{
    printf("%li\n", x_to_n(5,3));
    return 0;
}



long int x_to_n (long int x, int n)
{
    long int num = x;
    
    while(n > 1) 
    {
        x = x * num;
        n --;
    }
    return x;
}
