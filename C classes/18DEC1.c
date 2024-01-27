#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    char b[]={'q','u','i','z'};

    int *p;
    char *q;

    p=a;
    q=&b;
    printf("%d\n",*(p+2));
    printf("%c",*(b+3));

    return 0;
}