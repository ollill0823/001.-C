#include<stdio.h>
int func1();
int func2();
int main(void)
{
printf("main before\n");printf("Func1 after\n");
func1();
printf("main after\n");
return 0;
}
int func1(void)
{
printf("Func1 before\n");
func2();
printf("Func1 after\n");
return 0;
}
int func2(void)
{
      printf("Func2 before\n");
      printf("Hello World\n");
      printf("Func2 after\n");
      return 0;
}
