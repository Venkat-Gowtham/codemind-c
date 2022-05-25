#include<stdio.h>
int main()
{
    int n,ro,a[100],i,v,x,b[100],q,j;
    scanf("%d%d%d",&n,&ro,&q);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<q;i++)
    {
        scanf("%d",&b[i]);
    }
    while(ro>0)
    {
        int x=a[0],v;
        a[0]=a[n-1];
        for (i=1; i<n; i++)
        {
            v=a[i];
            a[i]=x;
            x=v;
        }
        ro--;
    }
    j=0;
    for (i=0; i<n; i++)
    {   
        if(j<q)
        {
        v=b[j];
        printf("%d
",a[v]);
        j++;
        }
    }
    return 0;
}