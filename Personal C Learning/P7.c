#include<stdio.h>
int main()
{
    int x;
    int result=1;
    printf("factorial\n");
    printf("enter the number");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
       result=i*result;
    }
    printf("factorial of %d is %d",x,result);
}