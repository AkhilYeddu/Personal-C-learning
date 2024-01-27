#include <stdio.h>
//nestedloops== loop inside a loop, inside loop will get first preference.
int main()
{ 
    int x;
    printf("enter a number between 0 and 100==> ");
    scanf("%d",&x);    
    if(x>=0&&x<=100)
    {
        if(x>50)
        printf("the number is greater than 50 ");
        else if(x==50)
        {
            printf("it is the middle number");
        }
        else{
            printf("the number is not greater than 50");
        }

    }
    else{
        printf("you didnt enter the number between 0 and 100");
    }
    return 0;
}
