#include<stdio.h>
int main(void)
{
      int i, j;
      i=1;
     printf(" i                  j(x)\n");
     printf("---------------------------------------------------------------------\n");
      while(i<=9)
      {
            printf("i=%d:", i); //%d, %2d可以讓雙位數對齊在後面數字;%3d可以對齊在百位數字
            j=1; //放這邊的結果才會讓j有重複跟著i這個變數變動的機會
            while(j<=i)
            {
                  printf("%2d ", i*j);
                  j++;
            }
            printf("\n");
            i++;
      }
      return 0;
}
