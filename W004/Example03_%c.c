#include<stdio.h>
int main(void)
{
      int i='A';

      while(i<='z')// �r���~�i�H����r�� �ҥH�o�̤���g while(i<=90)
      {
            printf("%c:  %3d\n", i ,  i);  //%c�N��L�X�r��(character)
            i++;
      }
      return 0;
}
