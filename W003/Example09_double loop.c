#include<stdio.h>
int main(void)
{
      int i, j;
      i=1;
     printf(" i                  j(x)\n");
     printf("---------------------------------------------------------------------\n");
      while(i<=9)
      {
            printf("i=%d:", i); //%d, %2d�i�H������ƹ���b�᭱�Ʀr;%3d�i�H����b�ʦ�Ʀr
            j=1; //��o�䪺���G�~�|��j�����Ƹ��i�o���ܼ��ܰʪ����|
            while(j<=i)
            {
                  printf("%2d ", i*j);
                  j++;
            }
            printf("\n");
            i++;
      }
      return 0;
}
