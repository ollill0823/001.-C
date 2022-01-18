#include<stdio.h>
#include<string.h>
int main (void)
{
      char STAR[30];
      scanf ("%29s", STAR);
      int i = 1, j = 0;
      while (i <=  strlen(STAR))
      {
      printf("%.*s\n",i, STAR);
      i++;
      }
      return 0;
}
