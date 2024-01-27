//write a C program to scan a string and count the upper case characters in a string and print it
#include <stdio.h>
int main()
{

char a[100];
int count;
printf("enter the string value==>");
fgets(a,100,stdin);

for(int i=0;a[i]!='\0';i++) //instead \0 we can use int strlen and i<len
{
 if(a[i]>=65&&a[i]<=90) //i is index value
 {
    count++;
 } 

}  

printf("no of uppercase letters in %s is %d",a,count);
//write a C program which counts space





return 0;
}