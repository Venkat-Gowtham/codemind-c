#include<stdio.h>
int main()
{
    int n,df,skip=0,c=0,a[100],i;
    scanf("%d%d",&n,&df);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=df)
        {
            c+=1;
        }
        else if(a[i]>df)
        {
            skip+=1;
        }
        if(skip==2)
        {
            break;
        }
    }
    printf("%d",c);
}