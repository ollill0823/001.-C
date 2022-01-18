# include <stdio.h>
# include <string.h>

int main (void)
{
      int guess = 1;

      printf( "Print an integer from 1 to 100. I will try to guess it.\n" ) ;
      printf( "Respond with a y if my guess is right with an n.\n" ) ;
      printf( "Uh...is your number %d\n", guess ) ;
      while ( getchar() !='y' ) {
            printf( "Well, then, is it %d?\n", ++guess ) ;  //只要不是按y 就會繼續猜數字
           // while (getchar() != '\n') ; // 只要不是\n就會被全部吃掉 繼續回到判斷
            }
      printf ( "I knew I could do it!\n" ) ;
}
