#include<stdio.h>
int main (void)
{
      printf("%s\n",__FILE__); /*這個程式碼檔名*/
      printf("%d\n",__LINE__); /*程式碼的第幾行*/
      printf("%s\n",__func__); /*所在function的名稱 (對應到第二行)*/
      printf("%s\n",__DATE__);
      printf("%s\n",__TIME__);
      return 0;
}
