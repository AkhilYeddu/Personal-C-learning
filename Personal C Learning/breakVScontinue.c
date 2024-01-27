#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==5)
        {
            continue; //skips 5 and prints rest //break it will print till 4, break at 5.
        }
        printf("%d\n",i);
    }

    return 0;
}