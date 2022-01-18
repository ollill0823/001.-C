#include <stdio.h>

int main(void)
{
      int a[50];
      int i , n;
      int sum;

      freopen ("testcase.txt", "r", stdin);  //檔案輸入輸出到某檔案去, "r"=輸出的意思
      freopen ("output.txt", "w" , stdout); //"w" =寫入得意思

      scanf("%d", &n);

      for (i=0 , sum=0 ; i<n ; i++)
      {
            scanf ("%d", & a[i] );
            sum= sum + a[i];
      }
      printf("Total = %d\n", sum);
      return 0;
}
