#include<stdio.h>
int sum(int a,int b);
void table(int s);
int main()
{
    int a;
    int b;
    printf("enter the first number");
    scanf("%d",&a);
     printf("enter the second number");
    scanf("%d",&b);

    int s=sum(a,b);
    printf("%d\n",s);
    table(s); //actual parameter

    return 0;
}

int sum(int x,int y)
{
    return x+y;    
}

void table(int s) //local parameter
{
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d is %d\n",s,i,i*s);
    }

}