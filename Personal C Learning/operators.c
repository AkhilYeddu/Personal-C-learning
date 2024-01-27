//operators A R L B A(Arthimetic>Relational>Logical>Bitwise>Assignment)
#include <stdio.h>
int main()
{
    //assignment operators a+=1 i.e a=a+1; a value gets overwritten
    int a=2;
    a+=1;
    printf("%d\n",a);

    //Relational operators >,<,>=,<=,==,!=
    int b=3;
    int c=43;
    int d=b>c; // gives 0 if > is false
    printf("%d\n",d);
    int e=45;
    e!=c;
    int z= e!=c;
    printf("%d",z);
    //logical operators ||,&&,!
    //bitwise operators $,|,<<,>>,~(not)
    return 0;

}