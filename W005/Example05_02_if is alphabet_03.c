#include <stdio.h>
#include <ctype.h>
int main(void)
{
      char ch;

      while ( (ch = getchar()) != '\n')
      {
            if (  islower (ch))
            {
            putchar(toupper(ch));
            }
            else
            {
                  putchar (ch);
            }
      }
     putchar(ch); //�]��while�����w�q�O���檺�ɫᰱ��,�ҥH�N�u�O�⴫��o�F��print�X��
}
