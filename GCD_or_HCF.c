#include<stdio.h>
 int main()
{ 
   int a,b;
  scanf("%d%d",&a,&b);
  while(a!=b)
   {
     if(a<b)
      { 
        b=b-a;
      }
     if(a>b)
       {
         a=a-b;
       }
   }
      printf("%d",a);
    
     return 0;
}