#include<stdio.h>
#include<string.h>
int main()
{  
    char str[10000];
    fgets(str,sizeof(str),stdin);
    int c=1,x,i,j,v;
    v=strlen(str);
    for(i=0;i<v;i++)
    {c=1;
      for(j=i;j<v-1;j++)
        {
            if((str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')&&(str[j+1]=='a'||str[j+1]=='e'||str[j+1]=='i'||str[j+1]=='o'||str[j+1]=='u'))
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