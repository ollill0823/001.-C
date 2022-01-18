# include <stdio.h>

int main(void)
{
      int i , j , k_value , a , value ;
      scanf ( "%d", &value);
      k_value = value ;
      i = 1 ;
      while ( i<=value ) {
                  i = i*2;
                  }
                  i =i/2 ;
                  while ( i>0 ) {
                        printf ( "%d", value/i ) ;
                        value = value%i ;
                        i= i/2 ;
                  }
                  printf ( " " ) ;
      value = k_value ;
      a =  value % 2 ;
      i=1;
      while ( i<=value ) {
                  i = i*2;
                  }
      i =i/2 ;
                  while ( i>0 ) {
                  printf ( "%d", (a + (value/i) )%2 );
                  a = value/i ;
                  value = value % i ;
                  i = i/2 ;
      }

      return 0;
}
