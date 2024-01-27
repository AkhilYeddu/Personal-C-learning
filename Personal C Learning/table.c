#include <stdio.h>
int main()
{
    int a;
    printf("\n\n*********TABLE PROGRAM*********\n\n");
    printf("enter the value to print the table==> ");
    scanf("%d",&a);

    for(int i=1;i<=10;i++)
    {
        int res=a*i;
        printf("%d*%d==>%d\n",a,i,res);
    }

    return 0;
}