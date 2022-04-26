#include<stdio.h>
int main()
{
    int a,b,i,v,u,c=0,count=0,r,s,x;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
      u=i,v=i,c=0,count=0,x=i;
      while(v>0)
      {    s=s%10;
          count++;
          v=v/10;
      }
      while(x>0)
      {
        r=x%10;
        if(r!=0 && u%r==0)
        {
            c++;
        }
        x=x/10;
      }
    if(count==c)
    {
        printf("%d ",u);
    }
    }
}