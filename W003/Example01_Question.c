#include<stdio.h>
#include<string.h> // �i�H�Φbdefine strlen �w�q�r�����׳o�Ө��
#define SPEED 0.083 //�i�H�Τ@�w�q�Y��element, 0.083�O�ۤv�w�q��

int main(void)
{
      float minutes, distance;
      int size, letters;
      char name[10];   //character array, string, �N��̭����Q�Ӧr��,�]��[10]
                             /*�q�`�r���̫�i�H�� name[5]="\0"; �άO name[5]=0; ��ܥN����*/
                             /*string ��@�w�n�[�W�����r��*/
      printf("Hi!, What's your first name? \n");
      scanf("%9s", name); /*%s�O�ΦbŪ�r�����ɭ�,�᭱�񪺪F��N��n���character��name���̭�*/
      /*%9s�N���O�̦h�u��J�E�Ӧr��,�W�L���ܴN���|��i�h*/
      /* �Y�[ name[3]='\0',�h�N��uŪname�T�Ӧr��,�b�ĥ|�Ӧr���N�|end;*/
      printf("\nHi, %s, how many minutes does it take to walk form? \n", name );
      printf("Your dormitory to the delta building? \n");
      scanf("%f", &minutes);
      size = sizeof(name);  /*sizeof Ū���w�]����,���O��J����*/
      letters = strlen(name); /*strlen�ھڿ�J�r���M�w����*/

      distance = minutes * SPEED;
      printf("\nThe distance from  your dormitory to the delta building ");
      printf("is about %.2f kilmoeters. \n\n", distance);
      /*.2f �N���O�p���I�᭱�X��*/

      printf("By the way,  your first name has %d letters. \n",letters);
      printf("And we have %d bytes to store it in. \n", size);

      return 0;
}
