#include <stdio.h>
//ARRAYS= data structre that can can store many values of the same datatype.
int main()
{
    double prices[8]={10.0,15.0,25.0,35.0};
               //prices[i]=index=starts from 0 so prices[0] is $10.00
    prices[5]=60.0; //we declare and give the values later.
    prices[7]=75.0;

    printf("$%.2lf",prices[7]);
    return 0;

}