#include<stdio.h>
int main(void)
{
      int a[32];
      int x ;
      int i;
      i=0;
      scanf("%d",&x);
        while(x>0)
      {
      a[i]=x%2;
      printf("%d", a[i]);
      i++;
      x=x/2;
      }
      i=i-1;
      while(i>=0)
      {
          printf("%d", a[i]);
          i=i-1;
      }
      return 0;
}
