#include <stdio.h>
#include <string.h> //including this is necessary if we use string function.

int main()
{
   char name[20]="Akhil";
   char name2[20]="Yeddu";
   //strlwr(name); //lowercases the letters.
   //strupr(name); //upercases the letters.
   //strcpy(name2,name); //copies,(x,y) here x is what needs to be replaced and y is what it will replace.
   //strcat(name,name2); //joins two or more strings.
   //strncat(name,name2,1); //(x,y,1) means 1 letter from y will be joined.
   //strncpy(name,name2,3);  //(x,y,4) means only 4 letters will be replaced.
   //strset(name, 'm');  //replaces all characters if a character is given. i.e here akhil is replaced by $
   //strnset(name,'x',2); //replaces x here 2 times
   //strrev(name); //reverse the characters. 
   printf("%s",name);
    return 0;
}