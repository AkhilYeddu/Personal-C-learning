#include <stdio.h>
void check(char name[],int age); //function prototype

int main()
{
char name[10]="Akhil";
int age=18;

check(name,age);

 return 0;
}
void check(char name[],int age)
{
    printf("hello %s\n you are %d years old",name,age);
}




    


