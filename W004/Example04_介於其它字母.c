#include<stdio.h>
int main(void)
{
      char a,b; //�r���n��char����A��int
      scanf ("%c %c", &a, &b);
      /*=�U����W�����t�O�O �U�����g�k���঳�ťզr��,�ťզr������
      scanf("%c",&a);
      scanf("%c",&b);
      */

      while(a<b-1)// �r���~�i�H����r�� �ҥH�o�̤���g while(i<=90)
      {
            printf("%c:  %3d\n",a+1,  a+1);  //%cv�N��L�X�r��(character)
            a++;
      }
      return 0;
}
