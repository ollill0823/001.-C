#include<stdio.h>
int main(void)
{
      int i, j,z;
      i=9;
     printf(" i                  j(x)\n");
     printf("---------------------------------------------------------------------\n");
      while(i>=1)
      {
            printf("i=%d:", i); //%d, %2d�i�H������ƹ���b�᭱�Ʀr;%3d�i�H����b�ʦ�Ʀr
            j=9; //��o�䪺���G�~�|��j�����Ƹ��i�o���ܼ��ܰʪ����|
            while(i>=9-j+1)
            {
                  printf("%2d ", i*j);
                  j=j-1;
            }
            printf("\n");
            i=i-1;
      }
      return 0;
}
