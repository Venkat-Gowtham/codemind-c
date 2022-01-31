#include<stdio.h>
int main()
{
    int L,B,W,C,area,cost;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    area=(L+2*W)*(B+2*W)-(L*B);
    cost=C*area;
    printf("%d",cost);
}