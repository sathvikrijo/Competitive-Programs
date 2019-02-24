#include <stdio.h>
#include <stdlib.h>

int main()
{
   int t,n,j,a[101],i,fact,add,ans,count;
   scanf("%d",&t);
   while(t!=0)

   {
       t--;
    fact=1;
    count=0;
    ans=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]==0)
       {
           i--;
           n--;
       }
   }

   for(i=1;i<=n;i++)
   {
       fact=fact*i;
   }

   for(i=0;i<n;i++)
   {
       add=0;
       for(j=1;j<=n;j++)
       {
           if(a[i]!=0)
           {


           add=(add*10)+a[i];
           }
           else
           {
            add=0;
           }
       }
       ans=ans+((fact/n)*add);
   }
    printf("\n%d",ans);
   }
    return 0;
}
