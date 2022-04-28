#include<stdio.h>
int main()
{
    int n,sum=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
        if(n==0&&sum>9)
        {
            n=sum;
            sum=0;
        }
        else if(sum<9&&n==0)
        {
            printf("%d",sum);
            break;
        }
        
    }
}