#include <stdio.h>
int check (int v)
{
      if ( v ) {   //if ���ߥN��v�o�Ө�Ʀ^�Ǫ��O1
      printf("True\n");
      }
      else {   //if �����ߥN���Ʀ^�Ǫ��O0
      printf("False\n");
      }
      return v;
}
int main(void)
{
      int x=5;
      int y=3;
//check �P�_�᪺�޿�άO 0 or 1����,����|�A�^���W����check ��ƥh�P�_
      check (x > 2 && y == 3);
      check ( ! (x > 2 || y == 3) );
      check (x != 0 || !y);
      check (x != y && (20/x)< y);
      check ( !(y>5 || y<2) && !(x%5));
      check (!x && x);

      return 0;
}
