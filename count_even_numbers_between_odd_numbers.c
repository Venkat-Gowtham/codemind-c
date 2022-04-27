#include<stdio.h>
int main()
{
    int n,a[100],i,v,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    { if(i+2<n)
     {
        if(a[i]%2!=0 && a[i+2]!=0)
        {
            if(a[i+1]%2==0)
            {
                c++;
            }
        }
     }
    }
   
    printf("%d",c);
}