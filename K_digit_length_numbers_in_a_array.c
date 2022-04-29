#include<stdio.h>
int main()
    {
        int n,a[100],i,j,r,c,k,d=0;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        { c=0;
          if(a[i]==0)
          {
              c=1;
          }
          else
          {
            while(a[i]!=0)
            {  r=a[i]%10;
                c=c+1;
                a[i]=a[i]/10;
            }
            //printf("%d ",c);
          }
          if(c==k)
          {
              d++;
          }
        }
        printf("%d",d);
    }