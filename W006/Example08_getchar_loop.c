# include <stdio.h>
void display (char cr, int lines, int width)   //定義函數 display 有包含三個變數 cr, lines, width
{
      int row , col ;
      for ( row = 1 ; row <=lines ; row++ ) {
            for ( col = 1 ; col <= width ; col ++) {  //list 橫向綜列的字元, width =cols 因為
                  putchar(cr) ; }
            putchar('\n') ;

      }
}

int main (void)
{
      int ch ;
      int rows, cols ;
      printf ( "Enter a character and two integers:\n" ) ;

      while (( ch=getchar()) !='\n') {  // 先判斷 ch=getchar() 再判斷!='\n'
            if (scanf ( "%d%d", &rows, &cols ) !=2) break ; //判斷書入的字元rows & cols是否為兩數字,若不是直接跳出去
            display ( ch, rows, cols ) ;  //定義display 函數內 ch = cr ; rows = lines ; cols = width
            printf ( "Enter another character and integers; \n" ) ;
            printf ( "Enter a newline to quit.\n") ;
            while ( ch=getchar() !='\n') ; /*因為你要輸入三個字元 ex; a(cr) 4(rows) 5(cols) 並按Enter之後
            會去執行到 while (( ch=getchar()) !='\n') 所以就結束了,因此為了避免這情形發生,直接跳過*/
           // 先判斷 !='\n' 再判斷ch=getchar()
            }
            printf ( "Bye.\n" ) ;
      return 0;
}

