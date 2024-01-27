#include <stdio.h>

int main()
//calculator with arthimetic operators
{
    printf("\n\n**********SIMPLE CALCULATOR**********\n\n");
    int no1;
    int no2;
    int result;
    char opr;
    
    printf("enter the operator(+,-,/,*) ==>");
    scanf("%c",&opr); 
    printf("enter the FIRST No. ==> ");
    scanf("%d",&no1);
    printf("enter the SECOND No. ==> ");
    scanf("%d",&no2);
    
   

    switch(opr)
    {
       case'+' :
       result=no1+no2;
       printf("%d+%d is %d",no1,no2,result);
       break;
       case '-' :
       result=no1-no2;
       printf("%d-%d is %d",no1,no2,result);
       break;
       case '*' :
       result=no1*no2;
       printf("%d*%d is %d",no1,no2,result);
       break;
       case '/' :
       result=no1/no2;
       printf("%d/%d is %d",no1,no2,result);
       break;
       default :
       printf("invalid operator");
       break;
    }

    return 0;

}