#include<stdio.h>
int main()
{
    int t,a,i,b,r,count=0;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d%d",&a,&b);
        count=0;
        for(i=a;i<=b;i++)
        {
           r= i%10;
           if(r==2||r==3||r==9)
           {
               count++;
           }
        }
        printf("%d
",count);
         t--;
    }
}