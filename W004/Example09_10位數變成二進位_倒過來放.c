#include<stdio.h>
#include<string.h>
int main (void)
{
      int x;
      int a[32];
      int i;
      i=0;
      scanf("%d", &x);
      while (x>0) //�]�i�H�g��while(x)�N�n  �]��=0�����p�U���|����
      {
      a[i]=x%2;
      i++;
      x=x/2;
      }
      i--; // �]���b�W���@�Ӱj��|��i+1 ��bytes���Q�w�q,����ڤW���Ʀr���u��i��,�ҥH�n�����^��
      while (i>=0)
      {
            printf("%d",a[i]);
            i--;
      }
      return 0;
}
