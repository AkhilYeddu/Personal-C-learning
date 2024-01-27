#include <stdio.h>
//pointers= pointers are "variable like reference" that holds memory address of a specific variable,array etc.
//in simple words, pointers are variable which stores the addtress of another variable and can call its value
//some tasks are performed more easily with pointers.
//pointers returns the value stored in address kept in the pointer variable.
//can also be called in functions
void printAge(int *pAge)
{
    printf("you are %d years old.",*pAge); //adding * is called dereferencing
    //if we need to print the value stored in the address, we need to dereference it.
}
int main()
{
    int age=18;
    int *pAge=NULL; //good practice to assign NULL if declaring a pointer.
    pAge=&age;

    printf("address of age: %p\n",&age);
    printf("value of pAge: %p\n",pAge);
    printf("value of age: %d\n",age);
    printf("value stored at pAge: %d\n",*pAge); //adding * returns the value stored at the address.
    

printAge(pAge);


    return 0;
}
// variable==house
//value of variable==person
//address of house==adress of the stored variable