#include<stdio.h>
int a[40000][10000];

int main(void)
{
      int i, j;
      printf("Go\n");
      for (i=1 ; i<40000;  i++)
      {
      for  (j=1; j<10000; j++)
      {
         a[i][j]= i*j;
      }
      }
      printf("Done\n");
      for (i=1 ; i<10;  i++) //一定得用;隔開,不是,
      {
      for  (j=1; j<10; j++)
      {
         printf("%3d", a[i][j]);
      }
      printf("\n");
      }
      return 0;
}
