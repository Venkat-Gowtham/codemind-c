#include<stdio.h>

int main()
{ int n,r,sum=0,temp;
  scanf("%d",&n);
temp=n;
  while(temp>0)
     {
       r=temp%10;
       sum += r;
       temp=temp/10;
      }
    if(n%sum==0)
    {
     printf("True");
    }
    else
    {
     printf("False");
    }
    return 0;
}