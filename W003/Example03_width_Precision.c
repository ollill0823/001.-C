#include<stdio.h>
int main (void)
{
      int width, precision;
      double rate = 123.45;
      printf("Enter a width and a precision: \n");
      scanf("%d%d", &width, &precision);
      printf("rate:'%*.*f'\n",width, precision, rate);
      // %*.*f s�N���O%4.2f, %3.1f �o�� (�`�@�X�Ӧr��).(�p���I�᭱�X��,�ݭn���ܷ|�|�ˤ��J)
      return 0;
}
