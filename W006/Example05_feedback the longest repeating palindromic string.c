/* feedback the longest repeating palindromic string after entering a string*/
/* abcdef -->split to check abcdef, abcde, bcdef, abcd, bcde......eta */
/* example: abcdef
str[0] = a
str[1] = b
str[2] = c
str[3] = d
str[4] = e
str[5] = f

layer              6        5        4        3        2        1
Calculate       1        2        3        4        5        6
*/
# include <stdio.h>
# include <string.h>
int main()
{
      char str[1000];
      int i , j, m,n,k ;
      int done;

      scanf ( "%s", str) ; //假設字元abcdef 為六個字元

      //先定義m=起始位置, n=範圍, 從大的開始算,算到合規格的即可停止
      for (n = strlen(str) ; n>0 ; n--) {
            done = 0 ;
            for ( m=0; (unsigned int) m+n<=strlen(str) ; m++) {
                        // unsigned 指的是非負數

                  i = m ;  //定義起始點 (m, n) = (0,5) 六個字元唯一符合規格的只有一次
                  j = m+n-1 ;
                  while ( i< j ) {
                       if (str[i] == str [j]) {
                              i++;    j--;
                              } else {
                              break ; }
                              }
            if (i>=j) {
                  for ( k=m ; k<m+n; k++) {    // 當對稱翻轉到i>=j時, 把字串印出來
                        printf ("%c", str[k]);
                        }
                        printf ("\n");
                        done = 1;  //把done turn on後面即可停止
                        }
            }
            if (done) break ;  //因為照著多字元開始運算,所以done turn on即可停止運算
      }
      return 0;
}
