#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	double area,s;
	s=double (a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%.2lf",area);
	return 0;
}