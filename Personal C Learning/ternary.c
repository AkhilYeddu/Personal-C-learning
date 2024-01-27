//ternary operator = shortcut for if else statements.
//(condition) ? value if true : value if false
#include <stdio.h>

int findM(int a,int b)
{
    return(a>b) ? ("%d",a) : ("%d",b);
}
int main()
{
    int a;
    int b;
    printf("enter the first digit ==>");
    scanf("%d",&a);
    printf("enter the second digit ==> ");
    scanf("%d",&b);

    int x=findM(a,b);


    printf("%d is greater",x);

    
}