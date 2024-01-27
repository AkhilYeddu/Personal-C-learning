#include <stdio.h>

int minarray(int array[],int size)
{
int i;
int min=arr[0];
    for(i=1;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        
    }
    return min;
}
int main()
{
    
    int min;
     int number={4,5,6,7,8,9};
     min=minarray(number,6);
     
     printf("%d is minimum",min);

    return 0;
}