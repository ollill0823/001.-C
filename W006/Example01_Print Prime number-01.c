#include <stdio.h>
#include <ctype.h>
/* Use num*num < div to analyze */
int main(void)
{
      int div;
      int num;
      int isPrime;
      printf ("Please enter an integer (q to quit): ");

      while( scanf ("%d", &div) != 0)
      {
           printf ("Number %d's factors is ", div);
           for ( num = 2, isPrime = 1; num < div ; num++ )
           if ( div % num == 0)
            {
                  printf("%d, ", num);
                  isPrime=0;
            } //else {} //  若裡面的東西是空白的,可以忽略不寫
            if( num = div && isPrime == 1 ) {
                  printf ("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b%d is a prime number\n", div );
            } else {
            printf ("%d\n",div );
            printf ("Please enter an integer (q to quit): ");
           }
      }
}

