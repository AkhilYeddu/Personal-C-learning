#include <stdio.h>
int main()
{
    int age;
    printf("enter your age==> ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible to vote.");
    }
    else
    {
        printf("you arent eligible to vote");
    }

    return 0;

}