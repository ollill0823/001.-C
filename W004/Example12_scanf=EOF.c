#include<stdio.h>
int main(void)
{
      int x;

      while (scanf("%d",&x) != EOF) //EOF= Ctrl + Z + Enter//
      {
            printf("x=%d\n", x);
      }
        printf("x=%d\n", EOF);
      return 0;
}
