#include <stdio.h>
//write a program that scans a string and prints the result of scanned string.
int main()
{
    // char x[100];
    // printf("enter the string==>");
    // fgets(x,100,stdin);
    // //printf("scanned value is %s",x);
    // printf("scanned value is=");
    // puts(x);
    //write a program that counts no of a's in a given string.
    char a[100];
    int count;
    
    printf("enter the string==> ");
    fgets(a,100,stdin);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='A')
        {
            count++;
        }
    }
    printf("no of A's in the string is %d",count);




    return 0;
}