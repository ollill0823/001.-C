#include<stdio.h>
int main(void)
{
      char a,b; //字元要用char不能再用int
      scanf ("%c %c", &a, &b);
      /*=下面跟上面的差別是 下面的寫法不能有空白字元,空白字元不行
      scanf("%c",&a);
      scanf("%c",&b);
      */

      while(a<b-1)// 字元才可以比較字元 所以這裡不能寫 while(i<=90)
      {
            printf("%c:  %3d\n",a+1,  a+1);  //%cv代表印出字元(character)
            a++;
      }
      return 0;
}
