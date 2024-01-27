#include <stdio.h>
#include <string.h>


int main(){
    int i;


char str1[10]="Bro";
char str2[10]="Code";

while(str1[i]!='\0')
{
    i++;

}

for(int j=0;str2[j]!='\0';++i; ++j)
{
   str1[i]=str2[j];

}
printf("%s",str1);



return 0;
}
