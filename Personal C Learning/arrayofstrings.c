#include <stdio.h>
#include <string.h>
int main()
{
    char cars[][10]={"BMW","Mustang","Ford","Mercedes","Lambo","Audi"};

    strcpy(cars[1],"Dodge");

    for(int i=0;i<=sizeof(cars)/sizeof(cars[0]);i++)
    {
        printf("%s\n",cars[i]);
    }

    return 0;
}