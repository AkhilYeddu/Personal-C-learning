#include <stdio.h>
#include <string.h>
int main()
{
    //str functions
     char str1[25];
     char str2[25];

     int len1,len2,i,n;
    

     printf("enter first word\n");
     gets(str1);
     printf("your word is %s\n",str1);
     printf("enter second word\n");
     gets(str2);
     printf("your word is %s\n",str2);
     printf("enter n \n");
     scanf("%d",&n);
     

     for(i=0;i<len1;i++)
     {
        if(str1[i]!='\0')
        {
           len1++;

        }
        printf("%d",len1);
     }



    return 0;
}