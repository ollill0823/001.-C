#include <stdio.h>

int main(void)
{
      int a[50];
      int i , n;
      int sum;

      freopen ("testcase.txt", "r", stdin);  //�ɮ׿�J��X��Y�ɮץh, "r"=��X���N��
      freopen ("output.txt", "w" , stdout); //"w" =�g�J�o�N��

      scanf("%d", &n);

      for (i=0 , sum=0 ; i<n ; i++)
      {
            scanf ("%d", & a[i] );
            sum= sum + a[i];
      }
      printf("Total = %d\n", sum);
      return 0;
}
