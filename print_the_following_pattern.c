#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
    for(i=1;i<n-1;i++)
    {
        printf("%d",i);
    }
    for(j=n-3;j>=1;j--)
    {
        printf("%d",j);
    }
    printf("
");
    }
}