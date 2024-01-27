// //camel casing akhilIsBoredAsHell(except first word, each word has its first letter  capital) without space
 #include <stdio.h>
 int main()
 {
//     // printf("hello world");
//     // return 0;
//     int x=5;
//     int y= x+x+++ ++x;
//         //x++ post increment ++x pre increment
//     printf("%d",y);
    
//     //ternary operator
//=,+=,-=,*=,/=,%=,++,-- logical operator
// ==,!=,<,>,<=,>= relational operator
//question take 3 inputs, and tell it is a right angle triangle or not.
//  B > O > D,M > A,S ALWAYS LEFT TO RIGHT
//question take 3 positive integers input and print the least of them.

/*int x=3;
if(x=6)
{
    printf("%d\n",x);
}
else
{
    printf("%d\n",x+1);
}
printf("%d\n",x++);
printf("%d",x);*/

int x;
int y;
int z;
printf("enter the 1st number : ");
scanf("%d",&x);
printf("enter the 2nd number : ");
scanf("%d",&y);
printf("enter the 3rd number : ");
scanf("%d",&z);

if(x>y&&x>z)
{
    printf("%d is the greatest of all",x);
}
if(y>z&&y>x) //if(y>z&&y>x)
{
    printf("%d is the greatest of all",y);
}

 if(z>x&&z>y)
{
    printf("%d is the greatest of all",z);
}

     
   return 0;
 }