#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,m,a[110],f,j,i;
        scanf("%d",&n);
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&a[i]);
        }
        m=1;
        while(1)
        {
            f=0;
            for(j=0;j<n-1;j++)
            {
                if(a[j]==m)
                {
                    f=0;
                    break;
                }
                else
                {
                    f=1;
                }
            }
            if(f==1)
            {
                break;
            }
            else
            {
                m+=1;
            }
        }
        printf("%d
",m);
        t--;
    }
}