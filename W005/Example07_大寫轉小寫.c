#include <stdio.h>
#include <ctype.h>
/* isalpha isdigit toupper tolower islower isupper */
int main(void)
{
      char ch;
      while ( (ch = getchar()) != '\n')
      {
            putchar( tolower(ch)); //�ഫ�p�g�K�j�g
            }
     putchar(ch);
}
