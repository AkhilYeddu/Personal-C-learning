#include <stdio.h>
//BITWISE OPERATORS: Special operators used in bit level programming.
//(Binary language should be learned for it)
int main()
{
    // & = AND
    // | = OR
    // ^ =XOR
    // << = LEFT SHIFT
    // >> = RIGHT SHIFT
                                     
    int x=6;  //binary style 00000110
    int y=12; //binary style 00001100
    int z=0;  //binary style 00000000

    z=x&y;
    printf("AND = %d\n",z);   //4=00000100
    z=x|y;                    //14=00001110
    printf("OR = %d\n",z);
    z=x^y;                    //only counts 1 and 0 as 1 so 10= 00001010
    printf("XOR = %d\n",z); 
    z=x<<2; //left shift value LS= A*2^B where A is x and B is 2 in this case.
    printf("LEFT SHIFT = %d\n",z);   //Left shift always increase the value.
    z==x>>1; //right shift value RS=A/2^B where A is x and B is 1 in this case.
    printf("RIGHT SHIFT = %d",z); //right shift always halfs the value.
   




    return 0;
}