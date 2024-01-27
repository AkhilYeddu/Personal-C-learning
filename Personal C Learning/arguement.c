#include <stdio.h>
void intro(char name[],int age)
{
    printf("you are %s\n you are %d years old",name,age);

}
int main()
{
 char name[50]="Bro";
 int age=18;

 intro(name,age);


    
    return 0;
}