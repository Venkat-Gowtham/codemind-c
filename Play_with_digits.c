#include<stdio.h>
int res(int n)
{
    int r,ds=0;
    while(n>0)
    {
        r=n%10;
        ds+=r;
        n=n/10;
    }
    return ds;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=res(a[i]);
    }
    printf("%d",sum);
}