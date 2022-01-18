#include <stdio.h>
#include <ctype.h>
/* isalpha isdigit toupper tolower islower(是某為小寫字母) isupper */
int main(void)
{
      char ch;
      while ( (ch = getchar()) != '\n')
      {
            putchar( toupper(ch)); /*small letter turns out into chapter*/
            }
     putchar(ch);
}
