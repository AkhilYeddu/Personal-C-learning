#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    while(x%2==0)
    {
        printf("enter a number");
     scanf("%d",&x);
    }
    printf("you entered odd number. program stopped");
    return 0;
}