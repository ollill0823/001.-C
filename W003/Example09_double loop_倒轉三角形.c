#include<stdio.h>
int main(void)
{
      int i, j,z;
      i=1;
     printf(" i                  j(x)\n");
     printf("---------------------------------------------------------------------\n");
      while(i<=9)
      {
            printf("i=%d:", i); //%d, %2d�i�H������ƹ���b�᭱�Ʀr;%3d�i�H����b�ʦ�Ʀr
            j=1; //��o�䪺���G�~�|��j�����Ƹ��i�o���ܼ��ܰʪ����|
           while(j<i)
            {
                  printf("   ");
                  j++;
            }
            while(j<=9)
            {
                  printf("%2d ", i*j);
                  j++;
            }
            z=1;
            while(i<9-z+1) //i<9-z+1 & i<=9-z+1 ���G�|���@��
            {
                  printf("%2d ", i*(9-z+1));
                  z++;
            }
            printf("\n");
            i++;
      }
      return 0;
}
