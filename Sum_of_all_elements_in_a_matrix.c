#include<stdio.h>
int main()
{
    int m,n,a[10][10],i,j;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int s=0,k=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            s+=a[i][j];
        }
    }
    printf("%d",s);
    
}