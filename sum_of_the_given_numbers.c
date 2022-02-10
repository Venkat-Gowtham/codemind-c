#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int m,n,sum;
    while(t>0)
    {  sum=0;
        scanf("%d%d",&m,&n);
        sum= m+n;
        printf("%d
",sum);
        t--;
    }
}