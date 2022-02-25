#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,t,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]>t)
        {
            sum+=2;
        }
        else
        {
            sum+=1;
        }
    }
    printf("%d",sum);
}