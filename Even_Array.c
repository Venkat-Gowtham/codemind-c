#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
     return 0;
}