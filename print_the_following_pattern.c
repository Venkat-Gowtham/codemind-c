#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    m=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          printf(" ");  
        }
        m-=1;
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("0");
        for(j=1;j<i+1;j++)
        {
            printf("%d",j);
        }
        printf("
");
    }
    
}












