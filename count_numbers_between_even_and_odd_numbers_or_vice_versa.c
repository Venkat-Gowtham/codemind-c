#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,j,c=0,v,u;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {  if(i+2<n)
      {
        if((a[i]%2!=0 && a[i+2]%2==0)||(a[i]%2==0 && a[i+2]%2!=0))
        {
            c++;
        }
      }
    }
    printf("%d",c);
}