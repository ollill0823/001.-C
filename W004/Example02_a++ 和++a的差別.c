#include<stdio.h>
int main(void)
{
      int a, b;
      int aplus, plusb;
      a=1;
      b=1;
      aplus=a++; // ��alpus=a �A��a++ --> a=a+1
      plusb=++b; //�� ++b b=b+1; �A��plusb=b
      printf("%d %d %d %d\n",a,aplus,b,plusb);
      return 0;
}
