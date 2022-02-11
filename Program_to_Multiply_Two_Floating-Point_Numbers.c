//functions//
#include<stdio.h>
float product(float a,float b)
{
	float pro=a*b;
	return pro;
}
int main ()
{
	float x,y;
	scanf("%f%f",&x,&y);
	printf("%.2f",product(x,y));
}
