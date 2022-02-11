#include<stdio.h>
int reverse(int n)
{
   int rev=0,r;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int x,sum,j=1;
    scanf("%d",&x);
    while(j>0)
    {
        sum=x+reverse(x);
        if(sum==reverse(sum))
        {
            printf("%d",sum); 
            break;
        }
        else
        {
            x=sum;
            continue;
        }
    }
}