#include <stdio.h>
int main(void)
{
int Fahr;
int Celsius;
/* this program need debugging */
Fahr= 52;
Celsius = 9 * (Fahr - 32) / 5;
printf(" %d  Fahr = %d degrees Celsius.\n", Fahr,Celsius );
return 0;
}
