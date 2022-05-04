#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    int t,v=0,a,ls=0,fs=0;
    scanf("%lld%d",&n,&t);
    v=pow(10,t);
    a=n;
    while(n>=v)
    {
        n=n/10;
    }
    fs=n;
   // printf("%d",fs);
    ls=a%v;
    if(fs>ls)
    {
        printf("%d",fs-ls);
    }
    else if(fs==ls)
    {
       printf("%d",fs-ls);
    }
    else
    {
printf("%d",ls-fs);
    }
    
}