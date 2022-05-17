#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        int n,a[100],se,x=0,y=0,sum=0,c=0,j,i;
        scanf("%d%d",&n,&se);
        for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        { sum=0;
            for(j=i;j<n;j++)
            {
                sum+=a[j];
                if(sum==se)
                {
                    x=i;
                    y=j;
                    c=1;
                    break;
                }
            }
            if(c==1)
            {
                break;
            }
        }
        if(k<=t-1)
        {
         if(c==1)
        {
            printf("%d %d
",x+1,y+1);
        }
        else
        {
            printf("-1
");
        }
        }
        else
        {
            if(c==1)
          {
            printf("%d %d",x+1,y+1);
          }
          else
          {
              printf("-1");
          }
        }
        
    }
}