#include<stdio.h>
int main()
{
    int n,i,j,m,c=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=-1000;
    for(i=0;i<n;i++)
    {  c=0;
        for(j=i;j<n;j++)
        {
            c+=a[j];
            if(m<c)
            {
                m=c;
            }
            
        }
    }
    printf("%d",m);
}