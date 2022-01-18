#include <stdio.h>

int main(void)
{
      int x , y, z ;
      int a , b, c ;
      int i ;
      scanf("%d %d %d", &x , &y , &z);
      scanf("%d %d %d", &a , &b , &c);
      printf("Your chosen divisor is x=%d, y=%d, z=%d,\n", x, y, z);
      printf("Your proposal remainder is a=%d, b=%d, c=%d,\n", a, b, c);

      for (i = 1 ; i<=x*y*z ; i++)
      {
                        if (! (i%x!=a ||  i%y!=b || i%z!=c) )
                              //1. && (且) , ||(或), !(否定=not)
                              //2. !若要包含在if內的全部函數,需要用(), 否則只會定義在第一個判斷邏輯上
            {
                  printf("The number is %d\n", i);
                  break;
            }
      }
      return 0 ;
}
