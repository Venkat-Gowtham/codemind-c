#include<stdio.h>
int main()
{
    int n,i,a[100],j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=0,mc=0;
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c+=1;
                }
            }
        }
        if(c==mc)
        {
            mc=c;
            if(a[i]<m)
            {
                m=a[i];
            }
        }
        else if(c>mc)
        {
            mc=c;
            m=a[i];
        }
    }
    printf("%d",m);
}