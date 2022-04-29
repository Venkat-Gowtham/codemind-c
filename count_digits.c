#include<stdio.h>
int main()
    {
        int n,a[100],i,j,r,c;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        { c=0;
          if(a[i]==0)
          {
              printf("1 ");
              continue;
          }
            while(a[i]!=0)
            {  r=a[i]%10;
                c=c+1;
                a[i]=a[i]/10;
            }
            printf("%d ",c);
        }
    }