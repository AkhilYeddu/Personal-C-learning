#include <stdio.h>
//enums= enmus are user defined type of named integer identifiers
// makes the program more readable, can be declared inside or outside the main fucntion.
enum Day{Sun=1, Mon=2, Tue=3, Wed=4, Thur=5, Fri=6, Sat=7};
int main()
{
    enum Day today=Fri;
    // printf("%d",today); //note enums arent strings, they display integer values.

    if(today==Sun||today==Sat){
        printf("Its weekend! PARTY TIME!");
    }
    else{
        printf("I have to go to college");
    }
    return 0;
}