#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int i,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,x=0,j=0,res=0;
    scanf("%[^
]s", s);
 for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            res++;
        }
    }
    printf("%d",res);
}