#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    float gpa;

};
int main()
{
    struct student student1={"Akhil",10.0};
    struct student student2={"Nikhil",9.0};
    struct student student3={"Pranav",8.0};
    struct student student4={"Vinay",7.0};

    struct student students[]={student1,student2,student3,student4};
    for(int i=0;i<sizeof(students)/sizeof(students[0]);i++)
    {
        printf("%s\t",students[i].name);
        printf("%.2lf\n",students[i].gpa);
    }


   
    


    return 0;
}