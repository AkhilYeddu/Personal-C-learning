#include <stdio.h>
const int MAX=4;
int main()
{
    char *names[]={
        "Zara Ali",
        "Hina Ali",
        "Shashu",
        "Coder Shashu",
    };
    for(int i=0;i<MAX;i++)
    {
       printf("[%d]=%s\n",i,names[i]);
    }
    return 0;
}