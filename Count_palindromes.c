#include<stdio.h>
int main()
{
    int n,d=0;
    scanf("%d",&n);
    int i,rev,temp,r,arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        rev=0;
        while(temp>0)
        {
            r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        if(rev==arr[i])
        {
            d++;
        }
    }
    printf("%d",d);
}