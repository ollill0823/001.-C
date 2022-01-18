#include <stdio.h>
#include <stdio.h>
int main(void)
{
      char ch;
      ch = getchar (); //getchar 是要等你按Enter才會去執行下一個動作

      while ( ch != '\n')
      {
            if ( ! isalpha (ch)) //isalpha 判斷是否為英文字元
            {
            putchar(ch); //printf chart(字元)到螢幕上,記住是putchar 不是putchart
            }
            else
            {
                  putchar (ch+1);
            }
            ch = getchar ();  //繼續讀下一個讀值
      }
}
