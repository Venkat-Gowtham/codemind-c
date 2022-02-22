#include<stdio.h>
int main()
{
    int n,i,j,c,p;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]!=-1)
        {
            c=1;
            for(j=0;j<n;j++)
            {
                if(x[i]==x[j] && i!=j)
                {
                    c++;
                    x[j]=-1;
                }
            }
            p+=c/2;
        }
    }
    printf ("%d",p);
    
}