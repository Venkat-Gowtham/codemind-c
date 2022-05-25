#include<stdio.h>
int main()
{
    int n,m,b[100],a[100],i,j,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&q);
    int c=0;
    for(i=0;i<n;i++)
    {
        if(q>=a[i] && q<=b[i])
        {
            c+=1;
        }
    }
    printf("%d",c);
    
}