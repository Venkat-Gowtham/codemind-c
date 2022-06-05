#include<stdio.h>
int main()
{
    int n,a[100],b[100],i,j,temp,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    /*for(i=1;i<=100;i++)
    {
        b[p++]=i;
    }*/
    for(i=1;i<100;i++)
    { c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==i)
            {    c=1;
                break;
            }
            else
            {
                continue;
            }
        }
        if(c==1)
        {
            continue;
        }
        else
        {
            printf("%d",i);
            break;
        }
        
    }
    
}