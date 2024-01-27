#include <stdio.h>
// whileloop first checks the condition, then executes if condition is true.
//dowhile loop first always executes teh block of code once, then checks the code.
int main()
{
   int number=0;
   int sum=0;

    
    do{
        printf("enter a number above 0 ==>");
        scanf("%d",&number);
        if(number>0)
        {
            sum+=number;
        }
        
    }while(number>0);
    printf("sum is %d",sum);


    return 0;
}