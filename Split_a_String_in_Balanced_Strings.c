#include<stdio.h>
int main()
{  
    char str[100];
    scanf("%[^'0']s",str);
    int i,c=0,count=0,flag=0,z;
    for(i=0;str[i]!=NULL;i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(str[i]=='R')
        {
            count++;
        }
        else if(str[i]=='L')
        {
            flag++;
        }
         if(count==flag)
         {
             z++;
         }
    } printf("%d",z);
    
}