#include <stdio.h>
void swap(int a, int b);
void _swap(int *c,int *d);
int main()
{
    int x=5;
    int y=6;

    swap(x,y);
    
    printf("value of x is %d and value of y is %d",x,y);
    _swap(&x,&y);


    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("value of a is %d and value of b is %d\n",a,b);
 }
void _swap(int *c,int *d)
{
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
    printf("value of c is %d and value of d is %d\n",*c,*d);
}