#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<n)
        {
            c=1;
        }
        else
        {
            c=0;
            break;
        }
    }
    if(c==0)
    {
        printf("NO");
    }
    else 
    {
        printf("YES");
    }
    return 0;
}