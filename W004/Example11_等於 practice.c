#include<stdio.h>
#include<string.h>
int main(void)
{
      int num;
      int sum =0l;
      int status;

      printf("Please enter an integer to be summed");
      printf("(other keys to quit) ");
      status = scanf ("%d", &num); //�P�_�᭱�����A���ȬO�_�O���(1=���,0����D���)
      //�P�_=1�O�]���u���@���F�N&num, �Y������ܼ�&num, &num1 �Y���ߴN�|=2
      while (status == 1) //�Ystatus=1, ���\�|�~�����;���ѷ|�@���],
            //�]�����Ѫ��r���|�@���d��h����,�ä��|�Q����
      {
            sum= sum + num;
            printf("Please enter next integer (other keys to quit) ");
            status = scanf ("%d", &num);
      }
      printf(" Those integers sum to %d.\n", sum);
      return 0;
}
