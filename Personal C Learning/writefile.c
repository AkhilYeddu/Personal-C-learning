#include <stdio.h>
int main()
{
      FILE *pF= fopen("AkhilY.txt","w");
      fprintf(pF,"this is called apprending. Saves the past text and prints new one\n");
     fclose(pF);

      FILE *pA=fopen("C:\\Users\\akhil\\Documents\\FilethroughC.txt","w");  //2 ways to write a file
      fprintf(pA,"First time writing a file.");   //absolute file path || relative file path
      fclose(pA);



    // if(remove("AkhilY.txt")==0)
    // {
    //     printf("File deleted successfully");  //TO DELETE A FILE
    // }
    // else{
    //     printf("File cant be found!");
    // }

    return 0;
}