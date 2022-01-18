#include<stdio.h>
#include<string.h>

int main (void)
{
      int i, j ;
      char STAR[30];
      scanf ("%29s", STAR);
      i = 1;
      while(i<=strlen(STAR))
      {
      printf("%*.*s\n", strlen(STAR),i, STAR);
      i++;
      }
      return 0;
}
