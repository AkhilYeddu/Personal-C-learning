#include <stdio.h>
#include <string.h>

struct Teacher
{
int id;
char name[20];

};
int main()
{
struct Teacher T;
T.id=69;
strcpy(T.name,"Noob Saibot");

printf("%s %d",T.name,T.id);

    return 0;
}