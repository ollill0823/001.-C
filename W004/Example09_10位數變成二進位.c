#include<stdio.h>
#include<string.h>
int main (void)
{
      int x;
      scanf("%d", &x);
      while (x>0) //也可以寫成while(x)就好  因為=0的情況下不會成立
      {
      printf("%d", x%2);
      x=x/2;
      }
      return 0;
}
