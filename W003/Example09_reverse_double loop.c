#include<stdio.h>
int main(void)
{
      int i, j,z;
      i=9;
     printf(" i                  j(x)\n");
     printf("---------------------------------------------------------------------\n");
      while(i>=1)
      {
            printf("i=%d:", i); //%d, %2d可以讓雙位數對齊在後面數字;%3d可以對齊在百位數字
            j=1; //放這邊的結果才會讓j有重複跟著i這個變數變動的機會
            while(j<=i)
            {
                  printf("%2d ", i*(9-j+1));
                  j=j+1;
            }
                           //需要解決向右對齊的問題//
                                z=1;
                                while(z<=i)
                                {
                                printf("%-2d ", i*z);
                                z=z+1;
                                }
            printf("\n");
            i=i-1;
      }
      return 0;
}
