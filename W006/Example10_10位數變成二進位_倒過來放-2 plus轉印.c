# include <stdio.h>

int main(void)
{
      int i , j , k_value , a , value ;
      scanf ( "%d", &value);
      k_value = value ;   // ���ĤG�h�ϥ�; ���קK��l��value �Q�˨줣���D�����,���]�U�ӫO�s
      i = 1 ;
      while ( i<=value ) {
                  i = i*2;   //����X i�b�ĴX�h
                  }
                  i =i/2 ; //�]��i=i*2 �|�ɭP i> value
                  while ( i>0 ) {
                        printf ( "%d", value/i ) ; //�L�X�ĴX�h����
                        value = value%i ;  //�q�̤j������T�{
                        i= i/2 ;
                  }
                  printf ( " " ) ;
      value = k_value ;
      a =  value % 2 ;  //���F�n�o��Ĥ@�h���ഫ��,�Ĥ@�h���ȩw�q����̫�@�h�ۦP�h��,���ۦP�h�d
      i=1;
      while ( i<=value ) {
                  i = i*2;
                  }
      i =i/2 ;
                  while ( i>0 ) {

                  printf ( "%d", (a + value/i ) %2 );  // �ۦP�h��,���ۦP�h�d �N�䬰 (a[i] +  a[i-1]) %2
                  a = value/i ;
                  i = i/2 ;
      }

      return 0;
}
