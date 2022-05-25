#include<stdio.h>
int main()
{
    int n,ro,a[100],i,v,x;
    scanf("%d%d",&n,&ro);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=ro;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<ro;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}