#include<stdio.h>
int func1(int);
int func2(int);
int main(void)
{
printf("main before\n");printf("Func1 after\n");
func1(5);
printf("main after\n");
return 0;
}
int func1(int x)
{
printf("Func1 before\n");
func2(x);
printf("Func1 after\n");
return 0;
}
int func2(int y)
{
      printf("Func2 before\n");
      printf("%d\n", y);
      printf("Hello World\n");
      printf("Func2 after\n");
      return 0;
}
