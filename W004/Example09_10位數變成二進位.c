#include<stdio.h>
#include<string.h>
int main (void)
{
      int x;
      scanf("%d", &x);
      while (x>0) //�]�i�H�g��while(x)�N�n  �]��=0�����p�U���|����
      {
      printf("%d", x%2);
      x=x/2;
      }
      return 0;
}
