#include <stdio.h>

void add(int *x, int *y)
{

    int res;
    res=*x+*y;
    printf("%d",res);

}

int main()
{
    int a=10;
    int b=20;

    add(&a,&b);

    return 0;
    
}

