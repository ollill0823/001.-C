#include<stdio.h>
#include<string.h>
#define BORDER "##########################"
int main (void)
{
      char word[26];
      scanf("%25s", word);
      printf("%.*s\n",  strlen (word)+6, BORDER);
      /*%.*s �N��ݭn��ܨ�p���I����ĴX��*/
      /*strlen (word)+6 �N��A���r���줸�ƪ���,�^�鵹%.* �̭���*,�]���Ӷ��Ǩӻ��n��e��*/
      printf("###%s###\n",  word);
      printf("%.*s\n",  strlen (word)+6, BORDER);
      return 0;
}
