#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        int t,a[100],c=1,i;
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<t-1;i++)
        {
            if(a[i]>a[i+1])
            {
                c+=1;
            }
        }
        printf("%d
",c);
    }
}