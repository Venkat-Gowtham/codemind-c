#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int a[n],res=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    res=a[0];
    for(i=1;i<n;i++)
    {
        res=res+a[i];
    }
    printf("%lld",res);
}