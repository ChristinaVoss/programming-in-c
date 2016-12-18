# include <stdio.h>

//
//  Program 8.8, Stephen Kochan, Programming in C.
//
int main ( void );
float absoluteValue ( float x );
float squareRoot ( float x );

int main ( void )
{
  printf ( "squareRoot ( 4000.0 ) = %f\n", squareRoot ( 4000.0 ) );
  printf ( "squareRoot ( 144.0 ) = %f\n", squareRoot ( 144.0 ) );
  printf ( "squareRoot ( 17.5 ) = %f\n", squareRoot ( 17.5 ) );

  return 0;
}

float absoluteValue ( float x )
{
  if ( x < 0 )
  {
    x = -x;
  }
  return x;
}

float squareRoot ( float x )
{
  const float epsilon = 0.00001;
  float guess = 1.0;

  while ( absoluteValue((guess * guess) / x - 1.0000 ) >= epsilon)
  {
    guess = ( x / guess + guess ) / 2.0;
  }

  return guess;
}