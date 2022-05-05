#include<stdio.h>
int ugly(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n<=0)
    {
        return 0;
    }
    if(n%2==0)
    {
        return ugly(n/2);
    }
    if(n%3==0)
    {
        return ugly(n/3);
    }
    if(n%5==0)
    {
        return ugly(n/5);
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(ugly(n)==1)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
    }
    
}