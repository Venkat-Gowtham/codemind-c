#include<stdio.h>
 int prime(int num)
 {
  int c=0,i;
  for(i=1;i<=num;i++)
 {   if(num%i==0)
     { c++;
     }
 }
    if (c==2)
    { 
    return 1;
    }
    else
    {
     return 0;
    }
}
int reverse(int n)
{
    int b,g,r=0;
    g=n;
      while(g>0)
      {
          b=g%10;
          r=(r*10)+b;
          g=g/10;
      }
      return prime(r);
}
int main()
{   int n,val,res;
    scanf("%d",&n);
    res=prime(n);
    val=reverse(n);
    if(res==1&&val==1)
    {
        printf("circular prime");
    }
    else if((res==1||val==1))
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
    
}