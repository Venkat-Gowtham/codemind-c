#include<stdio.h>
int main()
{
    int n,a[10000],i,ma,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        ma=a[i];
        for(j=i;j<n;j++)
        {
            if(a[j]>ma)
            {
                ma=a[j];
            }
        }
        printf("%d ",ma);
    }
    printf("-1");
}