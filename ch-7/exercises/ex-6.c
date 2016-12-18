# include <stdio.h>

//
//  Program 8.8, Stephen Kochan, Programming in C.
//
int main ( void );
double absoluteValue ( double x );
double squareRoot ( double x );

int main ( void )
{
  printf ( "squareRoot ( 4000.0 ) = %f\n", squareRoot ( 4000.0 ) );
  printf ( "squareRoot ( 144.0 ) = %f\n", squareRoot ( 144.0 ) );
  printf ( "squareRoot ( 17.5 ) = %f\n", squareRoot ( 17.5 ) );

  return 0;
}

double absoluteValue ( double x )
{
  if ( x < 0 )
  {
    x = -x;
  }
  return x;
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