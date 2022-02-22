#include<stdio.h>
int main()
{
    int n,i,j,c;
     char str [n];
    scanf("%[^'0']s",str);
    for(i=0;str[i]!=NULL;i++)
     { c=0;
       for(j=0;str[j]!=NULL;j++)
        {
           if(i!=j)
         {
           if(str[j]==str[i])
             {   
                c++;
              break;
             }
         }
        }
        if(c>0)
        {
          break;
        }
        else
        { 
          i++;
        }
     }
    if(c==0)
    printf("Unique Number");
    else
     printf("Not Unique Number");
}