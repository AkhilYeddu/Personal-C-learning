//write a C program that scans a string and count the number of vowels.
#include <stdio.h>
int main()
{


char a[100];
int count;
printf("enter the word==>");
fgets(a,10,stdin);  //gets(a); 

for(int i=0;a[i]!='\0';i++)
{
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
        count++;
    }
}
printf("no of vowels in the letters==>%d",count);

return 0;
}