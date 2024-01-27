#include <stdio.h>
int main()
{
    double radius;
    printf("enter the radius of circle in m ==> ");
    scanf("%lf",&radius);
    double circum;
    double area;
    double pi= 3.14159;
    circum= 2*pi*radius;
    printf("circumference of the circle is %.2lf m\n",circum);
    area=pi*radius*radius;
    printf("area of the circle is %.2lf m",area);

    return 0;
}