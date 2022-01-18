#include <stdio.h>
#include <ctype.h>
/* isalpha isdigit toupper tolower islower isupper */
int main(void)
{
      char ch;
      while ( (ch = getchar()) != '\n')
      {
            putchar( tolower(ch)); //轉換小寫便大寫
            }
     putchar(ch);
}
