#include<stdio.h>

int main()
{
    int i,j,c=0,b,flag=0;
    scanf("%d",&b);
    for(j=1;j<=b;j++)
    { c=0;
      for(i=1;i<=j;i++)
     {
       if(j%i==0)
        {
         c++;
        }
     }
    if(c==9)
    {
      printf("%d ",j);
       flag++;  
    }
    }
    printf("
Total=%d",flag);
    return 0;
}