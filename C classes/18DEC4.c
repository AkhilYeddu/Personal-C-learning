#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int var[n];
    int i,*ptr[n];

    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&var[i]);
        ptr[i]=&var[i];
    }
    for(i=0;i<n;i++){
        printf("var[%d]=%d\n",i,*ptr[i]);
    }
   

    return 0;
}