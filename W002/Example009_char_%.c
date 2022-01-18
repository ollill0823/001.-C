 #include<stdio.h>
int main (void)
{
      char ch[10] = {'A', 'B', 'C', 'D','E','F','G','H','I','J'};
      int x;
      scanf("%d",&x);
      printf("%d\n",ch[x%10]);
      printf("%c\n",ch[x%10]);
      printf("%c%c\n",ch[x/10],ch[x%10]);
      printf("%c%c%c\n",ch[x/100], ch[(x/10)%10], ch[x%10]);
      return 0;
}
