/* 給定一個input. txt, 在cmd 或是powershell 裡面給出output.txt
1. Change coding to "Release" mode
2. Open bin file, see "Release.exe
3. Open file to bin file.
4. Execute dsds.exe  <input.txt  >output.txt
(< mean get data from input.txt ; > mean output data to output.txt
在bin資料夾裡面,
*/


# include <stdio.h>
# include <string.h>

int main (void)
{
      char ch ;

      while (( ch = getchar( )) != '@' )    /*這樣的情況下 若打出@這個字元,並不會被讀出來 ,
       解決方法就是用EOF這個字元來做取代  */
             putchar (ch) ;

      return 0 ;
}
