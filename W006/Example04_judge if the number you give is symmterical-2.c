/* if the number you key in is symmteric */
/* abcba is symmetric ; apple is asymmteric */
# include <stdio.h>
# include <string.h>
int main(void)
{
      char str[1000];
      int i , j ;
      scanf ( "%s", str) ;
      j = strlen(str)-1 ;
      for ( i=0 ; i<j ; i++) {
             if (str[i] == str [j]) {
                   j--;
            }
            else {
               break ; }
      }
      if ( i>=j )
            printf( "Palindrome.\n") ;
      else
            printf ("Not a palindrome.\n") ;
      return 0;
}
