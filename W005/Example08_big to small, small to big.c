#include <stdio.h>
#include <ctype.h>
/* isalpha isdigit toupper tolower islower(是某為小寫字母) isupper */
int main(void)
{
      char ch;
      while ( (ch = getchar()) != '\n')
      {
            if (isupper(ch))
            {
                  putchar(tolower(ch));
            }
            else
            {
               putchar(toupper(ch));
            }
      }
     putchar(ch); // 給while =\n用的
}
