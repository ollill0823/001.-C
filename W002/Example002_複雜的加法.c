#include<stdio.h>
double add (double x, double y); //�ŧi �w�qsquare �γ~
double add (double x, double y) // �i�H��e��,����᭱�]�i�H,�Y��᭱���ܭn���w�q�b�@�}�l
// double ,add ���u�O�Ѽ�name
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
