#include<stdio.h>
int main()
{
    int n,a[100],i,j,b[100],c=0;
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
                if (a[j]<a[i])
                {
                    c++;
                }
            }
        }
        b[i]=c;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}