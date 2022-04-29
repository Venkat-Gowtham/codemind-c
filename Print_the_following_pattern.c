#include<stdio.h>
int main()
{
    int n,i,a=1,b;
    scanf("%d",&n);
    b=n;
    while(b>0)
    {
    for(i=a;i<=n;i++)
    {
        printf("%d ",i);
        
    }
    printf("
");
    a++;
    b--;
    }
}