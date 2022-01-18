#include<stdio.h>
int main(void)
{
      int i, j;

      for (i=1 ; i<10;  i++) //一定得用;隔開,不是,
      {
      for  (j=1; j<10; j++)
      {
         printf("%3d", i*j);
      }
      printf("\n");
      }
      return 0;
}
