# include <stdio.h>

int main(void)
{
      int i , j , k , a , value ;
      scanf ( "%d", &value);
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
      return 0;
}
