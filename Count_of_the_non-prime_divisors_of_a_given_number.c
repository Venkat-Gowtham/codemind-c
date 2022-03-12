#include<stdio.h>
int prime(int num)
{
    int i;
    for (i=2; i*i<=num; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,c=1;
    scanf("%d",&n);
    for (i=2; i<=n; i++)
    {
        if (n%i==0 && prime(i)==0)
        {
            c++;
        }
    }
    printf("%d",c);
}