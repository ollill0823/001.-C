 # include <stdio.h>

 int main (void)
 {
       int i , j , input , stored_input, check ;

       scanf ("%d", &input) ;
       stored_input = input ;

       for ( i=1 ; i <=input ; i=i*2 ) {}
       i = i/2 ;
       for ( j = i ; j>0 ; j = j /2  ) {
            printf ( "%d", input/j ) ;
            input = input % j ;
       }
       printf ( " " ) ;
       input = stored_input ;
       check = input % i ;
       for ( j = i ; j>0 ; j = j/2) {
                  printf ( "%d", ( check + input/j ) % 2 ) ;
                  check = input / j ;
                  input = input % j ;
       }
       return 0 ;
 }
