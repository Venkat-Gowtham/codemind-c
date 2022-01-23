#include<stdio.h>
int main()
{ 
     int a=0,b=1,c,i,n,arr[100],count;
       scanf("%d",&n);
       for(i=0;i<100;i++)
        {   arr[i]=a;
             c=a+b;
             a=b;
             b=c;
        }
        for(i=0;i<100;i++)
         {
          if(n==arr[i])
             {  
                 count=1;
                 break;
             }
          }
      if(count==1)
      {
          printf("True");
      }
      else
      { 
          printf("False");
      }
   
}