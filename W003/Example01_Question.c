#include<stdio.h>
#include<string.h> // 可以用在define strlen 定義字元長度這個函數
#define SPEED 0.083 //可以統一定義某個element, 0.083是自己定義的

int main(void)
{
      float minutes, distance;
      int size, letters;
      char name[10];   //character array, string, 代表裡面有十個字元,因為[10]
                             /*通常字元最後可以用 name[5]="\0"; 或是 name[5]=0; 表示代表結束*/
                             /*string 後一定要加上結尾字元*/
      printf("Hi!, What's your first name? \n");
      scanf("%9s", name); /*%s是用在讀字元的時候,後面放的東西代表要放到character為name的裡面*/
      /*%9s代表的是最多只輸入九個字元,超過的話就不會填進去*/
      /* 若加 name[3]='\0',則代表只讀name三個字元,在第四個字元就會end;*/
      printf("\nHi, %s, how many minutes does it take to walk form? \n", name );
      printf("Your dormitory to the delta building? \n");
      scanf("%f", &minutes);
      size = sizeof(name);  /*sizeof 讀取預設長度,不是輸入長度*/
      letters = strlen(name); /*strlen根據輸入字元決定長度*/

      distance = minutes * SPEED;
      printf("\nThe distance from  your dormitory to the delta building ");
      printf("is about %.2f kilmoeters. \n\n", distance);
      /*.2f 代表的是小數點後面幾位*/

      printf("By the way,  your first name has %d letters. \n",letters);
      printf("And we have %d bytes to store it in. \n", size);

      return 0;
}
