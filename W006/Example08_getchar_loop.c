# include <stdio.h>
void display (char cr, int lines, int width)   //�w�q��� display ���]�t�T���ܼ� cr, lines, width
{
      int row , col ;
      for ( row = 1 ; row <=lines ; row++ ) {
            for ( col = 1 ; col <= width ; col ++) {  //list ��V��C���r��, width =cols �]��
                  putchar(cr) ; }
            putchar('\n') ;

      }
}

int main (void)
{
      int ch ;
      int rows, cols ;
      printf ( "Enter a character and two integers:\n" ) ;

      while (( ch=getchar()) !='\n') {  // ���P�_ ch=getchar() �A�P�_!='\n'
            if (scanf ( "%d%d", &rows, &cols ) !=2) break ; //�P�_�ѤJ���r��rows & cols�O�_����Ʀr,�Y���O�������X�h
            display ( ch, rows, cols ) ;  //�w�qdisplay ��Ƥ� ch = cr ; rows = lines ; cols = width
            printf ( "Enter another character and integers; \n" ) ;
            printf ( "Enter a newline to quit.\n") ;
            while ( ch=getchar() !='\n') ; /*�]���A�n��J�T�Ӧr�� ex; a(cr) 4(rows) 5(cols) �ë�Enter����
            �|�h����� while (( ch=getchar()) !='\n') �ҥH�N�����F,�]�����F�קK�o���εo��,�������L*/
           // ���P�_ !='\n' �A�P�_ch=getchar()
            }
            printf ( "Bye.\n" ) ;
      return 0;
}

