# include <stdio.h>
# include <string.h>

int main(void)
{
      char str[1000];
      int i, j, m, n, k ;
      int done;

      scanf ( "%s" , str ) ;

      for (n= strlen(str) ; n>0; n--) {  //�r���@�w�o���j��p
            done = 0;
            for ( m=strlen(str) ; m>=n; m--) {  //m�Y�O>n, �N�i�H���U��,�]���줸�̤p�O0
                  i = m-n ;
                  j = m-1 ;
                  while ( i < j ) {
                        if ( str [ i ] == str [ j ] ) {
                              i++ ;
                              j-- ;
                        } else {
                        break ; }
                  }
                  if ( i >= j ) {
                  for ( k = m-n ; k < m ; k++) {    //��abcdef�h�Q�̦h�N�O�q str[0] �L�� str[6]
                        printf ( "%c" , str[k] ) ;
                  }
                  printf ( "\n" );
                  done = 1;
                  }
            }
            if (done) break;
      }
      return 0;
}
