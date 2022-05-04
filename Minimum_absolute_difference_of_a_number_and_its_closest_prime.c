#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,f,df=0,v,vf=0;
    scanf("%d",&n);
    for(i=n;i<=10000;i++)
    {
        if(prime(i)==1)
        {
            f=i;
            df=f-n;
            break;
        }
    }
    for(i=n;i>=1;i--)
    {
        if(prime(i)==1)
        {
            v=i;
            vf=n-v;
            break;
        }
    }
    if(vf==df)
    {
        printf("%d",vf);
    }
    else if(vf>df)
    {
        printf("%d",df);
    }
    else
    {
        printf("%d",vf);
    }
    
}