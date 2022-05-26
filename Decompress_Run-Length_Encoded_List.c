#include<stdio.h>
int main()
{
    int n,a[100],b[100],i,j,v,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i+1<n)
        {
         v=a[i];
         for(j=0;j<v;j++)
         {
             b[k]=a[i+1];
             k++;
         }
        }
        i+=1;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
}