#include<stdio.h>
double square (double x); //�ŧi �w�qsquare �γ~
double square (double x) // �i�H��e��,����᭱�]�i�H,�Y��᭱���ܭn���w�q�b�@�}�l
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
