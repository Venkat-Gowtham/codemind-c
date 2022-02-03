#include<stdio.h>
int main()
{
    int n,r,i,fact=0;
    scanf("%d",&n);
   for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            fact+=i;
        }
   
    }
    if(fact>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}