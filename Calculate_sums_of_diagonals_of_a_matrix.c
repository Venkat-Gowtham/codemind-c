#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int i,j,mat1[a][a],res=0,sum=0;
    for(i=0;i<a;i++)
    {  
       for(j=0;j<a;j++)
      {
       scanf("%d",&mat1[i][j]);
      }
    }
    for(i=0;i<a;i++)
      { 
        for(j=0;j<a;j++)
        {
            if(i==j)
            {
                res+=mat1[i][j];
            }
        }
      }
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                if(i==a-j-1)
                {
                    sum+=mat1[i][j];
                }
            }
        }
        printf("Principal Diagonal:%d
",res);
        printf("Secondary Diagonal:%d",sum);
}