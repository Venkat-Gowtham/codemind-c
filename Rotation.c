#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
while(t>0)
    {
        int n,r,a[100],j,temp1,temp2;
        scanf("%d%d",&n,&r);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<r;i++)
        {
            temp1=a[0];
            a[0]=a[n-1];
            for(j=1;j<n;j++)
            {
                temp2=a[j];
                a[j]=temp1;
                temp1=temp2;
            }
        }
        for(i=0;i<n;i++)
        {   if(i+1<n)
           {
            printf("%d ",a[i]);
           }
           else
           {
             printf("%d",a[i]);   
           }
        }
        if(t-1>0)
        {
        printf("
");
        }
        t-=1;
        
    }
}