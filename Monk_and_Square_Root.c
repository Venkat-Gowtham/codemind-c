#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int m,n,z=0;
        long long int i;
        scanf("%d%d",&m,&n);
        for(i=0;i<n;i++)
        {
            if(i*i%n==m)
            {
                printf("%lld
",i);
                z=1;
                break;
            }
        }
        if(z==0)
        {
            printf("%d
",-1);
        }
        t--;
    }
}