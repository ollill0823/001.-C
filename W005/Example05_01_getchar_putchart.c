#include <stdio.h>
int main(void)
{
      char ch;
      ch = getchar (); //getchar �O�n���A��Enter�~�|�h����U�@�Ӱʧ@

      while ( ch != '\n')
      {
            if (ch == ' ')
            {
            putchar(ch); //printf chart(�r��)��ù��W,�O��Oputchar ���Oputchart
            }
            else
            {
                  putchar (ch+1);
            }
            ch = getchar();  //�~��Ū�U�@��Ū��
      }
}
