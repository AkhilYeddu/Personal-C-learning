#include <stdio.h>
int akhil;
int main()
{ 
    int i,n;
    printf("enter the number : ");
    scanf("%d", &n);
    for(i=2;i<n;i++){
      if(n%i==0)
      akhil=akhil+1;}
    if(akhil==0)
    printf("number is prime");
    else printf("not a prime");
    return 0;
}