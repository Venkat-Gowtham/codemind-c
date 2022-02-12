#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],c=0,d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        else
       {
           d++;
       }
    }
    printf("%d %d",c,d);
}