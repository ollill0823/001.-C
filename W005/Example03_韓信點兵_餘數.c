#include <stdio.h>

int main(void)
{
      int x , y, z ;
      int a , b, c ;
      int i ;
      scanf("%d %d %d", &x , &y , &z);
      scanf("%d %d %d", &a , &b , &c);
      printf("Your chosen divisor is x=%d, y=%d, z=%d,\n", x, y, z);
      printf("Your proposal remainder is a=%d, b=%d, c=%d,\n", a, b, c);

      for (i = 1 ; i<=x*y*z ; i++)
      {
        //    if (i%x==a && /*=A*/ i%y==b /*=B*/&& i%z==c /*=C*/ )  //�P�_�O�_�ŦX  �Y�ŦX���ܰ���H�U�ʧ@
                  // ����̭� A ������,�A�ӬOA&B ����,�A�Ӥ~�OA&B&C
            {
                  printf("The number is %d\n", i);
                  break;   //if�ݭn�Ϊ��Ѽ�,�Y��break�N����Xfor�j�� �����~��B���̫�@��
                   //�̫�@��= i=1���i=x*y*z
                   //break�u��}�Ѥ@�h���j��
            }
      }
      return 0 ;
}
