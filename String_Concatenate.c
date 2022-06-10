#include<stdio.h>
#include<string.h>
int main()
{  
    char str[10000],rev[10000],val[20000],temp;
   scanf("%s",str);
   scanf("%s",rev);
    int v=strlen(str),k=0,i,j,q;
    int l=strlen(rev);
    for(i=0;i<v;i++)
    {
        val[i]=str[i];
    }
    for(j=i;j<v+l;j++)
    {
        val[j]=rev[k++];
    }
    q=strlen(val);
    for(i=0;i<q;i++)
    {
      for(j=i+1;j<q;j++)
        {
            if(val[i]>val[j])
            {
                temp=val[i];
                val[i]=val[j];
                val[j]=temp;
            }
        }
    }
    for(i=0;i<q;i++)
    {
        printf("%c",val[i]);
    }
}