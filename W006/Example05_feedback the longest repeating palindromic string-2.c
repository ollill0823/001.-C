# include <stdio.h>
# include <string.h>

int main(void)
{
      char str[1000];
      int i, j, m, n, k ;
      int done;

      scanf ( "%s" , str ) ;

      for (n= strlen(str) ; n>0; n--) {  //字元一定得重大到小
            done = 0;
            for ( m=strlen(str) ; m>=n; m--) {  //m若是>n, 就可以停下來,因為位元最小是0
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
                  for ( k = m-n ; k < m ; k++) {    //用abcdef去想最多就是從 str[0] 印到 str[6]
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
