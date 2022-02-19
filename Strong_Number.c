#include<stdio.h>
int main()
{
    int rev,n,i,j,sum=0,t=1,r,f;
    scanf("%d",&r);
    n=r;
   while(n>0)
   {
       rev=n%10;
       f=1;
       for(int i=rev;i>0;i--)
       {
           f=f*i;
       }
       sum+=f;
       n=n/10;
   }
    if(sum==r)
    {
        printf("The number %d is a strong number",r);
    }
    else
    {
        printf("The number %d is not a strong number",r);
    }
    
}