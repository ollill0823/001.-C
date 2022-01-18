#include<stdio.h>
int main (void)
{
      int x, n;
      int i, sum;
      int a[50];
      printf("How many numbers? (n<50)");
      scanf("%d",&n);
      i=0;
      while (i<n)
      {
            printf("Input a[%d]= ", i);
            scanf("%d",&x);
           // printf("The number is %d\n",x);
            a[i]=x;
            i=i+1;
      }
      i=0;
      sum=0;
      while(i<n)
      {
            printf("%d + ", a[i]);
            sum= sum+a[i];
            i=i+1; //i++; or ++i; 也是可以的寫法 僅限於i=i+1; 若是i=i+2; 就不適合
      }
      printf("\b\b= %d\n", sum); // \b代表倒退的是一格,會蓋掉一格, \b\b=倒退兩格
      return 0;
}
