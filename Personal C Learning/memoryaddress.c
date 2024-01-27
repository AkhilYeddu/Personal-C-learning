#include <stdio.h>
//memory= an array of BYTES, within RAM(street)
//memory block= single unit within memory, used to hold some VALUE(person
//memory address= address of memory block where it is located(street address)
int main()
{
    char a='X';                 //char uses 1byte
    char b='Y';                 //int uses 4bytes  //double uses 8 bytes
    char c[10]="Akhil";

    printf("%d bytes\n",sizeof(a));
    printf("%d bytes\n",sizeof(c));
    printf("%p is the address\n",a);
    printf("%p is the address",c); //address is in hexa decimal, i.e 1 to 9 numbers and A to F

return 0;
}