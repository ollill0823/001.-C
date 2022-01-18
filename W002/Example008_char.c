 #include<stdio.h>
int main (void)
{
      char ch[10] = {'A', 'B', 'C', 'D'};
      int x;
      scanf("%d",&x);
      int y;
      scanf("%d",&y);
      printf("%d\n",ch[x]);
      printf("%c\n",ch[x]);
      printf("%d\n",ch[y]);
      printf("%c\n",ch[y]);
      return 0;
}
