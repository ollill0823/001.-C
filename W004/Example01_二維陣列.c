#include<stdio.h>
int main(void)
{
      int i, j;
      int a[10][10]= {0}; //�����M��, �Y�g(1}�ä��|�����ܦ�1//
      a[1][1]=1;
      i=2; //�]��a[0][0], a[1][0], a[0][1], a[1][1] �w�g���Q�w�q�F���ݭn��
      while (i<9)
      {
            j=1;
            while (j<9)
            {
                  a[i][j]= a[i-1][j-1]+a[i-1][j]; /* a[i][j] row, jth column */
                  j=j+1;
            }
            i=i+1;
      }
      i=0;
      while(i<9)
      {
            j=0;
            while(j<9)
            {
                  printf("%2d ", a[i][j]);
                  j++;
            }
            i=i+1;
            printf("\n");
      }
      return 0;
 }
