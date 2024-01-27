// adding const to a datatype will make it constant i.e no one can chage it
#include <stdio.h>
int main()
{
   const float pi=3.14;
   float radius;

   printf("enter radius in m==>");
   scanf("%f",&radius);
   //pi=4.15; this will throw read only error if declared
   float peri=2*pi*radius;
   float area=pi*radius*radius;

   printf("perimeter of the circle is ==> %.2f m \n",peri);
   printf("area of the cirlce is ==> %.2f m ",area);


    return 0;

}
