#include<stdio.h>
int main()
{
    int n,max=0,x,a[100],temp,i,c,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    temp=a[0];
    while(temp>0)
    {
        max+=1;
        temp=temp/10;
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        c=0;
        while(temp>0)
        {
            c+=1;
            temp=temp/10;
        }
        if(c<max)
        {
            max=c;
        }
    }
   //printf("%d",max);
  // printf("
");
    for(i=0;i<n;i++)
    {   x=0;
         while(a[i]>0)
        {
            x+=1;
            a[i]=a[i]/10;
        }
      //  printf("%d",x);
        if(x==max)
        {
            count++;
        }
    }
    printf("%d",count);
}