#include <stdio.h>
int main()
{
    double prices[]={5,10,15,20,25,30,35,40,45,50}; //each element is 8 bytes here. so 80/8=10 is the size

    for(int i=0;i<sizeof(prices)/sizeof(prices[i]);i++)
    {
        printf("$%.2lf\n",prices[i]);
    }

    return 0;
}