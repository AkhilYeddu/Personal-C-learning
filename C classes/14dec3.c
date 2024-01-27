//write a program that scans a string and validates for the pattern as shown.
#include <stdio.h>
void check(char a[])
{
    int i;
    

    
    for(int i=0;a[i]='\0';i++)
    {
        if(a[i]=='Z'||a[i]=='z')
        {
           if(a[i-1]&&a[i+1]=='a')
           {
             x="correct";
             return x;
           }
        }
        else
        {
            

        }
    }


}


int main()
{
    char a[100];
    char x[10];

    printf("enter the letters ==>");
    fgets(a,100,stdin);

    

    check(a);
   
    return 0;
}