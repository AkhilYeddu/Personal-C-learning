#include <stdio.h>
#include <math.h>

int main()
{
    double s1;
    double s2;
    double hyp;

    printf("enter one side of the RA Triangle ==>");
    scanf("%lf",&s1);
    printf("enter another side of the RA Triangle ==>");
    scanf("%lf",&s2);
    hyp=sqrt(s1*s1+s2*s2);
    printf("hypotenuse is %lf m",hyp); 
    
    return 0;
}