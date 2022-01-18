#include<stdio.h>
#include<string.h>
#define BORDER "##########################"
int main (void)
{
      char word[26];
      scanf("%25s", word);
      printf("%.*s\n",  strlen (word)+6, BORDER);
      /*%.*s 代表需要表示到小數點之後第幾位*/
      /*strlen (word)+6 代表你打字的位元數的值,回灌給%.* 裡面的*,因為照順序來說要放前面*/
      printf("###%s###\n",  word);
      printf("%.*s\n",  strlen (word)+6, BORDER);
      return 0;
}
