#include <stdio.h>
int main()
{
FILE *pF=fopen("C:\\Users\\akhil\\Documents\\Poem.txt","r");  //r for read
char buffer[255];
// fgets(buffer,255,pF);  //this only prints the first sentence
// printf("%s",buffer);

if(pF== NULL)
{
    printf("the file is not found");
}
 else
 {
    while(fgets(buffer,250,pF)!=NULL)    //while this prints the entire thing.
 {
     printf("%s",buffer);
 }
 }
fclose(pF);
return 0;
}