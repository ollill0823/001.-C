#include<stdio.h>
int main (void)
{
      printf("%s\n",__FILE__); /*�o�ӵ{���X�ɦW*/
      printf("%d\n",__LINE__); /*�{���X���ĴX��*/
      printf("%s\n",__func__); /*�Ҧbfunction���W�� (������ĤG��)*/
      printf("%s\n",__DATE__);
      printf("%s\n",__TIME__);
      return 0;
}
