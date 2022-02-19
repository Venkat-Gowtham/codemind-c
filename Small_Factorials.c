#include<stdio.h>
int main()
{
    int rev,n,i,sum=0,t,r,f;
    scanf("%d",&t);
    while(t>0)
    {
      scanf("%d",&r);
      while(r>0)
     {
       rev=r%10;
       f=1;
       for(int i=rev;i>0;i--)
       {
           f=f*i;
       }
    printf("%d
",f);
       r=r/10;
      }
      t--;
     }      
      
    
    
}