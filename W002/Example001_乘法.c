#include<stdio.h>
double square (double x); //宣告 定義square 用途
double square (double x) // 可以放前面,但放後面也可以,若放後面的話要先定義在一開始
{
      return x*x;
}

int main(void)
{
      double x;
      x=3.33;
      printf("%f square is %f\n", x, square (x));
      printf("%3.1f square is %3.2f\n", x, square (x));
      return 0;
}
