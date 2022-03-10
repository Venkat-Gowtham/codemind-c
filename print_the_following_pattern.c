#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
    for(i=n;i>=1;i--)
    {
       printf("%d ",i);
    }
    printf("
");
    }
}