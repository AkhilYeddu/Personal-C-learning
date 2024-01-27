#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    while(x%7==0)
    {
         printf("enter a number");
    scanf("%d",&x);
    }
    printf("program stopped as %d is not divisible by 7",x);

    
    return 0;
}