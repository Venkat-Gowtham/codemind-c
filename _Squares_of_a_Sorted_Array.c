#include<stdio.h>
int main()
{
    int n,i,t,j,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        b[i]=(a[i]*a[i]);
    }
   for (i =0;i< n;++i) 
        {
 
            for (j=i+1;j<n;++j)
            {
                if(b[i]>b[j]) 
                {
                    t=b[i];
                    b[i] = b[j];
                    b[j] = t;
                }
            }
        }
        for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
        

}