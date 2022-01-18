#include<stdio.h>
double add (double x, double y); //宣告 定義square 用途
double add (double x, double y) // 可以放前面,但放後面也可以,若放後面的話要先定義在一開始
// double ,add 都只是參數name
{
      return x*y;
}

int main(void)
{
      double x;
      x=3.2;
      printf("%f\n",  add (x, 4.5));
      return 0;
}
