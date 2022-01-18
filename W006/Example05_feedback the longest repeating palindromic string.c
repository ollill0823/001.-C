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

      scanf ( "%s", str) ; //���]�r��abcdef �����Ӧr��

      //���w�qm=�_�l��m, n=�d��, �q�j���}�l��,���X�W�檺�Y�i����
      for (n = strlen(str) ; n>0 ; n--) {
            done = 0 ;
            for ( m=0; (unsigned int) m+n<=strlen(str) ; m++) {
                        // unsigned �����O�D�t��

                  i = m ;  //�w�q�_�l�I (m, n) = (0,5) ���Ӧr���ߤ@�ŦX�W�檺�u���@��
                  j = m+n-1 ;
                  while ( i< j ) {
                       if (str[i] == str [j]) {
                              i++;    j--;
                              } else {
                              break ; }
                              }
            if (i>=j) {
                  for ( k=m ; k<m+n; k++) {    // ����½���i>=j��, ��r��L�X��
                        printf ("%c", str[k]);
                        }
                        printf ("\n");
                        done = 1;  //��done turn on�᭱�Y�i����
                        }
            }
            if (done) break ;  //�]���ӵۦh�r���}�l�B��,�ҥHdone turn on�Y�i����B��
      }
      return 0;
}
