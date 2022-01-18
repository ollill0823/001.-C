#include<stdio.h>
#define STEP 10
#define LOWER  50
#define Upper 100
int main (void)
{
      int fahr;

      printf("Fahrenheit     Celsius\n");
      printf("--------------------------------\n");

      fahr=LOWER;
      while (fahr<=Upper)
      {
       float celsius;
       celsius= 5*(fahr-32)/9;
       printf("%4d % 15.1f\n", fahr, celsius);
       fahr= fahr+ STEP;
      }
      printf("--------------------------------");
      return 0;
}
