#include<stdio.h>
int main()
{
    int n,a[1000],i,j,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    { c=0;
        for(j=0;j<n;j++)
    {
        if(j!=i)
         {
            if(a[j]==a[i])
            {
               c++;
            }
         }
        }
        if(c==0)
     {
         printf("%d ",a[i]);
         d++;
     }
    }
    if(d==0)
    {
        printf("-1");
    }
}