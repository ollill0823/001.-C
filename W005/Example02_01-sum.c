#include <stdio.h>

int main(void)
{
      int a[50];
      int i , n;
      int sum;

      scanf("%d", &n);

      for (i=0 , sum=0 ; i<n ; i++)
      {
            scanf ("%d", & a[i] );
            sum= sum + a[i];
      }
      printf("%d\n", sum);
    //  freopen ("testcase.txt", "r", stdin);
     // freopen ("output.txt", "w" , stdout);

      return 0;
}
