#include <stdio.h>
#include <ctype.h>
int main(void)
{
      char ch;

      while ( (ch = getchar()) != '\n') //�|��Ūch = getchar() ���\�F�~�|�i�氵�O���Ʊ�
            //(ch=getchar()) �~�A���O�L�k�֪�
      {
            if ( ! isalpha (ch)) //isalpha �P�_�O�_���^��r��
            {
            putchar(ch); //printf chart(�r��)��ù��W,�O��Oputchar ���Oputchart
            }
            else
            {
                  putchar (ch+1);
            }
      }
     putchar(ch); //�]��while�����w�q�O���檺�ɫᰱ��,�ҥH�N�u�O�⴫��o�F��print�X��
}
