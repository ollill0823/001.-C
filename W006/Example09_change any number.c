// ��ƦC A= {1,2,3,4,5} �����N��ӼƦr�洫
# include <stdio.h>
int A[5] = {1,2,3,4,5};

int main (void)
{

      int a, x,b;
      int i;
      scanf ("%d %d", &a, &b );
      x = A[a-1];
      A[a-1] = A[b-1];
      A[b-1] = x;
      for (int i = 0; i < 5; ++i)
    {
         printf("%d ", A[i]);
    }
      return 0;
}
