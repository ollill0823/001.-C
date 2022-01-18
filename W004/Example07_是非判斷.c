#include<stdio.h>
#include<string.h>
int main (void)
{
      int i=5;
    //  printf("%d\n", (i>10)); //可以用1 or 0表示True(T) or False(F)
      /*可以改成以下範例*/
     // while (50)  // 0代表判斷失敗,不會執行, 非代表成功  會一直執行
     while (i<=10)
      {
        printf("%d ", (i<10));
        printf("%d \n", i);
        i++;
      }
      return 0;
}
