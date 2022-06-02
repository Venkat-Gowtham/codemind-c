#include<stdio.h>
void sort(int *arr,int a){
    int i,j;
    for (i=0; i<a; i++){
        for (j=0; j<a-1; j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int t,k;
    scanf("%d",&t);
    for (k=0; k<t; k++){
        int a,b;
        scanf("%d%d",&a,&b);
        int arr[a+b],i;
        for (i=0; i<a+b; i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,a+b);
        for (i=0; i<a+b; i++){
            if (i!=a+b-1){
                printf("%d ",arr[i]);
            }
            else{
                printf("%d",arr[i]);
            }
        }
        if (k!=t-1){
            printf("
");
        }
    }
    return 0;
}