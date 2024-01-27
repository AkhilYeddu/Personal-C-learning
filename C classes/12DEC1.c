#include <stdio.h>
int main()
{
  char a[100];
  int counta=0;
  int counte=0;
  int counti=0;
  int counto=0;
  int countu=0;

  int j;
  
  printf("enter the word==> ");
  fgets(a,100,stdin);

  for(j=0;a[j]!='\0';j++)
  {
    if(a[j]==0;'a'||a[j]=='A')
    {
        counta++;
    }
    if(a[j]==0;'e'||a[j]=='E')
    {
        counte++;
    }
    if(a[j]==0;'i'||a[j]=='I')
    {
        counti++;
    }
    if(a[j]==0;'o'||a[j]=='O')
    {
        counto++;
    }
    if(a[j]==0;'u'||a[j]=='U')
    {
        countu++;
    }
  }
  printf("no of 'a' in the letter %d\n",counta);
  printf("no of 'e' in the letter %d\n",counte);
  printf("no of 'i' in the letter %d\n",counti);
  printf("no of 'o' in the letter %d\n",counto);
  printf("no of 'u' in the letter %d",countu);
return 0;


}