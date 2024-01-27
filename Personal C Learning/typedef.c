#include <stdio.h>
#include <string.h>
#include <math.h>
//typedef= typedef is a reserved keyword which gives datatype a "nickname".
typedef struct
{
    char name[20];
    char password[20];
    int id;

}user;
int main()
{
    user user1={"Akhil","Password123",18};
    user user2={"Nikhil","Password456",19};

    printf("%s\n%s\n%d\n",user1.name,user1.password,user1.id);
    printf("%s\n%s\n%d",user2.name,user2.password,user2.id);

    return 0;
    }