#include <stdio.h>
#include <ctype.h>
int main(void)
{
      char ch;

      while ( (ch = getchar()) != '\n') //會先讀ch = getchar() 成功了才會進行做別的事情
            //(ch=getchar()) 外括號是無法少的
      {
            if ( ! isalpha (ch)) //isalpha 判斷是否為英文字元
            {
            putchar(ch); //printf chart(字元)到螢幕上,記住是putchar 不是putchart
            }
            else
            {
                  putchar (ch+1);
            }
      }
     putchar(ch); //因為while內的定義是換行的時後停住,所以就只是把換行這東西print出來
}
