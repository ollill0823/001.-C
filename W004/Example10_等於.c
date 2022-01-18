#include<stdio.h>
#include<string.h>
int main(void)
{
      int x;
      scanf("%d", &x);
      while (x%2==0)
      {
            printf("%d\n",x);
            x=x/2;
      }
      return 0;
}
