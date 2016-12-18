# include <stdio.h>
#include <math.h>

float a, b, c;

void get_abc();
double squareRoot ( double x );
double calcDiscriminant();
void calcEquetion();
double absoluteValue ( double x );

int main ( void )
{
    get_abc();
        printf("%g\n", calcDiscriminant());

    if (calcDiscriminant() <= 0) {
        printf("the roots of equition x1 and x2 are imaginary numbers.\n");
    }
    else {
        calcEquetion();
    }
}

void get_abc()
{
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
}

double calcDiscriminant()
{
    double discriminant;

    discriminant = b * b - 4 * a * c;

    return discriminant;
}

void calcEquetion()
{
    double x;

    x = -b + sqrt(calcDiscriminant());
    x /= 2 * a;

    printf("Positive squareRoot: %f\n", x);

    x = -b - sqrt(calcDiscriminant());
    x /= 2 * a;

    printf("Nagative squareRoot: %f\n", x);

}
double squareRoot ( double x )
{
    const double epsilon = 0.0000001;
    double guess = 1.0;

    while ( absoluteValue((guess * guess) / x - 1.0000 ) >= epsilon)
    {
        guess = ( x / guess + guess ) / 2.0;
    }

    return guess;
}

double absoluteValue ( double x )
{
  if ( x < 0 )
  {
    x = -x;
  }
  return x;
}
