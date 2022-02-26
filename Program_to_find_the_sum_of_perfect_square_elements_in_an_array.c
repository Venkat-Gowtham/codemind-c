#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int k;
    float r;
    scanf("%d",&n);
    int a[n],i,sum=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     r= sqrt(a[i]);
      k=r;
     if( k==r)
      {
        sum+=a[i];
       }
    }
    printf("%d",sum);
     return 0;
}