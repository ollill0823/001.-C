#include<stdio.h>
int main (void)
{
      int width, precision;
      double rate = 123.45;
      printf("Enter a width and a precision: \n");
      scanf("%d%d", &width, &precision);
      printf("rate:'%*.*f'\n",width, precision, rate);
      // %*.*f s代表的是%4.2f, %3.1f 這種 (總共幾個字元).(小數點後面幾位,需要的話會四捨五入)
      return 0;
}
