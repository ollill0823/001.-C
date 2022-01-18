#include<stdio.h>
#include<string.h>
int main (void)
{
      int x;
      int a[32];
      int i;
      i=0;
      scanf("%d", &x);
      while (x>0) //也可以寫成while(x)就好  因為=0的情況下不會成立
      {
      a[i]=x%2;
      i++;
      x=x/2;
      }
      i--; // 因為在上面一個迴圈會有i+1 個bytes有被定義,但實際上有數字的只有i個,所以要先扣回來
      while (i>=0)
      {
            printf("%d",a[i]);
            i--;
      }
      return 0;
}
