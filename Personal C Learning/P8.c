#include<stdio.h>
int main()
{
    int sum=0;
    printf("sum of numbers 5 to 50\n");
    for(int i=5;i<=50;i++)
    {
        sum=i+sum;   
    }
    printf("%d",sum);
    return 0;
}