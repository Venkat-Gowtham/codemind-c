#include<stdio.h>
int main()
{
    int m,n,r,rev=0, temp,i;
    scanf("%d
%d",&m,&n);
    
    for(i=m;i<=n;i++)
    {
        temp=i; 
        rev=0;
        while(temp>0)
        {
            r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        if(rev==i)
        {
            printf("%d ",i);
        }
    }
}