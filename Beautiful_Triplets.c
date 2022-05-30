#include<stdio.h>
int min(int z,int *a,int n)
{
    int x,i;
    x=a[z];
    for(i=z+1;i<n;i++)
    {
        if(a[i]<x)
        {
            x=a[i];
        }
    }
    return x;
}
int main()
{
    int n,a[100],i,j,c=0,temp,z=0,p=0,res[100];
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
    int k=n;
    while(k>0)
    {   int b[100],v,q;
        v=min(z,a,n);
        z++;
        q=0;
        c=0;
        for(i=0;i<n;i++)
        {
            b[q]=a[i]-v;
            q++;
        }
        for(i=0;i<q;i++)
        {
            if(b[i]>=0)
            {
                c++;
            }
        }
        res[p++]=c;
        k--;
    }
    int g;
    for(i=0;i<p;i++)
    { 
        for(j=0;j<p;j++)
        {
            if(i!=j)
            {
                if(res[i]==res[j])
                {
                    res[j]=-1000;
                }
            }
        }
        if(res[i]!=-1000)
        {
            printf("%d
",res[i]);
        }
    }
}