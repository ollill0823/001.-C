# include <stdio.h>
# include <string.h>

int main (void)
{
      int guess = 1;

      printf( "Print an integer from 1 to 100. I will try to guess it.\n" ) ;
      printf( "Respond with a y if my guess is right with an n.\n" ) ;
      printf( "Uh...is your number %d\n", guess ) ;
      while ( getchar() !='y' ) {
            printf( "Well, then, is it %d?\n", ++guess ) ;  //�u�n���O��y �N�|�~��q�Ʀr
           // while (getchar() != '\n') ; // �u�n���O\n�N�|�Q�����Y�� �~��^��P�_
            }
      printf ( "I knew I could do it!\n" ) ;
}
