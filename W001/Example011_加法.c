#include <stdio.h>
int main(void)
{
int m, n;
m = 1;
n = 2;
printf(" m = %d, n = %d.\n", m, n);
m = m + n;
printf(" m = %d, n = %d.\n", m, n);
n = n + m;
printf(" m = %d, n = %d.\n", m, n);
return 0;
}
