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
        //    if (i%x==a && /*=A*/ i%y==b /*=B*/&& i%z==c /*=C*/ )  //判斷是否符合  若符合的話執行以下動作
                  // 條件裡面 A 先成立,再來是A&B 成立,再來才是A&B&C
            {
                  printf("The number is %d\n", i);
                  break;   //if需要用的參數,若打break代表跳出for迴圈 不用繼續運算到最後一刻
                   //最後一刻= i=1算到i=x*y*z
                   //break只能破解一層的迴圈
            }
      }
      return 0 ;
}
