 #include <stdio.h>
    int main()
    {
 
        int i, j, a, n, number[100],c=0,k;
        scanf("%d%d", &n,&k);
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
         for(i=0;i<n;i++)
         {
             if(number[i]%k!=0)
             {
                 c++;
             }
         }
         printf("%d",c);
    }