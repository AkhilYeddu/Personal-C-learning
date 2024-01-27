#include <stdio.h>
#include <ctype.h>
int main()
{
     char word[1000];
     char upper;
     
fgets(word,1000000,stdin);

if(word[0]>='a'&&word[0]<='z')
{
    word[0]=word[0]-('a'-'A');
}
printf("%s",word);



    return 0;
}

