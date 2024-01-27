#include <stdio.h>
int main()
{

    printf("\n\nTABLE\n\n");
int input;
    printf("which table you want to print? ");
    scanf("%d",&input);
    

        for(int i=1;i<=10;i++)
        {
            
            printf("%d*%d =%d\n",input,i,input*i);
        }
    


    return 0;
}