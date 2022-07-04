#include<stdio.h>
int main()
{
    int m,n,a[10][10],i,j,b[10][10];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int s=0,k=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
                if(j+1<m)
                {
                printf("%d ",a[i][j]+b[i][j]);
                }
                else
                {
                    printf("%d",a[i][j]+b[i][j]);
                }
        }
        printf("
");
    }
    
}