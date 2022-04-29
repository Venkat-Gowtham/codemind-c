#include <stdio.h>
    int main()
    {   int t,j;
        scanf("%d",&t);
        for(j=0;j<t;j++)
     {
        int i, j, a, n, number[200000],d=0;
        scanf("%d", &n);
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                    d++;
                }
            }
        }
        //for(i=0;i<n;i++)
        //{
       //     printf("%d",number[i]);
     //   }
      //  
        if(d==0)
        {
            printf("0");
        }
        else
        {
            printf("%d",(number[n-1])-number[0]);
        }
        printf("
");
        //printf("
%d",d);
     }
    }