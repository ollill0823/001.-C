# include <stdio.h>

int main(void)
{
      int i , j , k_value , a , value ;
      scanf ( "%d", &value);
      k_value = value ;   // 給第二層使用; 為避免原始的value 被弄到不知道什麼值,先設下來保存
      i = 1 ;
      while ( i<=value ) {
                  i = i*2;   //先找出 i在第幾層
                  }
                  i =i/2 ; //因為i=i*2 會導致 i> value
                  while ( i>0 ) {
                        printf ( "%d", value/i ) ; //印出第幾層的值
                        value = value%i ;  //從最大的往後確認
                        i= i/2 ;
                  }
                  printf ( " " ) ;
      value = k_value ;
      a =  value % 2 ;  //為了要得到第一層的轉換值,第一層的值定義為跟最後一層相同則轉,不相同則留
      i=1;
      while ( i<=value ) {
                  i = i*2;
                  }
      i =i/2 ;
                  while ( i>0 ) {

                  printf ( "%d", (a + value/i ) %2 );  // 相同則轉,不相同則留 意思為 (a[i] +  a[i-1]) %2
                  a = value/i ;
                  i = i/2 ;
      }

      return 0;
}
