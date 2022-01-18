#include<stdio.h>
#define ENGLINE 1499.99
int main (void)
{
      printf("~%f~\n", ENGLINE);
      printf("~%e~\n", ENGLINE);
      printf("~%4.2f~\n", ENGLINE);
      printf("~%3.1f~\n", ENGLINE);
      printf("~%10.3f~\n", ENGLINE);
      printf("~%-10.3f~\n", ENGLINE);
      printf("~%12.3e~\n", ENGLINE);
      printf("~%+4.2f~\n", ENGLINE);
      printf("~%010.2f~\n", ENGLINE);
      return 0;
}
