#include<stdio.h>
int main()
{
    int n,i,se,a[100],min,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
       if(min>a[i])
       {
           t=min;
           min=a[i];
           a[i]=t;
       }
    }
  
 printf("%d",min);
}