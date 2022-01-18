#include<stdio.h>
#include<string.h>
int main(void)
{
      int num;
      int sum =0l;
      int status;

      printf("Please enter an integer to be summed");
      printf("(other keys to quit) ");
      status = scanf ("%d", &num); //判斷後面的狀態的值是否是整數(1=整數,0等於非整數)
      //判斷=1是因為只有一個騙術&num, 若有兩個變數&num, &num1 若成立就會=2
      while (status == 1) //若status=1, 成功會繼續執行;失敗會一直跑,
            //因為失敗的字元會一直卡住去執行,並不會被拿掉
      {
            sum= sum + num;
            printf("Please enter next integer (other keys to quit) ");
            status = scanf ("%d", &num);
      }
      printf(" Those integers sum to %d.\n", sum);
      return 0;
}
