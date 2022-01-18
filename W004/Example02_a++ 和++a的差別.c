#include<stdio.h>
int main(void)
{
      int a, b;
      int aplus, plusb;
      a=1;
      b=1;
      aplus=a++; // 先alpus=a 再來a++ --> a=a+1
      plusb=++b; //先 ++b b=b+1; 再來plusb=b
      printf("%d %d %d %d\n",a,aplus,b,plusb);
      return 0;
}
