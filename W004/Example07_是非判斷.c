#include<stdio.h>
#include<string.h>
int main (void)
{
      int i=5;
    //  printf("%d\n", (i>10)); //�i�H��1 or 0���True(T) or False(F)
      /*�i�H�令�H�U�d��*/
     // while (50)  // 0�N��P�_����,���|����, �D�N���\  �|�@������
     while (i<=10)
      {
        printf("%d ", (i<10));
        printf("%d \n", i);
        i++;
      }
      return 0;
}
