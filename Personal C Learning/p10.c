#include <stdio.h>
void indian();
void french();


int main()
{
    char nation;
    printf("press F for french and I for indian.");
    scanf("%c",&nation);

    if(nation=='I')
    {
        indian();
    }
    // else{
    //     french();
    // }
    if(nation=='F')
    {
        french();
     }
   
   
    return 0;
}
 void indian()
    {
        printf("namaste!");
    }
void french()
    {
        printf("bonjour!");
    }