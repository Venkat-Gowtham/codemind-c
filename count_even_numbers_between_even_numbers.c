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
    {
        if(a[i]%2==0)
        {
            v=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]%2==0)
        {
            j=i;
            break;
        }
    }
    for(i=v+1;i<j;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
    }
    
    printf("%d",c);
}