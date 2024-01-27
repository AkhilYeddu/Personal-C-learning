// variable= variable is a allocate space in 
//           memory which is used to store some value.
// datatype= the type of value we need.

// int       x    =   31
// datatype  variable   value 
//datatypes: int,char,double,float
//char datatype must have '' in the value
/*
format specifiers for:
int %d
char %C
float %f
array of char %s
double %lf
*/
#include <stdio.h>
int main()
{
    char name[10]="Akhil";
    int age=18;
    char gender='M';
    float temp=97.5;
    double tempf=101.5;
    printf("hi! your name is %s\n",name);
    printf("you are %d years old.\n",age);
    printf("you are %c\n",gender);
    printf("your current body temp is %.2f\n",temp);
    printf("you will get fever you aree %.2lf temp\n",tempf);

    return 0;

}