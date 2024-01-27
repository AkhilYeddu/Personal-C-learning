#include<stdio.h>
//pointers
int main()
{
    int a[]={1,2,3,4,5};

    int *p;
    int *q;

    p=a; //calling with array name
    q=&a; //calling with array address
    printf("%d\n",*(p+2));
    printf("%d",*(q+4));

    return 0;
}