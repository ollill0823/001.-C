#include <stdio.h>
int check (int v)
{
      if ( v ) {   //if 成立代表v這個函數回傳的是1
      printf("True\n");
      }
      else {   //if 不成立代表函數回傳的是0
      printf("False\n");
      }
      return v;
}
int main(void)
{
      int x=5;
      int y=3;
//check 判斷後的邏輯或是 0 or 1的值,之後會再回給上面的check 函數去判斷
      check (x > 2 && y == 3);
      check ( ! (x > 2 || y == 3) );
      check (x != 0 || !y);
      check (x != y && (20/x)< y);
      check ( !(y>5 || y<2) && !(x%5));
      check (!x && x);

      return 0;
}
