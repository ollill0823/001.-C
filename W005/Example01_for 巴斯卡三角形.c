#include <stdio.h>

int main(void)
{
      int i, j;
      int a[10][10]= {0};
      a[1][1]= 1;
      for(i=2 ; i<9 ; i++)
      {
            for (j=1; j< i; j++)
            {
            a[i][j]=a[i-1][j-1] + a[i-1][j];
            }
      }

      for(i=0 ; i<9 ; i++)
      {
            for (j=0; j<9; j++)
            {
                  printf("%3d", a[i][j]);
            }
             printf("\n");
      }
      return 0;
}
