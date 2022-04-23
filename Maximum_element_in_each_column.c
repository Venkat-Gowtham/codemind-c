#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n],i,j,max;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  int k=0;
    for(i=0;i<n;i++)
    { 
            max=a[0][k];
            k++;
        for(j=0;j<m;j++)
        {
          if(max>a[j][i])
          {
              continue;
          }
          else
          {
              max=a[j][i];
          }
        }
        printf("%d
",max);
    }
}