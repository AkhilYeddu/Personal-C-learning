#include<stdio.h>
int main()
{
    int score;
    printf("enter score of the student.");
    scanf("%d",&score);
    if(score>=30&&score<70)
    {
        printf("B grade");
    
    }
    else if(score>=70&&score<90)
    {
        printf("A grade");
        
    }
    else if(score>=90&&score<=100)
    {
        printf("A++ grade");
    }
    
    

    return 0;
}