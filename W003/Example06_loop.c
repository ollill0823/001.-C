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
            i=i+1; //i++; or ++i; �]�O�i�H���g�k �ȭ���i=i+1; �Y�Oi=i+2; �N���A�X
      }
      printf("\b\b= %d\n", sum); // \b�N��˰h���O�@��,�|�\���@��, \b\b=�˰h���
      return 0;
}
