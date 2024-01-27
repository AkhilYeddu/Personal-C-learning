#include <stdio.h>
#include <string.h>
int main()
{
    char c[]="Milk";
    char t[]="No milk";
    char temp[10];

    // strcpy(temp,c);
    strcat(c,t);
    // strcpy(t,temp);


    // printf("i like %s in my coffee and %s in my tea",c,t);
    printf("%s",c);


    return 0;
}