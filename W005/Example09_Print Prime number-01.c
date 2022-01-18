#include <stdio.h>
#include <ctype.h>
/* Print one integer, then print its prime number other than 1, and order from small to big,
if the number is a prime, presents it is a prime */
int main(void)
{
      int div;
      int num;
      int isPrime;
      printf ("Please enter an integer (q to quit): ");
      scanf ("%d", &div);

      while( num < div )
      {
           for ( num = 2, isPrime = 1; num <div ; num++)
           if ( div % num == 0)
            {
                  printf("%d ,", num);
                  isPrime=0;
            } else {
            }
      }
      if( num = div && isPrime==1)
      {
            printf ("%d is a prime number", div );
      }
      else {
            printf ("%d",div );
      }
}
