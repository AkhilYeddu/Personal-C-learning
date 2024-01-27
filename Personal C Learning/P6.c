#include<stdio.h>
int main()
{

    printf("all odd number from 1 to 50: ");
    for(int i=5;i<=50;i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}