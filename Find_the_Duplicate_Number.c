#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,a[n],c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    printf("%d",a[i]);
                   c=1;
                    break;
                    
                }
            }
        }
        if(c==1)
        {
            break;
        }
    }
}