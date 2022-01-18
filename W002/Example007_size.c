 float square(float x)
 {
      return x*x;
}
int main (void)
{
      float x, z;
      scanf("%f",&x);
      printf("%f\n", square(x));
      printf("%f square = %f\n",x,square(x));
      printf("x:%f, square(x): %f\n",x, square(x));
      printf("z:%f\n",z);
      printf("%u bytes\n",sizeof(double));
      printf("%u bytes\n",sizeof(float));
      printf("%u bytes\n",sizeof(x));
      return 0;
}
