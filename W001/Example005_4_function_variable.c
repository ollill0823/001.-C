#include<stdio.h>
int func1(int);
int func2(int);
int main(void)
{
int z;
printf("main before\n");printf("Func1 after\n");
z=func1(5);
printf("main after\n");
return 0;
}
int func1(int x)
{
int w;
printf("Func1 before\n");
w=func2(x);
printf("Func1 after\n");
return w;
}
int func2(int y)
{
      printf("Func2 before\n");
      printf("%d\n", y);
      printf("Hello World\n");
      printf("Func2 after\n");
      return 0;
}
