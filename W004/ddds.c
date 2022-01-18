#include<stdio.h>
int main(void)
{
      int x ,y, i , j ;
      int a[10][10] = {0};
      scanf ("%d", &x);
      scanf("%d",&y);
      a[1][1]=1;
      i=2;
      while(i<9)
      {
           j=1;
           while (j<9)
      {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
            j++;
      }
      i++;
      }
      i=0;
      while(i<=x)
      {
            j=0;
            while(j<=y)
            {
            printf("%4d ", a[i][j]);
            j++;
            }
            i++;
            printf("\n");
      }
      return 0;
}
