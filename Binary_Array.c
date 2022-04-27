#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0 && a[i]!=1)
        { printf("False");
            break;
        }
        else
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("True");
    }
}