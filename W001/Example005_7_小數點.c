#include<stdio.h>
int main(void)
{
      int x;//integer 32-bit
      double y; //64-bit double precision floating point

      x=789;
      y=3.1415;
      //formatted output
      printf("%5d\n",x); //decimal
      printf("%10.5f\n",y); //floating point
      return 0;
}
