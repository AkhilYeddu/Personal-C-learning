#include <stdio.h>
int main()
{
  int vec;
  int x[99];
  int y[99];
  int z[99];
  int resx=0;
  int resy=0;
  int resz=0;
  printf("how many vectors?: ");
  scanf("%d",&vec);
  for(int i=1;i<=vec;i++)
  {
     printf("enter x coord of %d vector: ",i);
    scanf("%d",&x[i]); 

  }
  printf("\n");
             for(int i=1;i<=vec;i++)
    {
        resx+=x[i]; 
    }
    for(int i=1;i<=vec;i++)
  {
     printf("enter y coord of %d vector: ",i);
    scanf("%d",&y[i]); 

  }
  printf("\n");
             for(int i=1;i<=vec;i++)
    {
        resy+=y[i]; 
    }
    for(int i=1;i<=vec;i++)
  {
     printf("enter z coord of %d vector: ",i);
    scanf("%d",&z[i]); 

  }
  printf("\n");
             for(int i=1;i<=vec;i++)
    {
        resz+=z[i]; 
    }
    
 if(resx==0&&resy==0&&resz==0)
 {
    printf("yes");
 }
 else{
    printf("no");
 }
  
    return 0;
}