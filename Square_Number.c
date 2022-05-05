#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(pow(i,2)==n)
        {
            printf("True");
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
}