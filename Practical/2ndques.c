#include<stdio.h>
int main()
{
    int x,y,z;
    
    printf("enter the 1st number: ");
    scanf("%d",&x);
    printf("enter the 2ndt number: ");
    scanf("%d",&y);
    printf("enter the 3rd number: ");
    scanf("%d",&z);
    
    if(x==y&&x==z&&y==z)
    {
        printf("all 3 numbers are equal.");
    }
    else{
        printf("all the numbers are not equal.");
    }


    return 0;
}