#include <stdio.h>
#include <ctype.h>
int main(void)
{
      char ch;

      while ( (ch = getchar()) != '\n')
      {
            if ( ! isupper (ch))
            {
            putchar(toupper(ch));
            }
            else
            {
                  putchar (ch);
            }
      }
     putchar(ch); //因為while內的定義是換行的時後停住,所以就只是把換行這東西print出來
}
