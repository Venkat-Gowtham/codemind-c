#include<stdio.h>
#include<string.h>
int main()
{   long long int n,i,c=0,res,d=0;
    char str[1000];
    scanf("%s",str);
    scanf("%lld",&n);
   int v=strlen(str);
   for(i=0;str[i]!=NULL;i++)
   {
       if (str[i]=='a')
       {
           c+=1;
       }
   }
   res=(n/v)*c;
   n=n%v;
   for(i=0;i<n;i++)
   {
       if(str[i]=='a')
       {
          d+=1;
       }
   }
   printf("%lld",res+d);
}