#include<stdio.h>
int main(void)
{
      int i='A';

      while(i<='z')// 字元才可以比較字元 所以這裡不能寫 while(i<=90)
      {
            printf("%c:  %3d\n", i ,  i);  //%c代表印出字元(character)
            i++;
      }
      return 0;
}
