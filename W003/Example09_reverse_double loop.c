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
            j=1; //��o�䪺���G�~�|��j�����Ƹ��i�o���ܼ��ܰʪ����|
            while(j<=i)
            {
                  printf("%2d ", i*(9-j+1));
                  j=j+1;
            }
                           //�ݭn�ѨM�V�k��������D//
                                z=1;
                                while(z<=i)
                                {
                                printf("%-2d ", i*z);
                                z=z+1;
                                }
            printf("\n");
            i=i-1;
      }
      return 0;
}
