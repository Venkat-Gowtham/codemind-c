#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0,m=0,x=0;
    char str[100],rev[100],t[100];
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
       if((str[i]>='a' && str[i]<='z')|| (str[i]>='A' && str[i]<='Z'))
       {
           t[k++]=str[i];
       }
    }
    for(i=k-1;i>=0;i--)
    {
       rev[m++]=t[i];
    }
    for(i=0;i<l;i++)
    {
       if((str[i]>='a' && str[i]<='z')|| (str[i]>='A' && str[i]<='Z'))
       {
           str[i]=rev[x++];
       }
    }
    for(i=0;i<l;i++)
    {
      printf("%c",str[i]);
    }
    
}