//x1,x3,x2,y2,y1,y3
#include<stdio.h>
int main()
{
    int n,a[1000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=(n/2);
    for(i=0;i<n/2;i++)
    {  if(j<n)
     {
        printf("%d %d ",a[i],a[j]);
        j++;
     }
    }
}