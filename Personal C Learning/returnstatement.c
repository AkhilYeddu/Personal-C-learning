#include <stdio.h>
//return statement==returns value back to the calling fucntion
double square(double x)
{
  double result=x*x;
  return result;
}
int main()
{
   double x=square(4.114);
   printf("%lf",x);

   return 0;

    
}