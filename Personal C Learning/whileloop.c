#include <stdio.h>
#include <string.h>
int main()
//whileloop repeats a section of code possibly unlimited number of times.
//whileloop only runs when the conditions is true, it wont execute until its true.
{
  char name[20]; 
  //size of name;; akhil is string length (strlen)
//   printf("%d\n",strlen(name));
//   printf("%d",sizeof(name));
  printf("what is your name?==> ");
  fgets(name,20,stdin);
  name[strlen(name)-1]= '\0'; //to get rid of the newline character.
  printf("Hello %s! welcome\n",name);
  
while(strlen(name)==0)
{
    printf("you did not enter your name.\n");
    printf("what is your name?==> ");
  fgets(name,20,stdin);
  name[strlen(name)-1]= '\0'; //to get rid of the newline character.
  printf("Hello %s! welcome\n",name);

}
    return 0; 
}