#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],d,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        d=log10(arr[i])+1;
        if(d%2==0)
        {
         c++;
        }
    }
    printf("%d",c);
}