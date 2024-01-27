#include <stdio.h>

int main()
{
     const int MAX=3;
    

    int var[]={10,100,200};
    int *ptr[MAX];
    int i;
    for (i=0;i<MAX;i++)
    {
        ptr[i]=&var[i];  //assign the address of integer.
    }
    for(i=0;i<MAX;i++);
    {
        printf("%d\n",*ptr[i]);
    }

    return 0;
}