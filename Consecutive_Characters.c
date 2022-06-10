#include<stdio.h>
#include<string.h>
int main()
{  
    char str[10000];
    fgets(str,sizeof(str),stdin);
    int c=1,x=1,i,j,v;
    v=strlen(str);
    for(i=0;i<v;i++)
    {c=1;
      for(j=i;j<v-1;j++)
        {
            if((str[j]==str[j+1]))
            {
                c+=1;
                if(x<c)
                {
                    x=c;
                }
            }
            else
            {
                if(x<c)
                {
                    x=c;
                }
                c=1;
            }
        }
    }
    printf("%d",x);
}