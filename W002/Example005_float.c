#include<stdio.h>
float square(float x)
{
      return x*x;
}
int main (void)
{
      float x;
      scanf("%f",&x);
      printf("%f\n", square(x));
      printf("%f square = %f\n",x,square(x));
      return 0;
}
