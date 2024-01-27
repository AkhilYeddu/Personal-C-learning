#include <stdio.h>
int main()
{
    char letter;
    printf("enter a letter");
    scanf("%c",&letter);

    if(letter>='A'&&letter<='Z')
    {
        printf("upper case letter");
    }
     else if(letter>='a'&&letter<='z')
    {
        printf("lower case letter");
    }
    else
    printf("not an english alphabet");

}