#include <stdio.h>
int main()
{
    int hw;

    printf("how many times you need to print? ");
    scanf("%d",&hw);

    for(int i=0;i<hw;i++)
    {
        printf("hello world!\n");
    }

    return 0;
}