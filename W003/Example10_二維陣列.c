#include<stdio.h>
int main(void)
{
      int i, j;
      int a[10][10]= {0}; //�����M��, �Y�g(1}�ä��|�����ܦ�1//

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
