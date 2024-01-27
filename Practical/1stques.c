#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    int i;
    int j;
    int value[20];
    int prod=1;
    int res=0;

    printf("no of elements: ");
    scanf("%d",&x);
    printf("enter the elements:\n");
          
       for(i=0;i<=x-1;i++)
    {
      scanf("%d",&value[i]);
      if(i==0||i%2==0)
        {
            
             res=res+value[i];
    
        }
        else if(i==1||i%2 !=0)
        {
            
            prod=prod*value[i];

        }
    }
     printf("sum of even indexes is %d\n",res);
     printf("product of odd indexes is %d",prod);
      
       
return 0;
}