#include<stdio.h>
int main()
{
    int r,max=0,n;
    scanf("%d",&n);
   max=0;
    while(n>0)
    {
        r=n%10;
        if(r>max)
        {
            max=r;
        }
        n=n/10;
    }
    printf("%d",max);
}