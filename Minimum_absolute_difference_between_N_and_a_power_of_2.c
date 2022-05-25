#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    long long int i,z,x,d1,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int x=pow(2,i);
        if(x==n)
        {
          d=0;
          break;
        }
        else if(x>n)
        {
            d=x-n;
            d1=n-(x/2);
            break;
        }
    }
    if(d<=d1)
    {
        printf("%lld",d);
    }
    else
    {
        printf("%lld",d1);
    }
    
}