#include<stdio.h>
#include<string.h>
int main (void)
{
      int i=5;
      printf("%d\n", (i<0)*(-1)*i+ (i>0)*i);
      return 0;
}
