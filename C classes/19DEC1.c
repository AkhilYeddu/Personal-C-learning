#include <stdio.h>
#include <string.h>
//structre SYNTAX
struct Student
{
    char name[20];
    int age;
    int rollno;

};
int main()
{

  struct Student Student1;
  strcpy(Student1.name,"Akhil");
  printf("%s",Student1.name);

    return 0;
}