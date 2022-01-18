/* give a specific interval , find out all prime number */
/* hint: use for/if/while loop*/
# include<stdio.h>
# define N 100
int A[N+1];   //寫在外面是因為N太大,放外面才可以儲存

int main(void)
{
      int i, j;
      for ( i=0; i<= N; i++) A[i]=1 ;

      for (i=2; i*i<=N; i++) {
           if (A[i]) {
                   for ( j=i*i; j<=N; j=j+i) {   //why we should use j= i*i, because we want to make sure j= i*1 to print A[i]=1
                        A[j]= 0;
                  }
              }
           }
           for(i =2; i<=N; i++){
            if (A[i]) printf("%d, ", i);
      }
}

