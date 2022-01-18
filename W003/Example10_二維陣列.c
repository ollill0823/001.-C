#include<stdio.h>
int main(void)
{
      int i, j;
      int a[10][10]= {0}; //全部清成, 若寫(1}並不會全部變成1//

      i=1;
      while (i<9)
      {
            j=1;
            while (j<9)
            {
                  a[i][j]= i*j; /* a[i][j] row, jth column */
                  j=j+1;
            }
            i=i+1;
      }
      i=1;
      while(i<9)
      {
            j=1;
            while(j<9)
            {
                  printf("%3d ", a[i][j]);
                  j=j++;
            }
      return 0;
}
