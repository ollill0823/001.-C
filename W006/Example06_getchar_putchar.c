/* ���w�@��input. txt, �bcmd �άOpowershell �̭����Xoutput.txt
1. Change coding to "Release" mode
2. Open bin file, see "Release.exe
3. Open file to bin file.
4. Execute dsds.exe  <input.txt  >output.txt
(< mean get data from input.txt ; > mean output data to output.txt
�bbin��Ƨ��̭�,
*/


# include <stdio.h>
# include <string.h>

int main (void)
{
      char ch ;

      while (( ch = getchar( )) != '@' )    /*�o�˪����p�U �Y���X@�o�Ӧr��,�ä��|�QŪ�X�� ,
       �ѨM��k�N�O��EOF�o�Ӧr���Ӱ����N  */
             putchar (ch) ;

      return 0 ;
}
