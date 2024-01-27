#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//psuedo random numbers= a set of values or elements that are statistically random.
int main()
{
    srand(time(0));

    int number1=(rand()% 9)+ 1;
    int number2=(rand()% 9)+ 1;
    int number3=(rand()% 9)+ 1;     
    int number4=(rand()% 9)+ 1; //computer can generate a number between 0-32,767
                                //add mod to break the limit and computer always start with zero.
                                //if you want limit till 6, then rand()%6+1

    printf("%d",number1);
    printf("%d",number2);
    printf("%d",number3);
    printf("%d",number4);

    return 0;
}
