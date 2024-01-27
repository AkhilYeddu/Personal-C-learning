#include <stdio.h>
int main()
{
   int x[99];
   int vec;
   int y[99];
   int z[99];
   int resx=0;
   int resy=0;
   int resz=0;
   scanf("%d",&vec);


for(int i=0;i<vec;i++)
{
   scanf("%d %d %d",&x[i],&y[i],&z[i]);
   

}
for(int i=0;i<vec;i++)
{
resx+=x[i];

}
for(int i=0;i<vec;i++)
{
   resy+=y[i];
}
for(int i=0;i<vec;i++)
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