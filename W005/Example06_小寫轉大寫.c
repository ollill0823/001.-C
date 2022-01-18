#include <stdio.h>
#include <ctype.h>
int main(void)
{
      char ch;

      while ( (ch = getchar()) != '\n')
      {
            if ( ch>='a'&& ch<='z')  //&&=and
                              {
            putchar(ch-'a' + 'A');
            }
            else
            {
                  putchar (ch);
            }
      }
}
