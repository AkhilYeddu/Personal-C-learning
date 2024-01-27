#include <stdio.h>
int main()
{
    int x;
    int sum=0;
    printf("enter a number till where you want to add.");
    scanf("%d",&x);
    for(int i=x;i>=1;i--)
    {
        sum=sum+i;
        printf("%d\n",i);
    }
    printf("sum is %d",sum);

    return 0;
}