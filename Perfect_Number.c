#include<stdio.h>
int perfect(int n)
{  int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        return true;
    }
    else
    return false;
}
int main()
{
    int x,res;
    scanf("%d",&x);
    res=perfect(x);
   if (res==1)
   printf("True");
   else
   printf("False");
}   