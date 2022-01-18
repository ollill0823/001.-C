#include <stdio.h>
int main(void)
{
       int a[]={2};
       a[0]=3;
       a[1]=6;
       a[2]=9;
       a[9]=30;
       a[6]=5;
       printf("%d\n", a[0]);
       printf("%d\n", a[1]);
       printf("%d\n", a[2]);
       printf("%d\n", a[3]);
       printf("%d\n", a[4]);
       printf("%d\n", a[5]);
       printf("%d\n", a[6]);
       printf("%d\n", a[10]);
}

