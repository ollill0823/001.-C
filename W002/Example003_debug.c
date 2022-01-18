#include <stdio.h>
int main(void)
{
      int fahr, celsius;
      /* 有兩種寫法  另外一種是 int fahr; int celsius; */
      fahr= 52;
      celsius =5*(fahr-32)/9;
      printf("%d degrees Fahrenheit = %d drgrees Celsius.\n", fahr, celsius);
      return 0;
}
